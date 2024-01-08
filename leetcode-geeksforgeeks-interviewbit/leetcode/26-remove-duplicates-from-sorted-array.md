---
title: 26 Remove Duplicates From Sorted Array
summary: 26 Remove Duplicates From Sorted Array LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/26-remove-duplicates-from-sorted-array", "/blog/posts/26-remove-duplicates-from-sorted-array", "/26-remove-duplicates-from-sorted-array"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 26-remove-duplicates-from-sorted-array solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:26 Remove Duplicates From Sorted Array/problem-solving.webp
    alt: 26 Remove Duplicates From Sorted Array
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        prev = 0
        
        for i in range(1, len(nums)):
            if nums[prev] != nums[i]:
                prev += 1
                nums[prev] = nums[i]
        
        return prev + 1
```
