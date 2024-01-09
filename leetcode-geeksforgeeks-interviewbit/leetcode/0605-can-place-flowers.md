---
title: 0605 Can Place Flowers
summary: 0605 Can Place Flowers LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "0605-can-place-flowers LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:0605 Can Place Flowers - Solution Explained/problem-solving.webp
    alt: 0605 Can Place Flowers
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def canPlaceFlowers(self, fb: List[int], n: int) -> bool:
        fb = [0] + fb + [0]
        i, cnt = 1, 0
        for i in range(1, len(fb)-1):
            if fb[i-1] == fb[i] == fb[i+1] == 0:
                fb[i] = 1
                cnt += 1
        return cnt >= n        
```
