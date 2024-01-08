---
title: 387 First Unique Character In A String
summary: 387 First Unique Character In A String LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/387-first-unique-character-in-a-string", "/blog/posts/387-first-unique-character-in-a-string", "/387-first-unique-character-in-a-string"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 387-first-unique-character-in-a-string solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:387 First Unique Character In A String/problem-solving.webp
    alt: 387 First Unique Character In A String
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/first-unique-character-in-a-string/">387. First Unique Character in a String</a></h2><h3>Easy</h3><hr><div><p>Given a string <code>s</code>, <em>find the first non-repeating character in it and return its index</em>. If it does not exist, return <code>-1</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> s = "leetcode"
<strong>Output:</strong> 0
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> s = "loveleetcode"
<strong>Output:</strong> 2
</pre><p><strong>Example 3:</strong></p>
<pre><strong>Input:</strong> s = "aabb"
<strong>Output:</strong> -1
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code>s</code> consists of only lowercase English letters.</li>
</ul>
</div>

---




```python
class Solution:
    def firstUniqChar(self, s: str) -> int:
        dic = {}
        for i in range(len(s)):
            if s[i] not in dic:
                dic[s[i]] = 1
            else:
                dic[s[i]] += 1
        
        for i in range(len(s)):
            if dic[s[i]] == 1: return i
        
        return -1
```
