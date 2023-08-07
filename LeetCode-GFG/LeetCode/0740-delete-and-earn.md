---
title: 0740 delete and earn
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0740-delete-and-earn solution
description: 0740 delete and earn LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
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
