---
title: 1448 Count Good Nodes In Binary Tree
summary: 1448 Count Good Nodes In Binary Tree LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/1448-count-good-nodes-in-binary-tree", "/blog/posts/1448-count-good-nodes-in-binary-tree", "/1448-count-good-nodes-in-binary-tree"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 1448-count-good-nodes-in-binary-tree solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:1448 Count Good Nodes In Binary Tree/problem-solving.webp
    alt: 1448 Count Good Nodes In Binary Tree
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
