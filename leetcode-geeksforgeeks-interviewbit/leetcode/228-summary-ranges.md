---
title: 228 Summary Ranges
summary: 228 Summary Ranges LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/228-summary-ranges", "/blog/posts/228-summary-ranges", "/228-summary-ranges"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 228-summary-ranges solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:228 Summary Ranges/problem-solving.webp
    alt: 228 Summary Ranges
    hiddenInList: true
    hiddenInSingle: false
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
