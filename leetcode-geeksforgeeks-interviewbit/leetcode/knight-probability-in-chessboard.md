---
title: Knight Probability In Chessboard
summary: Knight Probability In Chessboard LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "knight-probability-in-chessboard LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Knight Probability In Chessboard - Solution Explained/problem-solving.webp
    alt: Knight Probability In Chessboard
    hiddenInList: true
    hiddenInSingle: false
---


[Discussion Post (created on 7/6/2021 at 21:9)](https://leetcode.com/problems/knight-probability-in-chessboard/discuss/1322868/C%2B%2B-or-Memoization-or-Beats-99)  
<h2>688. Knight Probability in Chessboard</h2><h3>Medium</h3><hr><div><p>On an <code>N</code>x<code>N</code> chessboard, a knight starts at the <code>r</code>-th row and <code>c</code>-th column and attempts to make exactly <code>K</code> moves. The rows and columns are 0 indexed, so the top-left square is <code>(0, 0)</code>, and the bottom-right square is <code>(N-1, N-1)</code>.</p>

<p>A chess knight has 8 possible moves it can make, as illustrated below. Each move is two squares in a cardinal direction, then one square in an orthogonal direction.</p>

<p>&nbsp;</p>

<p><img src="https://assets.leetcode.com/uploads/2018/10/12/knight.png" style="width: 200px; height: 200px;"></p>

<p>&nbsp;</p>

<p>Each time the knight is to move, it chooses one of eight possible moves uniformly at random (even if the piece would go off the chessboard) and moves there.</p>

<p>The knight continues moving until it has made exactly <code>K</code> moves or has moved off the chessboard. Return the probability that the knight remains on the board after it has stopped moving.</p>

<p>&nbsp;</p>

<p><b>Example:</b></p>

<pre><b>Input:</b> 3, 2, 0, 0
<b>Output:</b> 0.0625
<b>Explanation:</b> There are two moves (to (1,2), (2,1)) that will keep the knight on the board.
From each of those positions, there are also two moves that will keep the knight on the board.
The total probability the knight stays on the board is 0.0625.
</pre>

<p>&nbsp;</p>

<p><b>Note:</b></p>

<ul>
	<li><code>N</code> will be between 1 and 25.</li>
	<li><code>K</code> will be between 0 and 100.</li>
	<li>The knight always initially starts on the board.</li>
</ul>
</div>

---




```cpp
class Solution {
public:
   
    
    int dx[8]={-1,1,-1,1,2,-2,2,-2};
    int dy[8]={2,2,-2,-2,1,1,-1,-1};
    
    
    bool isValid(int i, int j, int n){
    if(i>n-1 || j>n-1 || i<0 || j<0 ){
       
        return false;
    }
    

    return true;
}
    
  
    
    
    double knightProbability(int N, int K, int r, int c) {
      
         vector<vector<vector<double>>> dp;
        for(int i=0; i<=K; i++)
            dp.push_back(vector<vector<double>>(N, vector<double>(N)));
        
        dp[0][r][c]=1.0;
        
        for(int i=1;i<=K;i++){
            for(int j=0;j<N;j++){
                for(int k=0;k<N;k++){
                    for(int l=0;l<8;l++){
                        int rr=j+dx[l];
                        int cc=k+dy[l];
                        if(isValid(rr,cc,N)){
                            dp[i][rr][cc]+=(dp[i-1][j][k])/8.0;
                        }
                    }
                }
            }
        }
        
        double ans=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                ans+=dp[K][i][j];
            }
        }
        return ans;
    }
};
```
