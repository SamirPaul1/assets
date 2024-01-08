---
title: 0506 Relative Ranks
summary: 0506 Relative Ranks LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0506-relative-ranks", "/blog/posts/0506-relative-ranks", "/0506-relative-ranks"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0506-relative-ranks solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0506 Relative Ranks/problem-solving.webp
    alt: 0506 Relative Ranks
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def findRelativeRanks(self, score: List[int]) -> List[str]:
        arr = sorted(score, reverse = True)
        d = {}
        d[arr[0]] = "Gold Medal"
        if len(arr) > 1: d[arr[1]] = "Silver Medal"
        if len(arr) > 2: d[arr[2]] = "Bronze Medal"
        i = 4
        for a in arr[3:]:
            d[a] = str(i)
            i += 1
        
        res = []
        for i in score:
            res.append(d[i])
        
        return res
```
