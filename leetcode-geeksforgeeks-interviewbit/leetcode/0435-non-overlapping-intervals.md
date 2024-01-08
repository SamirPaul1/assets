---
title: 0435 Non Overlapping Intervals
summary: 0435 Non Overlapping Intervals LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0435-non-overlapping-intervals", "/blog/posts/0435-non-overlapping-intervals", "/0435-non-overlapping-intervals"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0435-non-overlapping-intervals solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0435 Non Overlapping Intervals/problem-solving.webp
    alt: 0435 Non Overlapping Intervals
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/non-overlapping-intervals/">435. Non-overlapping Intervals</a></h2><h3>Medium</h3><hr><div><p>Given an array of intervals <code>intervals</code> where <code>intervals[i] = [start<sub>i</sub>, end<sub>i</sub>]</code>, return <em>the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> intervals = [[1,2],[2,3],[3,4],[1,3]]
<strong>Output:</strong> 1
<strong>Explanation:</strong> [1,3] can be removed and the rest of the intervals are non-overlapping.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> intervals = [[1,2],[1,2],[1,2]]
<strong>Output:</strong> 2
<strong>Explanation:</strong> You need to remove two [1,2] to make the rest of the intervals non-overlapping.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> intervals = [[1,2],[2,3]]
<strong>Output:</strong> 0
<strong>Explanation:</strong> You don't need to remove any of the intervals since they're already non-overlapping.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= intervals.length &lt;= 10<sup>5</sup></code></li>
	<li><code>intervals[i].length == 2</code></li>
	<li><code>-5 * 10<sup>4</sup> &lt;= start<sub>i</sub> &lt; end<sub>i</sub> &lt;= 5 * 10<sup>4</sup></code></li>
</ul>
</div>

---




```python
class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        
        intervals.sort()
        cur = intervals[0]
        res = 0
        for new in intervals[1:]:
            if new[0] < cur[1]:
                res += 1
                if new[1] < cur[1]:
                    cur = new
            else:
                cur = new
        
        return res
```
