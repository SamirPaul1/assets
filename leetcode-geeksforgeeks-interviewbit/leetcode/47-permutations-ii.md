---
title: 47 permutations ii
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 47-permutations-ii solution
description: 47 permutations ii LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---




---




```python
class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        res = []
        
        def dfs(arr, path):
            if not arr:
                res.append(path)
            for i in range(len(arr)):
                if i > 0 and arr[i] == arr[i-1]:
                    continue
                dfs(arr[:i] + arr[i+1:], path + [arr[i]])
            
        dfs(nums, [])
        return res

# Time: O(N^2)
# Space: O(N)
```
