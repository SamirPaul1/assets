---
title: 0565 Array Nesting
summary: 0565 Array Nesting LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "0565-array-nesting LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:0565 Array Nesting - Solution Explained/problem-solving.webp
    alt: 0565 Array Nesting
    hiddenInList: true
    hiddenInSingle: false
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
