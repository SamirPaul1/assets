---
title: 371 Sum Of Two Integers
summary: 371 Sum Of Two Integers LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/371-sum-of-two-integers", "/blog/posts/371-sum-of-two-integers", "/371-sum-of-two-integers"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 371-sum-of-two-integers solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:371 Sum Of Two Integers/problem-solving.webp
    alt: 371 Sum Of Two Integers
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def getSum(self, a: int, b: int) -> int:
        
        # 32 bit mask in hexadecimal
        mask = 0xffffffff
        
        # works both as while loop and single value check 
        while (b & mask) > 0:
            
            carry = ( a & b ) << 1
            a = (a ^ b) 
            b = carry
        
        # handles overflow
        return (a & mask) if b > 0 else a
```
