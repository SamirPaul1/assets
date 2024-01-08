---
title: 739 Daily Temperatures
summary: 739 Daily Temperatures LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/739-daily-temperatures", "/blog/posts/739-daily-temperatures", "/739-daily-temperatures"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 739-daily-temperatures solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:739 Daily Temperatures/problem-solving.webp
    alt: 739 Daily Temperatures
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/daily-temperatures/">739. Daily Temperatures</a></h2><h3>Medium</h3><hr><div><p>Given an array of integers <code>temperatures</code> represents the daily temperatures, return <em>an array</em> <code>answer</code> <em>such that</em> <code>answer[i]</code> <em>is the number of days you have to wait after the</em> <code>i<sup>th</sup></code> <em>day to get a warmer temperature</em>. If there is no future day for which this is possible, keep <code>answer[i] == 0</code> instead.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> temperatures = [73,74,75,71,69,72,76,73]
<strong>Output:</strong> [1,1,4,2,1,1,0,0]
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> temperatures = [30,40,50,60]
<strong>Output:</strong> [1,1,1,0]
</pre><p><strong>Example 3:</strong></p>
<pre><strong>Input:</strong> temperatures = [30,60,90]
<strong>Output:</strong> [1,1,0]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;=&nbsp;temperatures.length &lt;= 10<sup>5</sup></code></li>
	<li><code>30 &lt;=&nbsp;temperatures[i] &lt;= 100</code></li>
</ul>
</div>

---




```python
class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        
        # Same as --> Next Greater Element
        
        res = [i for i in range(len(temperatures))] 
        stack = []
        
        for i in range(len(temperatures)-1, -1, -1):
            while stack and temperatures[stack[-1]] <= temperatures[i]:
                stack.pop()
            if stack:
                res[i] = stack[-1]
            stack.append(i)
        
        for i in range(len(temperatures)):
            res[i] = res[i] - i
        
        return res
    
# Time: O(N)   
# Space: O(N) 
```
