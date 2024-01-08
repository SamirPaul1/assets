---
title: 409 Longest Palindrome
summary: 409 Longest Palindrome LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/409-longest-palindrome", "/blog/posts/409-longest-palindrome", "/409-longest-palindrome"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 409-longest-palindrome solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:409 Longest Palindrome/problem-solving.webp
    alt: 409 Longest Palindrome
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def longestPalindrome(self, s: str) -> int:
        countDict = {}
        for i in s:
            if i not in countDict:
                countDict[i] = 1
            else:
                countDict[i] += 1
        
        res = 0
        firstOdd = False
        for i in countDict:
            if countDict[i] % 2 == 0:
                res += countDict[i]
            else:
                if not firstOdd: 
                    res += 1
                    firstOdd = True
                res += countDict[i] - 1
        print(countDict)
        return res
```
