---
title: 1898 Maximum Number Of Removable Characters
summary: 1898 Maximum Number Of Removable Characters LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/1898-maximum-number-of-removable-characters", "/blog/posts/1898-maximum-number-of-removable-characters", "/1898-maximum-number-of-removable-characters"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 1898-maximum-number-of-removable-characters solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:1898 Maximum Number Of Removable Characters/problem-solving.webp
    alt: 1898 Maximum Number Of Removable Characters
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
# https://leetcode.com/problems/maximum-number-of-removable-characters/

class Solution:
    def maximumRemovals(self, s: str, p: str, removable: List[int]) -> int:
        def isSubsequence(mid):
            remove = set(removable[:mid+1])
            i = j = 0
            while i < len(s) and j < len(p):
                if s[i] == p[j] and i not in remove:
                    j += 1
                i += 1
            return j == len(p)
        
        
        res = 0
        l, r = 0, len(removable)-1
        while l <= r:
            mid = l + (r - l)//2
            if isSubsequence(mid):
                res = max(res, mid+1)
                l = mid + 1
            else:
                r = mid - 1
        
        return res
    
    
# Time: (n * log(k))   # n = len(s), k = len(removable)
```
