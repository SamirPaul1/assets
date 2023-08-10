---
title: 1871 jump game vii
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 1871-jump-game-vii solution
description: 1871 jump game vii LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
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
