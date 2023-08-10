---
title: 461 hamming distance
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 461-hamming-distance solution
description: 461 hamming distance LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---




---




```python
class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        a = x ^ y
        res = 0
        
        for i in range(32):
            res += a & 1
            a = a >> 1
            
        return res
```
