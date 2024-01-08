---
title: 0045 Jump Game Ii
summary: 0045 Jump Game Ii LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0045-jump-game-ii", "/blog/posts/0045-jump-game-ii", "/0045-jump-game-ii"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0045-jump-game-ii solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0045 Jump Game Ii/problem-solving.webp
    alt: 0045 Jump Game Ii
    hiddenInList: true
    hiddenInSingle: false
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
