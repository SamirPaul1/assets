---
title: 1207 unique number of occurrences
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 1207-unique-number-of-occurrences solution
description: 1207 unique number of occurrences LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
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
