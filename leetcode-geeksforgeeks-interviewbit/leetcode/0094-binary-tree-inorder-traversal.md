---
title: 0094 Binary Tree Inorder Traversal
summary: 0094 Binary Tree Inorder Traversal LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0094-binary-tree-inorder-traversal", "/blog/posts/0094-binary-tree-inorder-traversal", "/0094-binary-tree-inorder-traversal"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0094-binary-tree-inorder-traversal solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0094 Binary Tree Inorder Traversal/problem-solving.webp
    alt: 0094 Binary Tree Inorder Traversal
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
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        res = []
        cur = root
        while cur:
            if not cur.left: 
                res.append(cur.val)
                cur = cur.right
            else:
                pre = cur.left
                while pre.right and pre.right != cur:
                    pre = pre.right
                if not pre.right:
                    pre.right = cur
                    cur = cur.left
                else:
                    res.append(cur.val)
                    cur = cur.right
        
        return res
```
