---
title: Delete Nodes And Return Forest
summary: Delete Nodes And Return Forest LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/delete-nodes-and-return-forest", "/blog/posts/delete-nodes-and-return-forest", "/delete-nodes-and-return-forest"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, delete-nodes-and-return-forest solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Delete Nodes And Return Forest/problem-solving.webp
    alt: Delete Nodes And Return Forest
    hiddenInList: true
    hiddenInSingle: false
---


<h2>1110. Delete Nodes And Return Forest</h2><h3>Medium</h3><hr><div><p>Given the <code>root</code>&nbsp;of a binary tree, each node in the tree has a distinct value.</p>

<p>After deleting&nbsp;all nodes with a value in <code>to_delete</code>, we are left with a forest (a&nbsp;disjoint union of trees).</p>

<p>Return the roots of the trees in the remaining forest.&nbsp; You may return the result in any order.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2019/07/01/screen-shot-2019-07-01-at-53836-pm.png" style="width: 237px; height: 150px;"></strong></p>

<pre><strong>Input:</strong> root = [1,2,3,4,5,6,7], to_delete = [3,5]
<strong>Output:</strong> [[1,2,null,4],[6],[7]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the given tree is at most <code>1000</code>.</li>
	<li>Each node has a distinct value between <code>1</code> and <code>1000</code>.</li>
	<li><code>to_delete.length &lt;= 1000</code></li>
	<li><code>to_delete</code> contains distinct values between <code>1</code> and <code>1000</code>.</li>
</ul></div>

---




```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    set<int> s;
    vector<TreeNode*> ans;
    
    TreeNode* solve(TreeNode* root, bool isRoot){
        if (root == NULL)
            return NULL;
        bool sd=(s.find(root->val) != s.end());
        if(isRoot && !sd)
            ans.push_back(root);
        root->left=solve(root->left, sd);
        root->right=solve(root->right, sd);
        return sd==true? NULL:root;     
    }
    
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        for(int i: to_delete)
            s.insert(i);
        solve(root, true);
        return ans;
    }
};
```
