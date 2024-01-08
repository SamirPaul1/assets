---
title: 221 Maximal Square
summary: 221 Maximal Square LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/221-maximal-square", "/blog/posts/221-maximal-square", "/221-maximal-square"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 221-maximal-square solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:221 Maximal Square/problem-solving.webp
    alt: 221 Maximal Square
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def maximalSquare(self, matrix: List[List[str]]) -> int:
        r = len(matrix); c = len(matrix[0])
        res = 0
        dp = [[0]*c for i in range(r)]
        
        for i in range(r):
            for j in range(c):
                if i==0 or j==0:
                    dp[i][j] = int(matrix[i][j])
                else:
                    if matrix[i][j] == "1":
                        dp[i][j] = min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1]) + 1
                res = max(res, dp[i][j])
        
        return pow(res, 2)
                
```
