---
title: 54 Spiral Matrix
summary: 54 Spiral Matrix LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/54-spiral-matrix", "/blog/posts/54-spiral-matrix", "/54-spiral-matrix"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 54-spiral-matrix solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:54 Spiral Matrix/problem-solving.webp
    alt: 54 Spiral Matrix
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/spiral-matrix/">54. Spiral Matrix</a></h2><h3>Medium</h3><hr><div><p>Given an <code>m x n</code> <code>matrix</code>, return <em>all elements of the</em> <code>matrix</code> <em>in spiral order</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/13/spiral1.jpg" style="width: 242px; height: 242px;">
<pre><strong>Input:</strong> matrix = [[1,2,3],[4,5,6],[7,8,9]]
<strong>Output:</strong> [1,2,3,6,9,8,7,4,5]
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/13/spiral.jpg" style="width: 322px; height: 242px;">
<pre><strong>Input:</strong> matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
<strong>Output:</strong> [1,2,3,4,8,12,11,10,9,5,6,7]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m == matrix.length</code></li>
	<li><code>n == matrix[i].length</code></li>
	<li><code>1 &lt;= m, n &lt;= 10</code></li>
	<li><code>-100 &lt;= matrix[i][j] &lt;= 100</code></li>
</ul>
</div>

---




```python
class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        left = 0
        right = len(matrix[0]) - 1
        top = 0
        down = len(matrix) - 1
        res = []
        
        while left <= right and top <= down:
            for i in range(left, right+1):
                res += [matrix[top][i]]
            top += 1
            
            if top > down: break
            
            for i in range(top, down+1):
                res += [matrix[i][right]]
            right -= 1
            
            if left > right: break
            
            for i in range(right, left-1, -1):
                res += [matrix[down][i]]
            down -= 1
                        
            for i in range(down, top-1, -1):
                res += [matrix[i][left]]
            left += 1
        
        return res
```
