---
title: 2091 Removing Minimum And Maximum From Array
summary: 2091 Removing Minimum And Maximum From Array LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "2091-removing-minimum-and-maximum-from-array LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:2091 Removing Minimum And Maximum From Array - Solution Explained/problem-solving.webp
    alt: 2091 Removing Minimum And Maximum From Array
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def minimumDeletions(self, nums: List[int]) -> int:
        n = len(nums)
        maxi = max(nums)
        maxInd = nums.index(maxi)
        
        mini = min(nums)
        minInd = nums.index(mini)
        
        both = min(maxInd, minInd) + 1 + n - max(maxInd, minInd)       
        back = n - min(maxInd, minInd)
        front = max(maxInd, minInd) + 1
        
        return min(both, back, front)
```
