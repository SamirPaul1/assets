---
title: 0606 Construct String From Binary Tree
summary: 0606 Construct String From Binary Tree LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0606-construct-string-from-binary-tree", "/blog/posts/0606-construct-string-from-binary-tree", "/0606-construct-string-from-binary-tree"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0606-construct-string-from-binary-tree solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0606 Construct String From Binary Tree/problem-solving.webp
    alt: 0606 Construct String From Binary Tree
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
    def tree2str(self, root: Optional[TreeNode]) -> str:
        res = ""
        if not root: return res
        res += str(root.val)
        if root.left:
            res += '(' + self.tree2str(root.left) + ')'
        if not root.left and root.right:
            res += '()'
        if root.right:
            res += '(' + self.tree2str(root.right) + ')'
        return res
    
```
