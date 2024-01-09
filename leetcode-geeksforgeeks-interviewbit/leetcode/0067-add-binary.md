---
title: 0067 Add Binary
summary: 0067 Add Binary LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "0067-add-binary LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:0067 Add Binary - Solution Explained/problem-solving.webp
    alt: 0067 Add Binary
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/add-binary/">67. Add Binary</a></h2><h3>Easy</h3><hr><div><p>Given two binary strings <code>a</code> and <code>b</code>, return <em>their sum as a binary string</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> a = "11", b = "1"
<strong>Output:</strong> "100"
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> a = "1010", b = "1011"
<strong>Output:</strong> "10101"
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= a.length, b.length &lt;= 10<sup>4</sup></code></li>
	<li><code>a</code> and <code>b</code> consist&nbsp;only of <code>'0'</code> or <code>'1'</code> characters.</li>
	<li>Each string does not contain leading zeros except for the zero itself.</li>
</ul>
</div>

---




```python
class Solution:
    def addBinary(self, a: str, b: str) -> str:
        i = len(a)-1
        j = len(b)-1
        carry = 0
        res = ""
        while i >= 0 or j >= 0 or carry:
            val = carry
            val += 1 if i >= 0 and a[i] == '1' else 0
            val += 1 if j >= 0 and b[j] == '1' else 0
            if val > 1: carry = 1
            else: carry = 0
            val = val % 2
            res += str(val)
            i -= 1
            j -= 1
        
        return res[::-1]
            
```
