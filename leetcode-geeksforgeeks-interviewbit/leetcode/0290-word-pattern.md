---
title: 0290 Word Pattern
summary: 0290 Word Pattern LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0290-word-pattern", "/blog/posts/0290-word-pattern", "/0290-word-pattern"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0290-word-pattern solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0290 Word Pattern/problem-solving.webp
    alt: 0290 Word Pattern
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/word-pattern/">290. Word Pattern</a></h2><h3>Easy</h3><hr><div><p>Given a <code>pattern</code> and a string <code>s</code>, find if <code>s</code>&nbsp;follows the same pattern.</p>

<p>Here <b>follow</b> means a full match, such that there is a bijection between a letter in <code>pattern</code> and a <b>non-empty</b> word in <code>s</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> pattern = "abba", s = "dog cat cat dog"
<strong>Output:</strong> true
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> pattern = "abba", s = "dog cat cat fish"
<strong>Output:</strong> false
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> pattern = "aaaa", s = "dog cat cat dog"
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= pattern.length &lt;= 300</code></li>
	<li><code>pattern</code> contains only lower-case English letters.</li>
	<li><code>1 &lt;= s.length &lt;= 3000</code></li>
	<li><code>s</code> contains only lowercase English letters and spaces <code>' '</code>.</li>
	<li><code>s</code> <strong>does not contain</strong> any leading or trailing spaces.</li>
	<li>All the words in <code>s</code> are separated by a <strong>single space</strong>.</li>
</ul>
</div>

---




```python
class Solution:
    def wordPattern(self, p: str, s: str) -> bool:
        s = list(s.split(' '))
        if len(s) != len(p): return False
        dp = {}
        ds = {}
        for ep, es in zip(p, s):
            if ep not in dp:
                dp[ep] = es
            else:
                if dp[ep] != es: return False
            
            if es not in ds:
                ds[es] = ep
            else:
                if ds[es] != ep: return False
        
        return True
```
