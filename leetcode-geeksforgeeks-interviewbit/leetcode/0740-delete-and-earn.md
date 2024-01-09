---
title: 0740 Delete And Earn
summary: 0740 Delete And Earn LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "0740-delete-and-earn LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:0740 Delete And Earn - Solution Explained/problem-solving.webp
    alt: 0740 Delete And Earn
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def deleteAndEarn(self, nums: List[int]) -> int:
        dp = [0]*(max(nums)+1)
        for num in nums:
            dp[num] += num
        # House robber problem 
        if len(dp) < 3: return max(dp)
        for i in range(2, len(dp)):
            if i-3 >= 0:
                dp[i] += max(dp[i-3], dp[i-2])
            else:
                dp[i] += dp[i-2]
        
        return max(dp[-1], dp[-2])
```
