---
title: Longest Increasing Path In A Matrix
summary: Longest Increasing Path In A Matrix LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "longest-increasing-path-in-a-matrix LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Longest Increasing Path In A Matrix - Solution Explained/problem-solving.webp
    alt: Longest Increasing Path In A Matrix
    hiddenInList: true
    hiddenInSingle: false
---


<h2>329. Longest Increasing Path in a Matrix</h2><h3>Hard</h3><hr><div><p>Given an <code>m x n</code> integers <code>matrix</code>, return <em>the length of the longest increasing path in </em><code>matrix</code>.</p>

<p>From each cell, you can either move in four directions: left, right, up, or down. You <strong>may not</strong> move <strong>diagonally</strong> or move <strong>outside the boundary</strong> (i.e., wrap-around is not allowed).</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/05/grid1.jpg" style="width: 242px; height: 242px;">
<pre><strong>Input:</strong> matrix = [[9,9,4],[6,6,8],[2,1,1]]
<strong>Output:</strong> 4
<strong>Explanation:</strong> The longest increasing path is <code>[1, 2, 6, 9]</code>.
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/27/tmp-grid.jpg" style="width: 253px; height: 253px;">
<pre><strong>Input:</strong> matrix = [[3,4,5],[3,2,6],[2,2,1]]
<strong>Output:</strong> 4
<strong>Explanation: </strong>The longest increasing path is <code>[3, 4, 5, 6]</code>. Moving diagonally is not allowed.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> matrix = [[1]]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m == matrix.length</code></li>
	<li><code>n == matrix[i].length</code></li>
	<li><code>1 &lt;= m, n &lt;= 200</code></li>
	<li><code>0 &lt;= matrix[i][j] &lt;= 2<sup>31</sup> - 1</code></li>
</ul>
</div>

---




```cpp
class Solution {
public:
    int n,m;
    int solve(int i, int j, vector<vector<int>> &t, vector<vector<int>>& mat){
        if(t[i][j]!=-1)
            return t[i][j];
        int a=1,b=1,c=1,d=1;
        if(i+1<n && mat[i][j]<mat[i+1][j])
            a+=solve(i+1,j,t,mat);
        if(j+1<m && mat[i][j]<mat[i][j+1])
            b+=solve(i,j+1,t,mat);
        if(i-1>=0 && mat[i][j]<mat[i-1][j])
            c+=solve(i-1,j,t,mat);
        if(j-1>=0 && mat[i][j]<mat[i][j-1])
            d+=solve(i,j-1,t,mat);
        return t[i][j]=max(max(a,b),max(c,d));
    }
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        n=matrix.size();
        m=matrix[0].size();
        vector<vector<int>> t;
        t.resize(n, vector<int>(m,-1));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans=max(ans, solve(i,j,t,matrix));
            }
        }
        return ans;
    }
};
```
