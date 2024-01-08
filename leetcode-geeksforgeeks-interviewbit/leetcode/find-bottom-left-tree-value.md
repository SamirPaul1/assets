---
title: Find Bottom Left Tree Value
summary: Find Bottom Left Tree Value LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/find-bottom-left-tree-value", "/blog/posts/find-bottom-left-tree-value", "/find-bottom-left-tree-value"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, find-bottom-left-tree-value solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Find Bottom Left Tree Value/problem-solving.webp
    alt: Find Bottom Left Tree Value
    hiddenInList: true
    hiddenInSingle: false
---


<h2>513. Find Bottom Left Tree Value</h2><h3>Medium</h3><hr><div><p>Given the <code>root</code> of a binary tree, return the leftmost value in the last row of the tree.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/12/14/tree1.jpg" style="width: 302px; height: 182px;">
<pre><strong>Input:</strong> root = [2,1,3]
<strong>Output:</strong> 1
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/12/14/tree2.jpg" style="width: 432px; height: 421px;">
<pre><strong>Input:</strong> root = [1,2,3,4,null,5,6,null,null,7]
<strong>Output:</strong> 7
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[1, 10<sup>4</sup>]</code>.</li>
	<li><code>-2<sup>31</sup> &lt;= Node.val &lt;= 2<sup>31</sup> - 1</code></li>
</ul>
</div>

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
    int findBottomLeftValue(TreeNode* root) {
        if(root==NULL)
            return -1;
        queue<TreeNode*> q;
        q.push(root);
        int ans=0;
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            ans=curr->val;
            if(curr->right)
                q.push(curr->right);
            if(curr->left)
                q.push(curr->left);
        }
        return ans;
    }
};
```
