---
title: 0012 integer to roman
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0012-integer-to-roman solution
description: 0012 integer to roman LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---




---




```python
class Solution:
    def intToRoman(self, num: int) -> str:
        vs = [(1000, 'M'), (900,'CM'), (500, 'D'), (400,'CD'), (100, 'C'), (90,'XC'), (50, 'L'), (40,'XL'), (10, 'X'), (9,'IX'), (5, 'V'),(4,'IV'), (1, 'I')]
        res = ''
        i = 0
        while num:
            v,s = vs[i]
            if v <= num:
                d = num // v
                num = num % v
                res += d * s
            i += 1
        
        return res
```
