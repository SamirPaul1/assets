---
title: 59 Spiral Matrix Ii
summary: 59 Spiral Matrix Ii LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "59-spiral-matrix-ii LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:59 Spiral Matrix Ii - Solution Explained/problem-solving.webp
    alt: 59 Spiral Matrix Ii
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        res = [[0]*n for i in range(n)]
        left = 0
        right = n-1
        top = 0
        down = n-1
        v = 1
        
        while left <= right and top <= down:
            for i in range(left, right+1):
                res[top][i] = v
                v += 1
            top += 1
            
            if top > down: break
            
            for i in range(top, down+1):
                res[i][right] = v
                v += 1
            right -= 1
            
            if left > right: break
            
            for i in range(right, left-1, -1):
                res[down][i] = v
                v += 1
            down -= 1
                        
            for i in range(down, top-1, -1):
                res[i][left] = v
                v += 1
            left += 1
        
        return res
```
