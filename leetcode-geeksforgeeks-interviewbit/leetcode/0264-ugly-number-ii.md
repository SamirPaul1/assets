---
title: 0264 Ugly Number Ii
summary: 0264 Ugly Number Ii LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "0264-ugly-number-ii LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:0264 Ugly Number Ii - Solution Explained/problem-solving.webp
    alt: 0264 Ugly Number Ii
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/ugly-number-ii/">264. Ugly Number II</a></h2><h3>Medium</h3><hr><div><p>An <strong>ugly number</strong> is a positive integer whose prime factors are limited to <code>2</code>, <code>3</code>, and <code>5</code>.</p>

<p>Given an integer <code>n</code>, return <em>the</em> <code>n<sup>th</sup></code> <em><strong>ugly number</strong></em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> n = 10
<strong>Output:</strong> 12
<strong>Explanation:</strong> [1, 2, 3, 4, 5, 6, 8, 9, 10, 12] is the sequence of the first 10 ugly numbers.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> n = 1
<strong>Output:</strong> 1
<strong>Explanation:</strong> 1 has no prime factors, therefore all of its prime factors are limited to 2, 3, and 5.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 1690</code></li>
</ul>
</div>

---




```python
# https://leetcode.com/problems/ugly-number-ii/
# https://youtu.be/X5SuOsIWCoI

class Solution:
    def nthUglyNumber(self, n: int) -> int:
        dp = [1] * n
        p2 = p3 = p5 = 0
        
        for i in range(1, n):
            twoMultiple = dp[p2] * 2
            threeMultiple = dp[p3] * 3
            fiveMultiple = dp[p5] * 5
            dp[i] = min(twoMultiple, threeMultiple, fiveMultiple)
            
            if dp[i] % twoMultiple == 0: p2 += 1
            if dp[i] % threeMultiple == 0: p3 += 1
            if dp[i] % fiveMultiple == 0: p5 += 1
        
        return dp[-1]
```
