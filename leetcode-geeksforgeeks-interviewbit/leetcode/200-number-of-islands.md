---
title: 200 Number Of Islands
summary: 200 Number Of Islands LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/200-number-of-islands", "/blog/posts/200-number-of-islands", "/200-number-of-islands"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 200-number-of-islands solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:200 Number Of Islands/problem-solving.webp
    alt: 200 Number Of Islands
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/number-of-islands/">200. Number of Islands</a></h2><h3>Medium</h3><hr><div><p>Given an <code>m x n</code> 2D binary grid <code>grid</code> which represents a map of <code>'1'</code>s (land) and <code>'0'</code>s (water), return <em>the number of islands</em>.</p>

<p>An <strong>island</strong> is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
<strong>Output:</strong> 1
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]
<strong>Output:</strong> 3
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m == grid.length</code></li>
	<li><code>n == grid[i].length</code></li>
	<li><code>1 &lt;= m, n &lt;= 300</code></li>
	<li><code>grid[i][j]</code> is <code>'0'</code> or <code>'1'</code>.</li>
</ul>
</div>

---




```python
class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        m = len(grid); n = len(grid[0])
        directions = [[-1,0], [1,0], [0,-1], [0,1]]
        
        def makeWater(i, j):
            if not 0 <= i < m or not 0 <= j < n or grid[i][j] == "0": return
            grid[i][j] = "0"
            makeWater(i+1, j)
            makeWater(i-1, j)
            makeWater(i, j+1)
            makeWater(i, j-1)
        
        res = 0
        for i in range(m):
            for j in range(n):
                if grid[i][j] == "1":
                    makeWater(i, j)
                    res += 1
                    
        return res
```
