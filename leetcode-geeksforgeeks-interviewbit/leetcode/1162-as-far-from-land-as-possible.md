---
title: 1162 As Far From Land As Possible
summary: 1162 As Far From Land As Possible LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/1162-as-far-from-land-as-possible", "/blog/posts/1162-as-far-from-land-as-possible", "/1162-as-far-from-land-as-possible"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 1162-as-far-from-land-as-possible solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:1162 As Far From Land As Possible/problem-solving.webp
    alt: 1162 As Far From Land As Possible
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/as-far-from-land-as-possible/">1162. As Far from Land as Possible</a></h2><h3>Medium</h3><hr><div><p>Given an <code>n x n</code> <code>grid</code>&nbsp;containing only values <code>0</code> and <code>1</code>, where&nbsp;<code>0</code> represents water&nbsp;and <code>1</code> represents land, find a water cell such that its distance to the nearest land cell is maximized, and return the distance.&nbsp;If no land or water exists in the grid, return <code>-1</code>.</p>

<p>The distance used in this problem is the Manhattan distance:&nbsp;the distance between two cells <code>(x0, y0)</code> and <code>(x1, y1)</code> is <code>|x0 - x1| + |y0 - y1|</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/05/03/1336_ex1.JPG" style="width: 185px; height: 87px;">
<pre><strong>Input:</strong> grid = [[1,0,1],[0,0,0],[1,0,1]]
<strong>Output:</strong> 2
<strong>Explanation:</strong> The cell (1, 1) is as far as possible from all the land with distance 2.
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/05/03/1336_ex2.JPG" style="width: 184px; height: 87px;">
<pre><strong>Input:</strong> grid = [[1,0,0],[0,0,0],[0,0,0]]
<strong>Output:</strong> 4
<strong>Explanation:</strong> The cell (2, 2) is as far as possible from all the land with distance 4.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == grid.length</code></li>
	<li><code>n == grid[i].length</code></li>
	<li><code>1 &lt;= n&nbsp;&lt;= 100</code></li>
	<li><code>grid[i][j]</code>&nbsp;is <code>0</code> or <code>1</code></li>
</ul>
</div>

---




```python
class Solution:
    def maxDistance(self, grid: List[List[int]]) -> int:
        q = []
        n = len(grid)
        for i in range(n):
            for j in range(n):
                if grid[i][j] == 1: q.append((i,j))
        
        if len(q) == 0 or len(q) == n*n: return -1
        
        directions = [[-1,0], [1,0], [0,-1], [0,1]]
        res = -1
        while q:
            l = len(q)
            for i in range(l):
                cur = q.pop(0)
                for direc in directions:
                    r = cur[0] + direc[0]
                    c = cur[1] + direc[1]
                    if not 0 <= r < n or not 0 <= c < n or grid[r][c] == 1: continue
                    grid[r][c] = 1
                    q.append((r,c))
            res += 1
        
        return res
```
