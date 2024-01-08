---
title: 2348 Number Of Zero Filled Subarrays
summary: 2348 Number Of Zero Filled Subarrays LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/2348-number-of-zero-filled-subarrays", "/blog/posts/2348-number-of-zero-filled-subarrays", "/2348-number-of-zero-filled-subarrays"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 2348-number-of-zero-filled-subarrays solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:2348 Number Of Zero Filled Subarrays/problem-solving.webp
    alt: 2348 Number Of Zero Filled Subarrays
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def zeroFilledSubarray(self, nums: List[int]) -> int:
        # total subarays in an array of length n = n(n+1)/2
        count = collections.Counter()
        i = 0
        while i < len(nums):
            j = i
            while j < len(nums) and nums[j] == 0:
                j += 1
            count[j-i] += 1
            i = j+1
        print(count)
        res = 0
        for l in count:
            res += count[l] * l * (l+1) // 2
        return res
```
