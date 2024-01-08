---
title: 47 Permutations Ii
summary: 47 Permutations Ii LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/47-permutations-ii", "/blog/posts/47-permutations-ii", "/47-permutations-ii"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 47-permutations-ii solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:47 Permutations Ii/problem-solving.webp
    alt: 47 Permutations Ii
    hiddenInList: true
    hiddenInSingle: false
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
