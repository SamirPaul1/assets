---
title: Zigzag Level Order Traversal Bt
summary: Zigzag Level Order Traversal Bt - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: ["interviewbit", "interviewbit solution in Python3 C++ Java", "Zigzag Level Order Traversal Bt Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Zigzag Level Order Traversal Bt - Solution Explained/problem-solving.webp
    alt: Zigzag Level Order Traversal Bt
    hiddenInList: true
    hiddenInSingle: false
---

# Zigzag Level Order Traversal Bt

https://www.interviewbit.com/problems/zigzag-level-order-traversal-bt

Given a binary tree, return the zigzag level order traversal of its nodes' values. (ie, from left to right, then right to left for the next level and alternate between).

Example: 
Given binary tree
```
    3
   / \
  9  20
    /  \
   15   7
```
return
```
[
         [3],
         [20, 9],
         [15, 7]
]
```

## Solution

```cpp

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x): val(x), left(NULL), right(NULL) {}
 * };
 */
int height(TreeNode* A)
{
    if (!A)
        return 0;
    return 1 + max(height(A->left), height(A->right));
}

void levelTraversal(vector<int>& res, TreeNode* A, int level, bool inverse)
{
    if (!A)
        return;
    if (level == 1)
        res.emplace_back(A->val);
    else
    {
        if (inverse)
        {
            levelTraversal(res, A->right, level-1, inverse);
            levelTraversal(res, A->left, level-1, inverse);
        }
        else
        {
            levelTraversal(res, A->left, level-1, inverse);
            levelTraversal(res, A->right, level-1, inverse);
        }
    }
}

vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    int levels = height(A);
    vector<vector<int> > res;
    for (auto h = 1; h<=levels; ++h)
    {
        bool inverse = false;
        vector<int> row;
        if (h%2 == 0)
            inverse = true;
        levelTraversal(row, A, h, inverse);
        res.emplace_back(row);
    }
    return res;
}
```
