---
title: 0682 Baseball Game
summary: 0682 Baseball Game LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "0682-baseball-game LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:0682 Baseball Game - Solution Explained/problem-solving.webp
    alt: 0682 Baseball Game
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def calPoints(self, operations: List[str]) -> int:
        stack = []
        for op in operations:
            if op == '+':
                if len(stack) >= 2:
                    stack.append(stack[-1] + stack[-2])
            elif op == 'D':
                if stack:
                    stack.append(2*stack[-1])
            elif op == 'C':
                if stack: 
                    stack.pop()
            else:
                stack.append(int(op))
            
        return sum(stack)
```
