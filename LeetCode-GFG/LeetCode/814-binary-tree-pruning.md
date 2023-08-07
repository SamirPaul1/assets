---
title: 814 binary tree pruning
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 814-binary-tree-pruning solution
description: 814 binary tree pruning LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---




---




```python
class Solution:
    def pruneTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if not root: return 
        
        def solve(root):
            if not root: return True
            
            l = solve(root.left)
            r = solve(root.right)
            
            if l: root.left = None
            if r: root.right = None
            if not root.left and not root.right and root.val == 0: return True 
            return False
        
        solve(root)
        if not root.left and not root.right and root.val == 0: return None
        return root
```
