---
title: Maximum Depth Of Binary Tree
summary: Maximum Depth Of Binary Tree LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/maximum-depth-of-binary-tree", "/blog/posts/maximum-depth-of-binary-tree", "/maximum-depth-of-binary-tree"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, maximum-depth-of-binary-tree solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Maximum Depth Of Binary Tree/problem-solving.webp
    alt: Maximum Depth Of Binary Tree
    hiddenInList: true
    hiddenInSingle: false
---


<h2>104. Maximum Depth of Binary Tree</h2><h3>Easy</h3><hr><div><p>Given the <code>root</code> of a binary tree, return <em>its maximum depth</em>.</p>

<p>A binary tree's <strong>maximum depth</strong>&nbsp;is the number of nodes along the longest path from the root node down to the farthest leaf node.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/26/tmp-tree.jpg" style="width: 400px; height: 277px;">
<pre><strong>Input:</strong> root = [3,9,20,null,null,15,7]
<strong>Output:</strong> 3
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> root = [1,null,2]
<strong>Output:</strong> 2
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> root = []
<strong>Output:</strong> 0
</pre>

<p><strong>Example 4:</strong></p>

<pre><strong>Input:</strong> root = [0]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[0, 10<sup>4</sup>]</code>.</li>
	<li><code>-100 &lt;= Node.val &lt;= 100</code></li>
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
    int solve(TreeNode* root){
        if(root==NULL)
            return 0;
        if(root->left==NULL && root->right==NULL)
            return 1;
        if(root->left==NULL)
            return 1+solve(root->right);
        if(root->right==NULL)
            return 1+solve(root->left);
        int l,r;
        l=solve(root->left);
        r=solve(root->right);
        return 1+max(l,r);
    }
    
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        return solve(root);
    }
};
```
