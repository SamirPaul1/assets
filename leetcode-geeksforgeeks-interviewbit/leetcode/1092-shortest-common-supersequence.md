---
title: 1092 Shortest Common Supersequence
summary: 1092 Shortest Common Supersequence LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/1092-shortest-common-supersequence", "/blog/posts/1092-shortest-common-supersequence", "/1092-shortest-common-supersequence"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 1092-shortest-common-supersequence solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:1092 Shortest Common Supersequence/problem-solving.webp
    alt: 1092 Shortest Common Supersequence
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/shortest-common-supersequence/">1092. Shortest Common Supersequence </a></h2><h3>Hard</h3><hr><div><p>Given two strings <code>str1</code> and <code>str2</code>, return <em>the shortest string that has both </em><code>str1</code><em> and </em><code>str2</code><em> as <strong>subsequences</strong></em>. If there are multiple valid strings, return <strong>any</strong> of them.</p>

<p>A string <code>s</code> is a <strong>subsequence</strong> of string <code>t</code> if deleting some number of characters from <code>t</code> (possibly <code>0</code>) results in the string <code>s</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> str1 = "abac", str2 = "cab"
<strong>Output:</strong> "cabac"
<strong>Explanation:</strong> 
str1 = "abac" is a subsequence of "cabac" because we can delete the first "c".
str2 = "cab" is a subsequence of "cabac" because we can delete the last "ac".
The answer provided is the shortest such string that satisfies these properties.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> str1 = "aaaaaaaa", str2 = "aaaaaaaa"
<strong>Output:</strong> "aaaaaaaa"
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= str1.length, str2.length &lt;= 1000</code></li>
	<li><code>str1</code> and <code>str2</code> consist of lowercase English letters.</li>
</ul>
</div>

---




```python
class Solution:
    def shortestCommonSupersequence(self, str1: str, str2: str) -> str:
        x = str1; y = str2
        dp = [[0]*(len(y)+1) for i in range(len(x)+1)]
        for i in range(1, len(x)+1):
            for j in range(1, len(y)+1):
                if x[i-1] == y[j-1]:
                    dp[i][j] = 1 + dp[i-1][j-1]
                else:
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1])
        
        res = ""
        i = len(x); j = len(y)
        while i > 0 and j > 0:
            if x[i-1] == y[j-1]:
                res += x[i-1]
                i -= 1
                j -= 1
            elif dp[i-1][j] >= dp[i][j-1]:
                res += x[i-1]
                i -= 1
            else:
                res += y[j-1]
                j -= 1
        
        while i > 0:
            res += x[i-1]
            i -= 1
        
        while j > 0:
            res += y[j-1]
            j -= 1
    
        return res[::-1]
```
