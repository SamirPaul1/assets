---
title: 0012 Integer To Roman
summary: 0012 Integer To Roman LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "0012-integer-to-roman LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:0012 Integer To Roman - Solution Explained/problem-solving.webp
    alt: 0012 Integer To Roman
    hiddenInList: true
    hiddenInSingle: false
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
