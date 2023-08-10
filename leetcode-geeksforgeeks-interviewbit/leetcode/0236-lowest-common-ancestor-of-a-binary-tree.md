---
title: 0236 lowest common ancestor of a binary tree
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0236-lowest-common-ancestor-of-a-binary-tree solution
description: 0236 lowest common ancestor of a binary tree LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---




---




```python
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        if not root or root == p or root == q: 
            return root
        left = self.lowestCommonAncestor(root.left, p, q)
        right = self.lowestCommonAncestor(root.right, p, q)
        
        if not left: return right
        if not right: return left
        return root
        
```
