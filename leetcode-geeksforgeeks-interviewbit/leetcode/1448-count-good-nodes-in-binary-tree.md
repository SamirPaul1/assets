---
title: 1448 count good nodes in binary tree
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 1448-count-good-nodes-in-binary-tree solution
description: 1448 count good nodes in binary tree LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---




---




```python
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        if not root: return 0
        self.res = 0
        def preorder(root, mv):
            if not root: return 
            mv = max(mv, root.val)
            if root.val >= mv: 
                self.res += 1
            preorder(root.left, mv) 
            preorder(root.right, mv)
        
        preorder(root, root.val)
        return self.res
```
