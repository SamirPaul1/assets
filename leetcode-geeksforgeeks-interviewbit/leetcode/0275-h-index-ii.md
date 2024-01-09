---
title: 0275 H Index Ii
summary: 0275 H Index Ii LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "0275-h-index-ii LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:0275 H Index Ii - Solution Explained/problem-solving.webp
    alt: 0275 H Index Ii
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def hIndex(self, citations: List[int]) -> int:
        l = 0; r = len(citations)-1; n = len(citations)
        while l <= r:
            mid = l + (r - l) // 2
            if citations[mid] == n - mid: return citations[mid]
            elif citations[mid] > n-mid: 
                r = mid - 1
            else:
                l = mid + 1
        
        return n - l
```
