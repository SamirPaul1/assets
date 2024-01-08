---
title: 0413 Arithmetic Slices
summary: 0413 Arithmetic Slices LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0413-arithmetic-slices", "/blog/posts/0413-arithmetic-slices", "/0413-arithmetic-slices"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0413-arithmetic-slices solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0413 Arithmetic Slices/problem-solving.webp
    alt: 0413 Arithmetic Slices
    hiddenInList: true
    hiddenInSingle: false
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
