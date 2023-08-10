---
title: 228 summary ranges
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 228-summary-ranges solution
description: 228 summary ranges LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---




---




```python
class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        res = []
        s = e = ''        
        i = 0
        
        while i < len(nums):
            s = str(nums[i])
            i += 1
            while i < len(nums) and nums[i]-1 == nums[i-1]:
                e = '->' + str(nums[i])
                i += 1
            res.append(s + e)
            s = e = ''
        
        return res
                
        
# Time: O(N)
# Space: O(1)
```
