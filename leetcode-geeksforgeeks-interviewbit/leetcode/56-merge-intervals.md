---
title: 56 Merge Intervals
summary: 56 Merge Intervals LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/56-merge-intervals", "/blog/posts/56-merge-intervals", "/56-merge-intervals"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 56-merge-intervals solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:56 Merge Intervals/problem-solving.webp
    alt: 56 Merge Intervals
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/merge-intervals/">56. Merge Intervals</a></h2><h3>Medium</h3><hr><div><p>Given an array&nbsp;of <code>intervals</code>&nbsp;where <code>intervals[i] = [start<sub>i</sub>, end<sub>i</sub>]</code>, merge all overlapping intervals, and return <em>an array of the non-overlapping intervals that cover all the intervals in the input</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> intervals = [[1,3],[2,6],[8,10],[15,18]]
<strong>Output:</strong> [[1,6],[8,10],[15,18]]
<strong>Explanation:</strong> Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> intervals = [[1,4],[4,5]]
<strong>Output:</strong> [[1,5]]
<strong>Explanation:</strong> Intervals [1,4] and [4,5] are considered overlapping.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= intervals.length &lt;= 10<sup>4</sup></code></li>
	<li><code>intervals[i].length == 2</code></li>
	<li><code>0 &lt;= start<sub>i</sub> &lt;= end<sub>i</sub> &lt;= 10<sup>4</sup></code></li>
</ul>
</div>

---




```python
class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort(key = lambda x : x[0])
        
        l = 0; r = 1
        while r < len(intervals):
            if intervals[l][1] >= intervals[r][0]:
                intervals[l] = [intervals[l][0], max(intervals[l][1], intervals[r][1])]
                intervals.pop(r)
            else:
                l += 1
                r += 1
        
        return intervals
```
