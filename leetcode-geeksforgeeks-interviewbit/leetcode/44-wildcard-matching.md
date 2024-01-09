---
title: 44 Wildcard Matching
summary: 44 Wildcard Matching LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "44-wildcard-matching LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:44 Wildcard Matching - Solution Explained/problem-solving.webp
    alt: 44 Wildcard Matching
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def isMatch(self, s: str, p: str) -> bool:
        dp = [[False]*(len(s) + 1) for _ in range(len(p) + 1)]
        
        for i in range(len(dp)-1, -1, -1):
            for j in range(len(dp[0])-1, -1, -1):
                if i == len(dp)-1 and j == len(dp[0])-1:
                    dp[i][j] = True
                elif i == len(dp)-1:
                    dp[i][j] = False
                elif j == len(dp[0])-1:
                    if p[i] == '*': dp[i][j] = dp[i+1][j]
                    else: dp[i][j] = False
                else:
                    if p[i] == "?":
                        dp[i][j] = dp[i+1][j+1]
                    elif p[i] == '*':
                        dp[i][j] = dp[i+1][j] or dp[i][j+1]
                    elif p[i] == s[j]:
                        dp[i][j] = dp[i+1][j+1]
                    else:
                        dp[i][j] = False
        
        return dp[0][0]
```
