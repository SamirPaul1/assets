---
title: 1347 Minimum Number Of Steps To Make Two Strings Anagram
summary: 1347 Minimum Number Of Steps To Make Two Strings Anagram LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/1347-minimum-number-of-steps-to-make-two-strings-anagram", "/blog/posts/1347-minimum-number-of-steps-to-make-two-strings-anagram", "/1347-minimum-number-of-steps-to-make-two-strings-anagram"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 1347-minimum-number-of-steps-to-make-two-strings-anagram solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:1347 Minimum Number Of Steps To Make Two Strings Anagram/problem-solving.webp
    alt: 1347 Minimum Number Of Steps To Make Two Strings Anagram
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/">1347. Minimum Number of Steps to Make Two Strings Anagram</a></h2><h3>Medium</h3><hr><div><p>You are given two strings of the same length <code>s</code> and <code>t</code>. In one step you can choose <strong>any character</strong> of <code>t</code> and replace it with <strong>another character</strong>.</p>

<p>Return <em>the minimum number of steps</em> to make <code>t</code> an anagram of <code>s</code>.</p>

<p>An <strong>Anagram</strong> of a string is a string that contains the same characters with a different (or the same) ordering.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> s = "bab", t = "aba"
<strong>Output:</strong> 1
<strong>Explanation:</strong> Replace the first 'a' in t with b, t = "bba" which is anagram of s.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> s = "leetcode", t = "practice"
<strong>Output:</strong> 5
<strong>Explanation:</strong> Replace 'p', 'r', 'a', 'i' and 'c' from t with proper characters to make t anagram of s.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> s = "anagram", t = "mangaar"
<strong>Output:</strong> 0
<strong>Explanation:</strong> "anagram" and "mangaar" are anagrams. 
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>s.length == t.length</code></li>
	<li><code>s</code> and <code>t</code> consist of lowercase English letters only.</li>
</ul>
</div>

---




```python
class Solution:
    def minSteps(self, s: str, t: str) -> int:
        sd = {chr(i):0 for i in range(97, 123)}
        for i in s:
            sd[i] += 1
        
        td = {chr(i):0 for i in range(97, 123)}
        for i in t:
            td[i] += 1
        
        res = 0
        
        for i in sd:
            if td[i] == 0:
                res += sd[i]
            elif sd[i] > td[i]:
                res += sd[i] - td[i]
        
        return res
```
