---
title: 0374 Guess Number Higher Or Lower
summary: 0374 Guess Number Higher Or Lower LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0374-guess-number-higher-or-lower", "/blog/posts/0374-guess-number-higher-or-lower", "/0374-guess-number-higher-or-lower"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0374-guess-number-higher-or-lower solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0374 Guess Number Higher Or Lower/problem-solving.webp
    alt: 0374 Guess Number Higher Or Lower
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
# The guess API is already defined for you.
# @param num, your guess
# @return -1 if num is higher than the picked number
#          1 if num is lower than the picked number
#          otherwise return 0
# def guess(num: int) -> int:

class Solution:
    def guessNumber(self, n: int) -> int:
        l = 1; r = n
        while l <= r:
            mid = l + (r - l) // 2
            if guess(mid) == -1:
                r = mid - 1
            elif guess(mid) == 1:
                l = mid + 1
            else:
                return mid
        
        return l
```
