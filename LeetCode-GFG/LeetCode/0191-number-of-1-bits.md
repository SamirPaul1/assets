---
title: 0191 number of 1 bits
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0191-number-of-1-bits solution
description: 0191 number of 1 bits LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
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
