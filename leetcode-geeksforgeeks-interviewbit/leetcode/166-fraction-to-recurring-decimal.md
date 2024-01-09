---
title: 166 Fraction To Recurring Decimal
summary: 166 Fraction To Recurring Decimal LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "166-fraction-to-recurring-decimal LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:166 Fraction To Recurring Decimal - Solution Explained/problem-solving.webp
    alt: 166 Fraction To Recurring Decimal
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/fraction-to-recurring-decimal/">166. Fraction to Recurring Decimal</a></h2><h3>Medium</h3><hr><div><p>Given two integers representing the <code>numerator</code> and <code>denominator</code> of a fraction, return <em>the fraction in string format</em>.</p>

<p>If the fractional part is repeating, enclose the repeating part in parentheses.</p>

<p>If multiple answers are possible, return <strong>any of them</strong>.</p>

<p>It is <strong>guaranteed</strong> that the length of the answer string is less than <code>10<sup>4</sup></code> for all the given inputs.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> numerator = 1, denominator = 2
<strong>Output:</strong> "0.5"
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> numerator = 2, denominator = 1
<strong>Output:</strong> "2"
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> numerator = 4, denominator = 333
<strong>Output:</strong> "0.(012)"
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>-2<sup>31</sup> &lt;=&nbsp;numerator, denominator &lt;= 2<sup>31</sup> - 1</code></li>
	<li><code>denominator != 0</code></li>
</ul>
</div>

---




```python
class Solution:
    def fractionToDecimal(self, numerator: int, denominator: int) -> str:
        n = numerator; d = denominator; res = ''
        if n < 0 and d < 0: n = n; d = d
        elif n < 0 or d < 0: n = abs(n); d = abs(d); res = '-'
        seenRem = {}
        res += str(n // d) 
        n = n % d
        if n == 0: return res if res != '-0' else '0'
        res += '.'
        
        while n != 0:
            n *= 10
            res += str(n // d)
            n = n % d
            if n in seenRem:
                res = res[:seenRem[n]] + '(' + res[seenRem[n]:] + ')'
                break
            seenRem[n] = len(res)
        
        return res
```
