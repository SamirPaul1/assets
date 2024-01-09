---
title: 0114 Flatten Binary Tree To Linked List
summary: 0114 Flatten Binary Tree To Linked List LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "0114-flatten-binary-tree-to-linked-list LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:0114 Flatten Binary Tree To Linked List - Solution Explained/problem-solving.webp
    alt: 0114 Flatten Binary Tree To Linked List
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
    def flatten(self, root: Optional[TreeNode]) -> None:
        cur = root
        while cur:
            if not cur.left:
                cur = cur.right
            else:
                pre = cur.left
                while pre.right and pre.right != cur:
                    pre = pre.right
                if not pre.right:
                    pre.right = cur.right
                    cur.right = cur.left
                    cur.left = None
                    cur = cur.right
                else:
                    cur = cur.right
        

```
