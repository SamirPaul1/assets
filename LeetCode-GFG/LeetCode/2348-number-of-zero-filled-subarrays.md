---
title: 2348 number of zero filled subarrays
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 2348-number-of-zero-filled-subarrays solution
description: 2348 number of zero filled subarrays LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
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
