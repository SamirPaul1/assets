---
title: 221 maximal square
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 221-maximal-square solution
description: 221 maximal square LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
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
