---
title: 0415 Add Strings
summary: 0415 Add Strings LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0415-add-strings", "/blog/posts/0415-add-strings", "/0415-add-strings"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0415-add-strings solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0415 Add Strings/problem-solving.webp
    alt: 0415 Add Strings
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/add-strings/">415. Add Strings</a></h2><h3>Easy</h3><hr><div><p>Given two non-negative integers, <code>num1</code> and <code>num2</code> represented as string, return <em>the sum of</em> <code>num1</code> <em>and</em> <code>num2</code> <em>as a string</em>.</p>

<p>You must solve the problem without using any built-in library for handling large integers (such as <code>BigInteger</code>). You must also not convert the inputs to integers directly.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> num1 = "11", num2 = "123"
<strong>Output:</strong> "134"
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> num1 = "456", num2 = "77"
<strong>Output:</strong> "533"
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> num1 = "0", num2 = "0"
<strong>Output:</strong> "0"
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= num1.length, num2.length &lt;= 10<sup>4</sup></code></li>
	<li><code>num1</code> and <code>num2</code> consist of only digits.</li>
	<li><code>num1</code> and <code>num2</code> don't have any leading zeros except for the zero itself.</li>
</ul>
</div>

---




```python
class Solution:
    def addStrings(self, num1: str, num2: str) -> str:
        res = ""
        carry = 0
        i = len(num1)-1; j = len(num2)-1
        while i >= 0 or j >= 0 or carry:
            val = carry
            val += ord(num1[i]) - ord("0") if i >= 0 else 0
            val += ord(num2[j]) - ord("0") if j >= 0 else 0 
            carry = val // 10
            val = val % 10
            res = chr(ord("0") + val) + res
            i -= 1
            j -= 1
        
        return res
```
