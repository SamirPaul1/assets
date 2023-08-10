---
title: 202 happy number
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 202-happy-number solution
description: 202 happy number LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---




---




```python
class Solution:
    def isHappy(self, n: int) -> bool:
        visited = set()        
        while n != 1:
            a = str(n)
            n = 0
            for i in a:
                n += int(i)**2
            if n == 1: return True
            if n in visited: return False
            visited.add(n)
            
        return True
```
