---
title: Out Of Boundary Paths
summary: Out Of Boundary Paths LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "out-of-boundary-paths LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Out Of Boundary Paths - Solution Explained/problem-solving.webp
    alt: Out Of Boundary Paths
    hiddenInList: true
    hiddenInSingle: false
---


<h2>576. Out of Boundary Paths</h2><h3>Medium</h3><hr><div><p>There is an <b>m</b> by <b>n</b> grid with a ball. Given the start coordinate <b>(i,j)</b> of the ball, you can move the ball to <b>adjacent</b> cell or cross the grid boundary in four directions (up, down, left, right). However, you can <b>at most</b> move <b>N</b> times. Find out the number of paths to move the ball out of grid boundary. The answer may be very large, return it after mod 10<sup>9</sup> + 7.</p>

<p>&nbsp;</p>

<p><b>Example 1:</b></p>

<pre><b>Input: </b>m = 2, n = 2, N = 2, i = 0, j = 0
<b>Output:</b> 6
<b>Explanation:</b>
<img src="https://assets.leetcode.com/uploads/2018/10/13/out_of_boundary_paths_1.png" style="width: 100%; max-width: 400px">
</pre>

<p><b>Example 2:</b></p>

<pre><b>Input: </b>m = 1, n = 3, N = 3, i = 0, j = 1
<b>Output:</b> 12
<b>Explanation:</b>
<img src="https://assets.leetcode.com/uploads/2018/10/12/out_of_boundary_paths_2.png" style="width: 100%; max-width: 400px">
</pre>

<p>&nbsp;</p>

<p><b>Note:</b></p>

<ol>
	<li>Once you move the ball out of boundary, you cannot move it back.</li>
	<li>The length and height of the grid is in range [1,50].</li>
	<li>N is in range [0,50].</li>
</ol>
</div>

---




```cpp
class Solution {
public:
    long long int mod=1000000007;
    int t[51][51][52];
    
    int solve(int m, int n, int N, int i, int j){
        if(i<0 || j<0 || i>=m || j>=n)
            return 1;
        if(N<=0)
            return 0;
        if(t[i][j][N]!=-1)
            return t[i][j][N];
        int l=solve(m,n,N-1,i,j-1);
        int r=solve(m,n,N-1,i,j+1);
        int u=solve(m,n,N-1,i-1,j);
        int d=solve(m,n,N-1,i+1,j);
        
        return t[i][j][N]=((l+r)%mod+(u+d)%mod)%mod;
        
    }
    
    
    int findPaths(int m, int n, int N, int i, int j) {
        memset(t,-1,sizeof(t));
        return solve(m,n,N,i,j);
        
    }
};

```
