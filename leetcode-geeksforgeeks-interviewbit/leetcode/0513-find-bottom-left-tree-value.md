---
title: 0513 Find Bottom Left Tree Value
summary: 0513 Find Bottom Left Tree Value LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0513-find-bottom-left-tree-value", "/blog/posts/0513-find-bottom-left-tree-value", "/0513-find-bottom-left-tree-value"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0513-find-bottom-left-tree-value solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0513 Find Bottom Left Tree Value/problem-solving.webp
    alt: 0513 Find Bottom Left Tree Value
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def findBottomLeftValue(self, root: Optional[TreeNode]) -> int:
        if not root: return 
        q = collections.deque()
        q.append(root)
        res = root.val
        while q:
            n = len(q)
            res = q[0].val
            for _ in range(n):
                node = q.popleft()
                if node.left: q.append(node.left)
                if node.right: q.append(node.right)
        
        return res
```
