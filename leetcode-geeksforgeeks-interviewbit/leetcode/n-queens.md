---
title: N Queens
summary: N Queens LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/n-queens", "/blog/posts/n-queens", "/n-queens"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, n-queens solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:N Queens/problem-solving.webp
    alt: N Queens
    hiddenInList: true
    hiddenInSingle: false
---


<h2>51. N-Queens</h2><h3>Hard</h3><hr><div><p>The <strong>n-queens</strong> puzzle is the problem of placing <code>n</code> queens on an <code>n x n</code> chessboard such that no two queens attack each other.</p>

<p>Given an integer <code>n</code>, return <em>all distinct solutions to the <strong>n-queens puzzle</strong></em>.</p>

<p>Each solution contains a distinct board configuration of the n-queens' placement, where <code>'Q'</code> and <code>'.'</code> both indicate a queen and an empty space, respectively.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/13/queens.jpg" style="width: 600px; height: 268px;">
<pre><strong>Input:</strong> n = 4
<strong>Output:</strong> [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
<strong>Explanation:</strong> There exist two distinct solutions to the 4-queens puzzle as shown above
</pre>

<p><strong>Example 2:</strong></p>

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




```cpp
class Solution {
public:
    vector<vector<string>> ans;
    bool isValid(vector<string> &s, int r, int c){
        for(int i=r;i>=0;i--)
            if(s[i][c]=='Q')
                return false;
        for(int i=r,j=c;i>=0 && j>=0;i--,j--)
            if(s[i][j]=='Q')
                return false;
        for(int i=r,j=c;i>=0 && j<s.size();i--,j++)
            if(s[i][j]=='Q')
                return false;
        return true;
    }
    void backtrack(vector<string> &s, int r){
        if(r==s.size()){
            ans.push_back(s);
            return;
        }
        for(int i=0;i<s.size();i++){
            if(isValid(s,r,i)){
                s[r][i]='Q';
                backtrack(s,r+1);
                s[r][i]='.';
            }
        }
            
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<string> s(n, string(n,'.'));
        backtrack(s,0);
        return ans;
    }
};

```
