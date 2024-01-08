---
title: 0171 Excel Sheet Column Number
summary: 0171 Excel Sheet Column Number LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0171-excel-sheet-column-number", "/blog/posts/0171-excel-sheet-column-number", "/0171-excel-sheet-column-number"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0171-excel-sheet-column-number solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0171 Excel Sheet Column Number/problem-solving.webp
    alt: 0171 Excel Sheet Column Number
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/excel-sheet-column-number/">171. Excel Sheet Column Number</a></h2><h3>Easy</h3><hr><div><p>Given a string <code>columnTitle</code> that represents the column title as appears in an Excel sheet, return <em>its corresponding column number</em>.</p>

<p>For example:</p>

<pre>A -&gt; 1
B -&gt; 2
C -&gt; 3
...
Z -&gt; 26
AA -&gt; 27
AB -&gt; 28 
...
</pre>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> columnTitle = "A"
<strong>Output:</strong> 1
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> columnTitle = "AB"
<strong>Output:</strong> 28
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> columnTitle = "ZY"
<strong>Output:</strong> 701
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= columnTitle.length &lt;= 7</code></li>
	<li><code>columnTitle</code> consists only of uppercase English letters.</li>
	<li><code>columnTitle</code> is in the range <code>["A", "FXSHRXW"]</code>.</li>
</ul>
</div>

---




```python
class Solution:
    def titleToNumber(self, columnTitle: str) -> int:
        res = 0
        for i in range(len(columnTitle)):
            k = ord(columnTitle[i]) - ord('A') + 1
            n = len(columnTitle) - i - 1
            res += k * 26**(n)
        return res
```
