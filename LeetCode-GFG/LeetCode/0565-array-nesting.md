---
title: 0565 array nesting
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0565-array-nesting solution
description: 0565 array nesting LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---




---




```python
class Solution:
    def arrayNesting(self, nums: List[int]) -> int:
        visited_index = set()
        res = 0
        for i in range(len(nums)):
            visited_num = set()
            cur = nums[i]
            cnt = 0
            while cur not in visited_num:
                visited_num.add(cur)
                cnt += 1
                res = max(res, cnt)
                cur = nums[cur]
                if cur in visited_index: break
                visited_index.add(cur)
        return res
    
    
    
```
