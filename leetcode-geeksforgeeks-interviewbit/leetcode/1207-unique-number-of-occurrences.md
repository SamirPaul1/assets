---
title: 1207 Unique Number Of Occurrences
summary: 1207 Unique Number Of Occurrences LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/1207-unique-number-of-occurrences", "/blog/posts/1207-unique-number-of-occurrences", "/1207-unique-number-of-occurrences"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 1207-unique-number-of-occurrences solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:1207 Unique Number Of Occurrences/problem-solving.webp
    alt: 1207 Unique Number Of Occurrences
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        mp = {}
        for i in arr:
            if i not in mp:
                mp[i] = 1
            else:
                mp[i] += 1
        
        occurrences = list(mp.values())
        return len(set(occurrences )) == len(occurrences )
```
