---
title: 1871 Jump Game Vii
summary: 1871 Jump Game Vii LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "1871-jump-game-vii LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:1871 Jump Game Vii - Solution Explained/problem-solving.webp
    alt: 1871 Jump Game Vii
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def canReach(self, s: str, minJump: int, maxJump: int) -> bool:
        q = deque([0])
        furthest = 0
        
        while q:
            i = q.popleft()
            start = max(i+minJump, furthest+1)
            for j in range(start, min(i+maxJump+1, len(s))):
                if s[j] == '0':
                    if j == len(s)-1:
                        return True
                    q.append(j)
            furthest = i+maxJump
            
        return False
                
```
