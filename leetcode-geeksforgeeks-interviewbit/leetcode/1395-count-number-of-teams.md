---
title: 1395 Count Number Of Teams
summary: 1395 Count Number Of Teams LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/1395-count-number-of-teams", "/blog/posts/1395-count-number-of-teams", "/1395-count-number-of-teams"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 1395-count-number-of-teams solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:1395 Count Number Of Teams/problem-solving.webp
    alt: 1395 Count Number Of Teams
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/count-number-of-teams/">1395. Count Number of Teams</a></h2><h3>Medium</h3><hr><div><p>There are <code>n</code> soldiers standing in a line. Each soldier is assigned a <strong>unique</strong> <code>rating</code> value.</p>

<p>You have to form a team of 3 soldiers amongst them under the following rules:</p>

<ul>
	<li>Choose 3 soldiers with index (<code>i</code>, <code>j</code>, <code>k</code>) with rating (<code>rating[i]</code>, <code>rating[j]</code>, <code>rating[k]</code>).</li>
	<li>A team is valid if: (<code>rating[i] &lt; rating[j] &lt; rating[k]</code>) or (<code>rating[i] &gt; rating[j] &gt; rating[k]</code>) where (<code>0 &lt;= i &lt; j &lt; k &lt; n</code>).</li>
</ul>

<p>Return the number of teams you can form given the conditions. (soldiers can be part of multiple teams).</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> rating = [2,5,3,4,1]
<strong>Output:</strong> 3
<strong>Explanation:</strong> We can form three teams given the conditions. (2,3,4), (5,4,1), (5,3,1). 
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> rating = [2,1,3]
<strong>Output:</strong> 0
<strong>Explanation:</strong> We can't form any team given the conditions.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> rating = [1,2,3,4]
<strong>Output:</strong> 4
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == rating.length</code></li>
	<li><code>3 &lt;= n &lt;= 1000</code></li>
	<li><code>1 &lt;= rating[i] &lt;= 10<sup>5</sup></code></li>
	<li>All the integers in <code>rating</code> are <strong>unique</strong>.</li>
</ul>
</div>

---




```python
class Solution:
    def numTeams(self, rating: List[int]) -> int:
        count = 0
        
        dp = [0] * len(rating)
        for i in range(len(rating)):
            for j in range(i, -1, -1):
                if rating[i] > rating[j]:
                    dp[i] += 1
                    count += dp[j]
        
        dp = [0] * len(rating)
        for i in range(len(rating)):
            for j in range(i, -1, -1):
                if rating[i] < rating[j]:
                    dp[i] += 1
                    count += dp[j]
        
        return count
```
