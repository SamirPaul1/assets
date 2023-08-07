---
title: 0513 find bottom left tree value
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0513-find-bottom-left-tree-value solution
description: 0513 find bottom left tree value LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
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
