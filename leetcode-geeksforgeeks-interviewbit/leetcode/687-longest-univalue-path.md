---
title: 687 Longest Univalue Path
summary: 687 Longest Univalue Path LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/687-longest-univalue-path", "/blog/posts/687-longest-univalue-path", "/687-longest-univalue-path"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 687-longest-univalue-path solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:687 Longest Univalue Path/problem-solving.webp
    alt: 687 Longest Univalue Path
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def longestUnivaluePath(self, root: Optional[TreeNode]) -> int:
        self.res = 0
        
        def solve(root):
            if not root: return 0
            
            leftMax = solve(root.left)
            rightMax = solve(root.right)
            
            if root.left:
                if root.val == root.left.val: leftMax += 1
                else: leftMax = 0
                    
            if root.right:
                if root.val == root.right.val: rightMax += 1
                else: rightMax = 0
            
            self.res = max(self.res, leftMax + rightMax)
            return max(leftMax, rightMax)
        
        solve(root)
        return self.res
```
