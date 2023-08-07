---
title: 0045 jump game ii
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0045-jump-game-ii solution
description: 0045 jump game ii LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---




---




```python
class Solution:
    def jump(self, nums: List[int]) -> int:
        l = r = maxreachable = res = 0
        while r < len(nums) - 1:
            for i in range(l, r+1):
                maxreachable = max(maxreachable, i + nums[i])
            l = r+1
            r = maxreachable
            res += 1
            
        return res
```
