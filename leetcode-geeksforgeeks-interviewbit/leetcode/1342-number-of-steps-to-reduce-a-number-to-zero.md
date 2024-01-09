---
title: 1342 Number Of Steps To Reduce A Number To Zero
summary: 1342 Number Of Steps To Reduce A Number To Zero LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "1342-number-of-steps-to-reduce-a-number-to-zero LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:1342 Number Of Steps To Reduce A Number To Zero - Solution Explained/problem-solving.webp
    alt: 1342 Number Of Steps To Reduce A Number To Zero
    hiddenInList: true
    hiddenInSingle: false
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
