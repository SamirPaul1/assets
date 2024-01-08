---
title: 28 Implement Strstr
summary: 28 Implement Strstr LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/28-implement-strstr", "/blog/posts/28-implement-strstr", "/28-implement-strstr"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 28-implement-strstr solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:28 Implement Strstr/problem-solving.webp
    alt: 28 Implement Strstr
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/implement-strstr/">28. Implement strStr()</a></h2><h3>Easy</h3><hr><div><p>Implement <a href="http://www.cplusplus.com/reference/cstring/strstr/" target="_blank">strStr()</a>.</p>

<p>Given two strings <code>needle</code> and <code>haystack</code>, return the index of the first occurrence of <code>needle</code> in <code>haystack</code>, or <code>-1</code> if <code>needle</code> is not part of <code>haystack</code>.</p>

<p><strong>Clarification:</strong></p>

<p>What should we return when <code>needle</code> is an empty string? This is a great question to ask during an interview.</p>

<p>For the purpose of this problem, we will return 0 when <code>needle</code> is an empty string. This is consistent to C's <a href="http://www.cplusplus.com/reference/cstring/strstr/" target="_blank">strstr()</a> and Java's <a href="https://docs.oracle.com/javase/7/docs/api/java/lang/String.html#indexOf(java.lang.String)" target="_blank">indexOf()</a>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> haystack = "hello", needle = "ll"
<strong>Output:</strong> 2
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> haystack = "aaaaa", needle = "bba"
<strong>Output:</strong> -1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= haystack.length, needle.length &lt;= 10<sup>4</sup></code></li>
	<li><code>haystack</code> and <code>needle</code> consist of only lowercase English characters.</li>
</ul>
</div>

---




```python
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if not needle: return 0
        lh = len(haystack)
        ln = len(needle)
        
        for i in range(lh):
            if needle[0] == haystack[i] and i + ln <= lh:
                if haystack[i:i+ln] == needle:
                    return i
        
        return -1
```
