---
title: 0452 minimum number of arrows to burst balloons
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0452-minimum-number-of-arrows-to-burst-balloons solution
description: 0452 minimum number of arrows to burst balloons LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
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
