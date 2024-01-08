---
title: 118 Pascals Triangle
summary: 118 Pascals Triangle LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/118-pascals-triangle", "/blog/posts/118-pascals-triangle", "/118-pascals-triangle"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 118-pascals-triangle solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:118 Pascals Triangle/problem-solving.webp
    alt: 118 Pascals Triangle
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/pascals-triangle/">118. Pascal's Triangle</a></h2><h3>Easy</h3><hr><div><p>Given an integer <code>numRows</code>, return the first numRows of <strong>Pascal's triangle</strong>.</p>

<p>In <strong>Pascal's triangle</strong>, each number is the sum of the two numbers directly above it as shown:</p>
<img alt="" src="https://upload.wikimedia.org/wikipedia/commons/0/0d/PascalTriangleAnimated2.gif" style="height:240px; width:260px">
<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> numRows = 5
<strong>Output:</strong> [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> numRows = 1
<strong>Output:</strong> [[1]]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= numRows &lt;= 30</code></li>
</ul>
</div>

---




```python
class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        if numRows == 1: return [[1]]
        if numRows == 2: return [[1], [1,1]]
        
        res = [[1], [1,1]]
        for i in range(3, numRows+1):
            arr = [1]*i
            for j in range(1, i-1):
                arr[j] = res[-1][j-1] + res[-1][j]
            res.append(arr)
        
        return res
```
