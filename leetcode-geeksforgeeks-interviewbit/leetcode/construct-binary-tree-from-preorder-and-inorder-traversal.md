---
title: Construct Binary Tree From Preorder And Inorder Traversal
summary: Construct Binary Tree From Preorder And Inorder Traversal LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/construct-binary-tree-from-preorder-and-inorder-traversal", "/blog/posts/construct-binary-tree-from-preorder-and-inorder-traversal", "/construct-binary-tree-from-preorder-and-inorder-traversal"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, construct-binary-tree-from-preorder-and-inorder-traversal solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Construct Binary Tree From Preorder And Inorder Traversal/problem-solving.webp
    alt: Construct Binary Tree From Preorder And Inorder Traversal
    hiddenInList: true
    hiddenInSingle: false
---


<h2>105. Construct Binary Tree from Preorder and Inorder Traversal</h2><h3>Medium</h3><hr><div><p>Given two integer arrays <code>preorder</code> and <code>inorder</code> where <code>preorder</code> is the preorder traversal of a binary tree and <code>inorder</code> is the inorder traversal of the same tree, construct and return <em>the binary tree</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/19/tree.jpg" style="width: 277px; height: 302px;">
<pre><strong>Input:</strong> preorder = [3,9,20,15,7], inorder = [9,3,15,20,7]
<strong>Output:</strong> [3,9,20,null,null,15,7]
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> preorder = [-1], inorder = [-1]
<strong>Output:</strong> [-1]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= preorder.length &lt;= 3000</code></li>
	<li><code>inorder.length == preorder.length</code></li>
	<li><code>-3000 &lt;= preorder[i], inorder[i] &lt;= 3000</code></li>
	<li><code>preorder</code> and <code>inorder</code> consist of <strong>unique</strong> values.</li>
	<li>Each value of <code>inorder</code> also appears in <code>preorder</code>.</li>
	<li><code>preorder</code> is <strong>guaranteed</strong> to be the preorder traversal of the tree.</li>
	<li><code>inorder</code> is <strong>guaranteed</strong> to be the inorder traversal of the tree.</li>
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
    
    TreeNode* solve(vector<int>& pre, vector<int>& in, int p, int s, int e){
        if(p>=pre.size() || s>e)
            return NULL;
        TreeNode* root= new TreeNode(pre[p]);
        int ind;
        for(int i=s;i<=e;i++){
            if(in[i]==pre[p]){
                ind=i;
                break;
            }
        }
        root->left=solve(pre,in,p+1,s,ind-1);
        root->right=solve(pre,in,p+ind-s+1,ind+1,e);
        
        return root;
        
    }
    
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        return solve(pre,in,0,0,pre.size()-1);
    }
};
```
