---
title: Flatten Binary Tree To Linked List
summary: Flatten Binary Tree To Linked List - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: ["interviewbit", "interviewbit solution in Python3 C++ Java", "Flatten Binary Tree To Linked List Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Flatten Binary Tree To Linked List - Solution Explained/problem-solving.webp
    alt: Flatten Binary Tree To Linked List
    hiddenInList: true
    hiddenInSingle: false
---

# Flatten Binary Tree To Linked List

https://www.interviewbit.com/problems/flatten-binary-tree-to-linked-list


Given a binary tree, flatten it to a linked list in-place.

Example :
Given


         1
        / \
       2   5
      / \   \
     3   4   6
The flattened tree should look like:

   1
    \
     2
      \
       3
        \
         4
          \
           5
            \
             6
Note that the left child of all nodes should be NULL.

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
 
// Recursive solution - Uses extra auxiliary space in stack for recursive calls.
/*void fillPreorder(vector<TreeNode*>& preOrder, TreeNode* root)
{
    if (!root)
        return;
    preOrder.emplace_back(root);
    fillPreorder(preOrder, root->left);
    fillPreorder(preOrder, root->right);
}
TreeNode* Solution::flatten(TreeNode* A) {
    if (!A)
        return A;
    vector<TreeNode*> preOrder;
    fillPreorder(preOrder, A);
    TreeNode* root = A;
    for (auto i = 1; i<preOrder.size(); ++i)
    {
        A->left = NULL;
        A->right = preOrder[i];
        A = A->right;
    }
    A->left = NULL;
    return root;
}*/

// Iterative solution - Solves inplace without using extra auxiliary space for recursion.
TreeNode* Solution::flatten(TreeNode* A) {
    if (!A)
        return A;
    TreeNode* root = A;
    
    while (A)
    {
        if (A->left)
        {
            TreeNode* rightSubTree = A->left;
            while (rightSubTree->right)
                rightSubTree = rightSubTree->right;
            rightSubTree->right = A->right;
            A->right = A->left;
            A->left = NULL;
        }
        A = A->right;
    }
    return root;
}
```