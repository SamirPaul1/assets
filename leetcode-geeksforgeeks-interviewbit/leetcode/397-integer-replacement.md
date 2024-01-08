---
title: 397 Integer Replacement
summary: 397 Integer Replacement LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/397-integer-replacement", "/blog/posts/397-integer-replacement", "/397-integer-replacement"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 397-integer-replacement solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:397 Integer Replacement/problem-solving.webp
    alt: 397 Integer Replacement
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/integer-replacement/">397. Integer Replacement</a></h2><h3>Medium</h3><hr><div><p>Given a positive integer <code>n</code>,&nbsp;you can apply one of the following&nbsp;operations:</p>

<ol>
	<li>If <code>n</code> is even, replace <code>n</code> with <code>n / 2</code>.</li>
	<li>If <code>n</code> is odd, replace <code>n</code> with either <code>n + 1</code> or <code>n - 1</code>.</li>
</ol>

<p>Return <em>the minimum number of operations needed for</em> <code>n</code> <em>to become</em> <code>1</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> n = 8
<strong>Output:</strong> 3
<strong>Explanation:</strong> 8 -&gt; 4 -&gt; 2 -&gt; 1
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> n = 7
<strong>Output:</strong> 4
<strong>Explanation: </strong>7 -&gt; 8 -&gt; 4 -&gt; 2 -&gt; 1
or 7 -&gt; 6 -&gt; 3 -&gt; 2 -&gt; 1
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> n = 4
<strong>Output:</strong> 2
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 2<sup>31</sup> - 1</code></li>
</ul>
</div>

---




```python
class Solution:
    def integerReplacement(self, n: int) -> int:
        memo = {}
        
        def solve(n):
            if n == 1: return 0
            if n in memo: return memo[n]
            ans = 0
            if n % 2 == 0: ans = 1 + solve(n//2)
            else: ans = 1 + min(solve(n+1), solve(n-1))
            memo[n] = ans
            return ans
        
        return solve(n)
```
