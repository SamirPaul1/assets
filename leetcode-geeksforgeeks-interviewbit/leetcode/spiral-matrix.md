---
title: Spiral Matrix
summary: Spiral Matrix LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/spiral-matrix", "/blog/posts/spiral-matrix", "/spiral-matrix"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, spiral-matrix solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Spiral Matrix/problem-solving.webp
    alt: Spiral Matrix
    hiddenInList: true
    hiddenInSingle: false
---


<h2>54. Spiral Matrix</h2><h3>Medium</h3><hr><div><p>Given an <code>m x n</code> <code>matrix</code>, return <em>all elements of the</em> <code>matrix</code> <em>in spiral order</em>.</p>

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




```cpp
class Solution {
public:
    vector<int> ans;
    
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int r1=0, r2=n-1, c1=0, c2=m-1;
        while(r1<=r2 && c1<=c2){
            for(int c=c1;c<=c2;c++)
                ans.push_back(mat[r1][c]);
            for(int r=r1+1;r<=r2;r++)
                ans.push_back(mat[r][c2]);
            if(r1<r2 && c1<c2){
                for(int c=c2-1;c>c1;c--)
                    ans.push_back(mat[r2][c]);
                for(int r=r2;r>r1;r--)
                    ans.push_back(mat[r][c1]);
            }
            
            r1++;
            r2--;
            c1++;
            c2--;
        }
        return ans;
    }
};
```
