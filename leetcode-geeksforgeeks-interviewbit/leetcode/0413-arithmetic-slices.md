---
title: 0413 arithmetic slices
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0413-arithmetic-slices solution
description: 0413 arithmetic slices LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---




---




```python
class Solution:
    def numberOfArithmeticSlices(self, nums):
        n = len(nums)
        dp = [0] * n
        for i in range(2, n):
            if nums[i] - nums[i-1] == nums[i-1] - nums[i-2]:
                dp[i] = dp[i-1] + 1
        
        return sum(dp)
    
# Time: O(n)
# Space: O(n)
    
    

class Solution:
    def numberOfArithmeticSlices(self, nums):
        dp = 0; n = len(nums); res = 0
        for i in range(2, n):
            if nums[i] - nums[i-1] == nums[i-1] - nums[i-2]:
                dp += 1
                res += dp
            else:
                dp = 0
                
        return res
    
# Time: O(n)
# Space: O(1)
```
