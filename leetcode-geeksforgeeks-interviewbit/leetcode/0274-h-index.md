---
title: 0274 H Index
summary: 0274 H Index LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "0274-h-index LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:0274 H Index - Solution Explained/problem-solving.webp
    alt: 0274 H Index
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def hIndex(self, citations: List[int]) -> int:
        arr = sorted(citations); n = len(citations)
        l = 0; r = len(arr)-1
        
        while l <= r:
            mid = l + (r-l)//2
            if arr[mid] == n-mid: return arr[mid]
            elif arr[mid] > n-mid:
                r = mid - 1
            else:
                l = mid + 1
        
        return n - l
```
