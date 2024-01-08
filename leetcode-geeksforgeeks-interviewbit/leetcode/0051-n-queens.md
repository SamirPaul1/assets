---
title: 0051 N Queens
summary: 0051 N Queens LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0051-n-queens", "/blog/posts/0051-n-queens", "/0051-n-queens"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0051-n-queens solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0051 N Queens/problem-solving.webp
    alt: 0051 N Queens
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/n-queens/">51. N-Queens</a></h2><h3>Hard</h3><hr><div><p>The <strong>n-queens</strong> puzzle is the problem of placing <code>n</code> queens on an <code>n x n</code> chessboard such that no two queens attack each other.</p>

<p>Given an integer <code>n</code>, return <em>all distinct solutions to the <strong>n-queens puzzle</strong></em>. You may return the answer in <strong>any order</strong>.</p>

<p>Each solution contains a distinct board configuration of the n-queens' placement, where <code>'Q'</code> and <code>'.'</code> both indicate a queen and an empty space, respectively.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/13/queens.jpg" style="width: 600px; height: 268px;">
<pre><strong>Input:</strong> n = 4
<strong>Output:</strong> [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
<strong>Explanation:</strong> There exist two distinct solutions to the 4-queens puzzle as shown above
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> n = 1
<strong>Output:</strong> [["Q"]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 9</code></li>
</ul>
</div>

---




```python
class Solution:
    def solveNQueens(self, n):
        col, posDiag, negDiag = set(), set(), set()
        board = [['.']*n for _ in range(n)]
        res = []
        
        def dfs(i):
            if i == n: 
                res.append(["".join(board[i]) for i in range(n)])
                return 
            for j in range(n):
                if j not in col and (i+j) not in posDiag and (i-j) not in negDiag:
                    board[i][j] = 'Q'
                    col.add(j)
                    posDiag.add(i+j)
                    negDiag.add(i-j)
                    
                    dfs(i+1)
                    
                    board[i][j] = '.'
                    col.remove(j)
                    posDiag.remove(i+j)
                    negDiag.remove(i-j)
            
        dfs(0)
        return res
```
