---
title: 0461 Hamming Distance
summary: 0461 Hamming Distance LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0461-hamming-distance", "/blog/posts/0461-hamming-distance", "/0461-hamming-distance"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0461-hamming-distance solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0461 Hamming Distance/problem-solving.webp
    alt: 0461 Hamming Distance
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        res = 0
        for i in range(32):
            if x&(1<<i) != y&(1<<i):
                res += 1
        return res
```
