---
title: 438 Find All Anagrams In A String
summary: 438 Find All Anagrams In A String LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "438-find-all-anagrams-in-a-string LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:438 Find All Anagrams In A String - Solution Explained/problem-solving.webp
    alt: 438 Find All Anagrams In A String
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/find-all-anagrams-in-a-string/">438. Find All Anagrams in a String</a></h2><h3>Medium</h3><hr><div><p>Given two strings <code>s</code> and <code>p</code>, return <em>an array of all the start indices of </em><code>p</code><em>'s anagrams in </em><code>s</code>. You may return the answer in <strong>any order</strong>.</p>

<p>An <strong>Anagram</strong> is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> s = "cbaebabacd", p = "abc"
<strong>Output:</strong> [0,6]
<strong>Explanation:</strong>
The substring with start index = 0 is "cba", which is an anagram of "abc".
The substring with start index = 6 is "bac", which is an anagram of "abc".
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> s = "abab", p = "ab"
<strong>Output:</strong> [0,1,2]
<strong>Explanation:</strong>
The substring with start index = 0 is "ab", which is an anagram of "ab".
The substring with start index = 1 is "ba", which is an anagram of "ab".
The substring with start index = 2 is "ab", which is an anagram of "ab".
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length, p.length &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code>s</code> and <code>p</code> consist of lowercase English letters.</li>
</ul>
</div>

---




```python
class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        res = []
        n = len(s); k = len(p)
        if n < k: return res
        
        pDic = {chr(97+i):0 for i in range(26)}
        for i in p:
            pDic[i] += 1
        
        sDic = {chr(97+i):0 for i in range(26)}
        for i in s[:k]:
            sDic[i] += 1

        i = 0
        while i < n-k+1:
            if sDic == pDic:
                res.append(i)
            if i == n-k: break
            sDic[s[i+k]] += 1
            sDic[s[i]] -= 1
            i += 1
        
        return res
```
