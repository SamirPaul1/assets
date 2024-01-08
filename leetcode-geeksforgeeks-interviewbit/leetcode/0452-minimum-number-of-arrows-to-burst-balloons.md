---
title: 0452 Minimum Number Of Arrows To Burst Balloons
summary: 0452 Minimum Number Of Arrows To Burst Balloons LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0452-minimum-number-of-arrows-to-burst-balloons", "/blog/posts/0452-minimum-number-of-arrows-to-burst-balloons", "/0452-minimum-number-of-arrows-to-burst-balloons"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0452-minimum-number-of-arrows-to-burst-balloons solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0452 Minimum Number Of Arrows To Burst Balloons/problem-solving.webp
    alt: 0452 Minimum Number Of Arrows To Burst Balloons
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        points.sort(key = lambda x:x[1])
        cp = points[0][1]
        res = 1
        for point in points[1:]:
            if point[0] > cp:
                res += 1
                cp = point[1]
        
        return res
```
