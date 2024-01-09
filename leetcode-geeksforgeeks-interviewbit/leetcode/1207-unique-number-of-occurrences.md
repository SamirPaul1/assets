---
title: 1207 Unique Number Of Occurrences
summary: 1207 Unique Number Of Occurrences LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "1207-unique-number-of-occurrences LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:1207 Unique Number Of Occurrences - Solution Explained/problem-solving.webp
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
