---
title: 814 Binary Tree Pruning
summary: 814 Binary Tree Pruning LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/814-binary-tree-pruning", "/blog/posts/814-binary-tree-pruning", "/814-binary-tree-pruning"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 814-binary-tree-pruning solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:814 Binary Tree Pruning/problem-solving.webp
    alt: 814 Binary Tree Pruning
    hiddenInList: true
    hiddenInSingle: false
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
