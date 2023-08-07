---
title: 1342 number of steps to reduce a number to zero
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 1342-number-of-steps-to-reduce-a-number-to-zero solution
description: 1342 number of steps to reduce a number to zero LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---




---




```python
class Solution:
    def numberOfSteps(self, num: int) -> int:
        res = 0
        while num != 0:
            if num % 2 == 0:
                num //= 2
            else:
                num -= 1
            res += 1
        
        return res
```
