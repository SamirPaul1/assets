---
title: 258 Add Digits
summary: 258 Add Digits LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/258-add-digits", "/blog/posts/258-add-digits", "/258-add-digits"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 258-add-digits solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:258 Add Digits/problem-solving.webp
    alt: 258 Add Digits
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/add-digits/">258. Add Digits</a></h2><h3>Easy</h3><hr><div><p>Given an integer <code>num</code>, repeatedly add all its digits until the result has only one digit, and return it.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> num = 38
<strong>Output:</strong> 2
<strong>Explanation:</strong> The process is
38 --&gt; 3 + 8 --&gt; 11
11 --&gt; 1 + 1 --&gt; 2 
Since 2 has only one digit, return it.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> num = 0
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= num &lt;= 2<sup>31</sup> - 1</code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> Could you do it without any loop/recursion in <code>O(1)</code> runtime?</p>
</div>

---




```python
class Solution:
    def addDigits(self, num: int) -> int:
        # https://en.wikipedia.org/wiki/Digital_root
        #  In base 10, this is equivalent to taking the remainder upon division by 9 (except when the digital root is 9, where the remainder upon division by 9 will be 0).
        if num == 0: return 0
        
        elif num % 9 == 0: 
            return 9
        
        else:
            return num % 9
```
