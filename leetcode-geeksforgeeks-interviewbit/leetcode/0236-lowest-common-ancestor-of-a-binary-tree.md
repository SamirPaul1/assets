---
title: 0236 Lowest Common Ancestor Of A Binary Tree
summary: 0236 Lowest Common Ancestor Of A Binary Tree LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0236-lowest-common-ancestor-of-a-binary-tree", "/blog/posts/0236-lowest-common-ancestor-of-a-binary-tree", "/0236-lowest-common-ancestor-of-a-binary-tree"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0236-lowest-common-ancestor-of-a-binary-tree solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0236 Lowest Common Ancestor Of A Binary Tree/problem-solving.webp
    alt: 0236 Lowest Common Ancestor Of A Binary Tree
    hiddenInList: true
    hiddenInSingle: false
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
