---
title: 0682 baseball game
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0682-baseball-game solution
description: 0682 baseball game LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
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
