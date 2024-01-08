---
title: Symmetric Binary Tree
summary: Symmetric Binary Tree - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Symmetric Binary Tree solution]
aliases: ["/posts/symmetric-binary-tree", "/blog/posts/symmetric-binary-tree", "/symmetric-binary-tree"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Symmetric Binary Tree - Solution Explained/problem-solving.webp
    alt: Symmetric Binary Tree
    hiddenInList: true
    hiddenInSingle: false
---

# Symmetric Binary Tree

https://www.interviewbit.com/problems/symmetric-binary-tree


## Solution

```cpp
bool symmetric(TreeNode* a, TreeNode* b) {
    if (!a || !b)
        return a == b;
    if (a->val != b->val)
        return false;
    return symmetric(a->left, b->right) && symmetric(a->right, b->left);
}

int Solution::isSymmetric(TreeNode* A) {
    return !A || symmetric(A->left, A->right);
}

```