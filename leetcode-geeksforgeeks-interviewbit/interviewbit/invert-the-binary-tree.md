---
title: Invert The Binary Tree
summary: Invert The Binary Tree - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Invert The Binary Tree solution]
aliases: ["/posts/invert-the-binary-tree", "/blog/posts/invert-the-binary-tree", "/invert-the-binary-tree"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Invert The Binary Tree - Solution Explained/problem-solving.webp
    alt: Invert The Binary Tree
    hiddenInList: true
    hiddenInSingle: false
---

# Invert The Binary Tree

https://www.interviewbit.com/problems/invert-the-binary-tree


## Solution

```cpp
TreeNode* Solution::invertTree(TreeNode* A) {
    if (!A)
        return 0;
    TreeNode * left = invertTree(A->left);
    TreeNode * right = invertTree(A->right);
    A->left = right;
    A->right = left;
    return A;
}

```