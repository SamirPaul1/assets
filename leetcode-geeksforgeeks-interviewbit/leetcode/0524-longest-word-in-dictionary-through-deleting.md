---
title: 0524 Longest Word In Dictionary Through Deleting
summary: 0524 Longest Word In Dictionary Through Deleting LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "0524-longest-word-in-dictionary-through-deleting LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:0524 Longest Word In Dictionary Through Deleting - Solution Explained/problem-solving.webp
    alt: 0524 Longest Word In Dictionary Through Deleting
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/longest-word-in-dictionary-through-deleting/">524. Longest Word in Dictionary through Deleting</a></h2><h3>Medium</h3><hr><div><p>Given a string <code>s</code> and a string array <code>dictionary</code>, return <em>the longest string in the dictionary that can be formed by deleting some of the given string characters</em>. If there is more than one possible result, return the longest word with the smallest lexicographical order. If there is no possible result, return the empty string.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> s = "abpcplea", dictionary = ["ale","apple","monkey","plea"]
<strong>Output:</strong> "apple"
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> s = "abpcplea", dictionary = ["a","b","c"]
<strong>Output:</strong> "a"
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 1000</code></li>
	<li><code>1 &lt;= dictionary.length &lt;= 1000</code></li>
	<li><code>1 &lt;= dictionary[i].length &lt;= 1000</code></li>
	<li><code>s</code> and <code>dictionary[i]</code> consist of lowercase English letters.</li>
</ul>
</div>

---




```python
class Solution:
    def findLongestWord(self, s: str, dictionary: List[str]) -> str:
        def isSubciquence(s, a):
            i = 0; j = 0
            while i < len(s) and j < len(a):
                if s[i] == a[j]:
                    i += 1
                    j += 1
                else:
                    i += 1
            return j == len(a)

        res = ""
        for a in dictionary:
            if isSubciquence(s, a):
                if not res: res = a
                elif len(a) == len(res) and a < res: res = a
                elif len(a) > len(res): res = a
            # print(res)
        return res
                    
```
