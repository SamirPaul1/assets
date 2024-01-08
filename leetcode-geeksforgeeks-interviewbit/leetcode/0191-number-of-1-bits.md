---
title: 0191 Number Of 1 Bits
summary: 0191 Number Of 1 Bits LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0191-number-of-1-bits", "/blog/posts/0191-number-of-1-bits", "/0191-number-of-1-bits"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0191-number-of-1-bits solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0191 Number Of 1 Bits/problem-solving.webp
    alt: 0191 Number Of 1 Bits
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def hammingWeight(self, n: int) -> int:
        res = 0
        for i in range(32):
            if n&(1<<i): res += 1
        
        return res
```
