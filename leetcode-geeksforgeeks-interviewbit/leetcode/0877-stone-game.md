---
title: 0877 Stone Game
summary: 0877 Stone Game LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "0877-stone-game LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:0877 Stone Game - Solution Explained/problem-solving.webp
    alt: 0877 Stone Game
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def stoneGame(self, piles: List[int]) -> bool:
        dp = {}
        def dfs(l, r):
            if l > r: return 0
            if (l,r) in dp: return dp[(l,r)]
            even = True if (r-l)%2 else False
            left = piles[l] + dfs(l+1, r) if even else dfs(l+1, r)
            right = piles[r] + dfs(l, r-1) if even else dfs(l, r-1)
            dp[(l,r)] = max(left, right)
            return dp[(l,r)]
        
        return dfs(0, len(piles)-1)
```
