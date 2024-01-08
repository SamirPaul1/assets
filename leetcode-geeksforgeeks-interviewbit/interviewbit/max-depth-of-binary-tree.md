---
title: Max Depth Of Binary Tree
summary: Max Depth Of Binary Tree - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Max Depth Of Binary Tree solution]
aliases: ["/posts/max-depth-of-binary-tree", "/blog/posts/max-depth-of-binary-tree", "/max-depth-of-binary-tree"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Max Depth Of Binary Tree - Solution Explained/problem-solving.webp
    alt: Max Depth Of Binary Tree
    hiddenInList: true
    hiddenInSingle: false
---

# Max Depth Of Binary Tree

https://www.interviewbit.com/problems/max-depth-of-binary-tree


## Solution

```cpp


/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 int depth(TreeNode *root) {
    if (!root)
        return 0;
    return 1 + max(depth(root->left), depth(root->right));
 }
 
int Solution::maxDepth(TreeNode* A) {
    return depth(A);
}

```