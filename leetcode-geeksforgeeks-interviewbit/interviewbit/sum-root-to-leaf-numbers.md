---
title: Sum Root To Leaf Numbers
summary: Sum Root To Leaf Numbers - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Sum Root To Leaf Numbers solution]
aliases: ["/posts/sum-root-to-leaf-numbers", "/blog/posts/sum-root-to-leaf-numbers", "/sum-root-to-leaf-numbers"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Sum Root To Leaf Numbers - Solution Explained/problem-solving.webp
    alt: Sum Root To Leaf Numbers
    hiddenInList: true
    hiddenInSingle: false
---

# Sum Root To Leaf Numbers

https://www.interviewbit.com/problems/sum-root-to-leaf-numbers

```cpp

// editorial

int sumNumbers(TreeNode *root, int curSum) {
    if (root == NULL) return curSum;
    curSum = (curSum * 10 + root->val) % 1003;
    if (root->left == NULL && root->right == NULL) return curSum;
    if (!root->left) return sumNumbers(root->right, curSum);
    if (!root->right) return sumNumbers(root->left, curSum);
    return (sumNumbers(root->left, curSum) + sumNumbers(root->right, curSum)) % 1003;
}

int Solution::sumNumbers(TreeNode *root) {
    return sumNumbers(root, 0); 
}




///////////////


int sum(TreeNode* root, int total) {
    if (!root)
        return 0;
        
    total = ((total*10)%1003 + root->val)%1003;
    if (!root->left && !root->right)
        return total;
    return (sum(root->left, total)%1003 + sum(root->right, total)%1003)%1003;
}

int Solution::sumNumbers(TreeNode* A) {
    return sum(A, 0);
}

```