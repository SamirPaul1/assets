---
title: 0844 Backspace String Compare
summary: 0844 Backspace String Compare LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0844-backspace-string-compare", "/blog/posts/0844-backspace-string-compare", "/0844-backspace-string-compare"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0844-backspace-string-compare solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0844 Backspace String Compare/problem-solving.webp
    alt: 0844 Backspace String Compare
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/backspace-string-compare/">844. Backspace String Compare</a></h2><h3>Easy</h3><hr><div><p>Given two strings <code>s</code> and <code>t</code>, return <code>true</code> <em>if they are equal when both are typed into empty text editors</em>. <code>'#'</code> means a backspace character.</p>

<p>Note that after backspacing an empty text, the text will continue empty.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> s = "ab#c", t = "ad#c"
<strong>Output:</strong> true
<strong>Explanation:</strong> Both s and t become "ac".
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> s = "ab##", t = "c#d#"
<strong>Output:</strong> true
<strong>Explanation:</strong> Both s and t become "".
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> s = "a#c", t = "b"
<strong>Output:</strong> false
<strong>Explanation:</strong> s becomes "c" while t becomes "b".
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code><span>1 &lt;= s.length, t.length &lt;= 200</span></code></li>
	<li><span><code>s</code> and <code>t</code> only contain lowercase letters and <code>'#'</code> characters.</span></li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> Can you solve it in <code>O(n)</code> time and <code>O(1)</code> space?</p>
</div>

---




```python
class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        sa = []
        for i in range(len(s)):
            if s[i] == '#':
                if sa: sa.pop()
            else:
                sa.append(s[i])
        ta = []
        for i in range(len(t)):
            if t[i] == '#':
                if ta: ta.pop()
            else:
                ta.append(t[i])
        
        return ''.join(sa) == ''.join(ta)
```
