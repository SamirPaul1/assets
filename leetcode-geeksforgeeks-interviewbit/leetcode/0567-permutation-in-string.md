---
title: 0567 Permutation In String
summary: 0567 Permutation In String LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0567-permutation-in-string", "/blog/posts/0567-permutation-in-string", "/0567-permutation-in-string"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0567-permutation-in-string solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0567 Permutation In String/problem-solving.webp
    alt: 0567 Permutation In String
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/permutation-in-string/">567. Permutation in String</a></h2><h3>Medium</h3><hr><div><p>Given two strings <code>s1</code> and <code>s2</code>, return <code>true</code><em> if </em><code>s2</code><em> contains a permutation of </em><code>s1</code><em>, or </em><code>false</code><em> otherwise</em>.</p>

<p>In other words, return <code>true</code> if one of <code>s1</code>'s permutations is the substring of <code>s2</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> s1 = "ab", s2 = "eidbaooo"
<strong>Output:</strong> true
<strong>Explanation:</strong> s2 contains one permutation of s1 ("ba").
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> s1 = "ab", s2 = "eidboaoo"
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s1.length, s2.length &lt;= 10<sup>4</sup></code></li>
	<li><code>s1</code> and <code>s2</code> consist of lowercase English letters.</li>
</ul>
</div>

---




```python
class Solution:
    def checkInclusion(self, s1, s2):
        k = len(s1)
        s1d = collections.Counter(s1)
        s2d = collections.Counter(s2[:k])
        if s1d == s2d: return True
        for i in range(k, len(s2)):
            s2d[s2[i]] += 1
            s2d[s2[i-k]] -= 1
            if s1d == s2d: return True
        
        return False
    
    
# Time: O(N); where N = len(s2)
# Space: O(K)
```
