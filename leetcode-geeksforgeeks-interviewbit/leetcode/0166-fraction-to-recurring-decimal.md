---
title: 0166 Fraction To Recurring Decimal
summary: 0166 Fraction To Recurring Decimal LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "0166-fraction-to-recurring-decimal LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:0166 Fraction To Recurring Decimal - Solution Explained/problem-solving.webp
    alt: 0166 Fraction To Recurring Decimal
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def fractionToDecimal(self, n: int, d: int) -> str:
        res = ''
        if n < 0 and d < 0: n = abs(n); d = abs(d)
        if n < 0 or d < 0: n = abs(n); d = abs(d); res += '-'
        res += str(n//d)
        n = n%d
        res += '.'
        rem_ind = {}
        while n:
            n *= 10
            res += str(n//d)
            n = n%d
            if n in rem_ind:
                res = res[:rem_ind[n]] + '(' + res[rem_ind[n]:] + ')'
                break
            rem_ind[n] = len(res)
        if res[-1] == '.': 
            res = res[:-1]
        if res == "-0": return "0"
        return res 
```
