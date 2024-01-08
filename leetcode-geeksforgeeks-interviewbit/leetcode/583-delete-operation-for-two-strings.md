---
title: 583 Delete Operation For Two Strings
summary: 583 Delete Operation For Two Strings LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/583-delete-operation-for-two-strings", "/blog/posts/583-delete-operation-for-two-strings", "/583-delete-operation-for-two-strings"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 583-delete-operation-for-two-strings solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:583 Delete Operation For Two Strings/problem-solving.webp
    alt: 583 Delete Operation For Two Strings
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/delete-operation-for-two-strings/">583. Delete Operation for Two Strings</a></h2><h3>Medium</h3><hr><div><p>Given two strings <code>word1</code> and <code>word2</code>, return <em>the minimum number of <strong>steps</strong> required to make</em> <code>word1</code> <em>and</em> <code>word2</code> <em>the same</em>.</p>

<p>In one <strong>step</strong>, you can delete exactly one character in either string.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> word1 = "sea", word2 = "eat"
<strong>Output:</strong> 2
<strong>Explanation:</strong> You need one step to make "sea" to "ea" and another step to make "eat" to "ea".
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> word1 = "leetcode", word2 = "etco"
<strong>Output:</strong> 4
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= word1.length, word2.length &lt;= 500</code></li>
	<li><code>word1</code> and <code>word2</code> consist of only lowercase English letters.</li>
</ul>
</div>

---




```python
class Solution:
    def minDistance(self, word1: str, word2: str) -> int:
        dp = [[0]*(len(word2)+1) for i in range(len(word1)+1)]
        
        for i in range(1, len(word1)+1):
            for j in range(1, len(word2)+1):
                if word1[i-1] == word2[j-1]:
                    dp[i][j] = 1 + dp[i-1][j-1]
                else:
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1])
        
        return len(word1) + len(word2) - 2 * dp[-1][-1]
```
