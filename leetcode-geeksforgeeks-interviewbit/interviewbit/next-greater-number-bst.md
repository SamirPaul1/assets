---
title: Next Greater Number Bst
summary: Next Greater Number Bst - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Next Greater Number Bst solution]
aliases: ["/posts/next-greater-number-bst", "/blog/posts/next-greater-number-bst", "/next-greater-number-bst"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Next Greater Number Bst - Solution Explained/problem-solving.webp
    alt: Next Greater Number Bst
    hiddenInList: true
    hiddenInSingle: false
---

# Next Greater Number Bst

https://www.interviewbit.com/problems/next-greater-number-bst


## Solution

```cpp
class Solution {
public:
    TreeNode *Find(TreeNode *root, int data) {
        while (root != NULL && root->val != data) {
            if (data < root->val)
                root = root->left;
            else
                root = root->right;
        }
        if (root != NULL && root->val == data) return root;
        return NULL;
    }

    TreeNode *FindMin(TreeNode *root) {
        while (root->left != NULL) root = root->left;
        return root;
    }

    TreeNode *getSuccessor(TreeNode *root, int data) {
        // Search the node O(h)
        TreeNode *current = Find(root, data);
        if (current == NULL) return NULL;
        if (current->right != NULL) { // Case 1 : Node has right subtree
            return FindMin(current->right);
        } else {
            TreeNode *successor = NULL, *ancestor = root;
            while (ancestor != current) {
                if (data < ancestor->val) {
                    successor = ancestor; // so far this is the deepest node for which current node is in left.
                    ancestor = ancestor->left;
                } else
                    ancestor = ancestor->right;
            }
            return successor;
        }
    }
};
```