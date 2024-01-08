---
title: All Possible Full Binary Trees
summary: All Possible Full Binary Trees LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/all-possible-full-binary-trees", "/blog/posts/all-possible-full-binary-trees", "/all-possible-full-binary-trees"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, all-possible-full-binary-trees solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:All Possible Full Binary Trees/problem-solving.webp
    alt: All Possible Full Binary Trees
    hiddenInList: true
    hiddenInSingle: false
---


<h2>894. All Possible Full Binary Trees</h2><h3>Medium</h3><hr><div><p>A <em>full binary tree</em>&nbsp;is a binary tree where each node has exactly 0 or 2&nbsp;children.</p>

<p>Return a list of all possible full binary trees with <code>N</code> nodes.&nbsp; Each element of the answer is the root node of one possible tree.</p>

<p>Each <code>node</code> of each&nbsp;tree in the answer <strong>must</strong> have <code>node.val = 0</code>.</p>

<p>You may return the final list of trees in any order.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input: </strong><span id="example-input-1-1">7</span>
<strong>Output: </strong><span id="example-output-1">[[0,0,0,null,null,0,0,null,null,0,0],[0,0,0,null,null,0,0,0,0],[0,0,0,0,0,0,0],[0,0,0,0,0,null,null,null,null,0,0],[0,0,0,0,0,null,null,0,0]]</span>
<strong>Explanation:</strong>
<img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/08/22/fivetrees.png" style="width: 700px; height: 400px;">
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ul>
	<li><code>1 &lt;= N &lt;= 20</code></li>
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
    vector<TreeNode*> allPossibleFBT(int n) {
         if((n&1)==0)return {};
        if(n == 1)return {new TreeNode()};
		
        vector<TreeNode*>res;
		
        for(int i = 1; i < n-1;i+=2){  //incrementation by 2 to avoid redundant recursive call for even number of nodes
		
            vector<TreeNode*>left = allPossibleFBT(i);
            vector<TreeNode*>right = allPossibleFBT(n-i-1);
            for(auto l : left)
                for(auto r : right){
                    TreeNode* root = new TreeNode();
                    root->left = l;
                    root->right = r;
                    res.push_back(root);
                }        
        }
		
        return res;
    }
};
```
