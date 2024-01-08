---
title: Balanced Binary Tree
summary: Balanced Binary Tree - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Balanced Binary Tree solution]
aliases: ["/posts/balanced-binary-tree", "/blog/posts/balanced-binary-tree", "/balanced-binary-tree"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Balanced Binary Tree - Solution Explained/problem-solving.webp
    alt: Balanced Binary Tree
    hiddenInList: true
    hiddenInSingle: false
---

# Balanced Binary Tree

https://www.interviewbit.com/problems/balanced-binary-tree


## Solution

```cpp
int height(TreeNode *node) {
    if (!node)
        return 0;
    if (!node->left && !node->right)
        return 1;

    auto l = 1 + height(node->left);
    auto r = 1 + height(node->right);

    if (l < 0 || r < 0)
        return INT_MIN;
    if (abs(l - r) > 1)
        return INT_MIN;
    return max(l, r);
}
int Solution::isBalanced(TreeNode *A) {
    if (height(A) < 0)
        return 0;
    return 1;
}
```