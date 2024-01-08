---
title: 0222 Count Complete Tree Nodes
summary: 0222 Count Complete Tree Nodes LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0222-count-complete-tree-nodes", "/blog/posts/0222-count-complete-tree-nodes", "/0222-count-complete-tree-nodes"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0222-count-complete-tree-nodes solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0222 Count Complete Tree Nodes/problem-solving.webp
    alt: 0222 Count Complete Tree Nodes
    hiddenInList: true
    hiddenInSingle: false
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
    def countNodes(self, root: Optional[TreeNode]) -> int:
        def lh(root):
            c = 1
            while root:
                c += 1
                root = root.left
        def rh(root):
            c = 1
            while root:
                c += 1
                root = root.right
            return c
        if not root: return 0
        lh = lh(root)
        rh = rh(root)
        if lh == rh: return 2**lh - 1
        return 1 + self.countNodes(root.left) + self.countNodes(root.right)
    
        
        
```
