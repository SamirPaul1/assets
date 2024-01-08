---
title: 581 Shortest Unsorted Continuous Subarray
summary: 581 Shortest Unsorted Continuous Subarray LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/581-shortest-unsorted-continuous-subarray", "/blog/posts/581-shortest-unsorted-continuous-subarray", "/581-shortest-unsorted-continuous-subarray"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 581-shortest-unsorted-continuous-subarray solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:581 Shortest Unsorted Continuous Subarray/problem-solving.webp
    alt: 581 Shortest Unsorted Continuous Subarray
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def findUnsortedSubarray(self, nums: List[int]) -> int:
        minL = float("inf")
        maxR = float("-inf")
        
        for i in range(len(nums)-1):
            if nums[i] > nums[i+1]:
                minL = min(minL, nums[i+1])
        
        for i in range(len(nums)-2, -1, -1):
            if nums[i] > nums[i+1]:
                maxR = max(maxR, nums[i])
        
        if minL == float("inf"):  # if minL does not exist then maxR will also not exist. as both minL and maxR checks the same condition
            return 0
        
        left = 0; right = len(nums)-1
        
        for i in range(len(nums)-1):
            if nums[i] > minL:
                left = i
                break
        
        for i in range(len(nums)-1, -1, -1):
            if nums[i] < maxR:
                right = i
                break
        
        return right - left + 1
```
