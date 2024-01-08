---
title: 0072 Edit Distance
summary: 0072 Edit Distance LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0072-edit-distance", "/blog/posts/0072-edit-distance", "/0072-edit-distance"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0072-edit-distance solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0072 Edit Distance/problem-solving.webp
    alt: 0072 Edit Distance
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/edit-distance/">72. Edit Distance</a></h2><h3>Hard</h3><hr><div><p>Given two strings <code>word1</code> and <code>word2</code>, return <em>the minimum number of operations required to convert <code>word1</code> to <code>word2</code></em>.</p>

<p>You have the following three operations permitted on a word:</p>

<ul>
	<li>Insert a character</li>
	<li>Delete a character</li>
	<li>Replace a character</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> word1 = "horse", word2 = "ros"
<strong>Output:</strong> 3
<strong>Explanation:</strong> 
horse -&gt; rorse (replace 'h' with 'r')
rorse -&gt; rose (remove 'r')
rose -&gt; ros (remove 'e')
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> word1 = "intention", word2 = "execution"
<strong>Output:</strong> 5
<strong>Explanation:</strong> 
intention -&gt; inention (remove 't')
inention -&gt; enention (replace 'i' with 'e')
enention -&gt; exention (replace 'n' with 'x')
exention -&gt; exection (replace 'n' with 'c')
exection -&gt; execution (insert 'u')
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= word1.length, word2.length &lt;= 500</code></li>
	<li><code>word1</code> and <code>word2</code> consist of lowercase English letters.</li>
</ul>
</div>

---




```python
class Solution:
    def minDistance(self, w1: str, w2: str) -> int:
        dp = [[0]*(len(w2)+1) for _ in range(len(w1)+1)]
        
        for i in range(len(w1)+1):
            dp[i][0] = i
        
        for j in range(len(w2)+1):
            dp[0][j] = j
        
        for i in range(1, len(w1)+1):
            for j in range(1, len(w2)+1):
                if w1[i-1] == w2[j-1]:
                    dp[i][j] = dp[i-1][j-1]
                else:
                    dp[i][j] = 1 + min(dp[i-1][j-1], dp[i-1][j], dp[i][j-1])
        
        # print(dp)
        return dp[-1][-1]
```
