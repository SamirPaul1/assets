---
title: 0392 Is Subsequence
summary: 0392 Is Subsequence LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0392-is-subsequence", "/blog/posts/0392-is-subsequence", "/0392-is-subsequence"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0392-is-subsequence solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0392 Is Subsequence/problem-solving.webp
    alt: 0392 Is Subsequence
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        i, j = 0, 0
        while i < len(s) and j < len(t):
            if s[i] == t[j]:
                i += 1
                j += 1
            else:
                j += 1
        
        return i == len(s)
```
