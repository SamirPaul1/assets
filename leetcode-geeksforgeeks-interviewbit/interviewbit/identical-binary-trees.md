---
title: Identical Binary Trees
summary: Identical Binary Trees - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Identical Binary Trees solution]
aliases: ["/posts/identical-binary-trees", "/blog/posts/identical-binary-trees", "/identical-binary-trees"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Identical Binary Trees - Solution Explained/problem-solving.webp
    alt: Identical Binary Trees
    hiddenInList: true
    hiddenInSingle: false
---

# Identical Binary Tree

https://www.interviewbit.com/problems/identical-binary-tree


## Solution

```cpp
int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    if (!A && !B)
        return true;
    if (!A || !B)
        return false;
    if (A->val != B->val)
        return false;
    return isSameTree(A->left, B->left) && isSameTree(A->right, B->right);
}

```