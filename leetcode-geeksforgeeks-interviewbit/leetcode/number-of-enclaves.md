---
title: Number Of Enclaves
summary: Number Of Enclaves LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/number-of-enclaves", "/blog/posts/number-of-enclaves", "/number-of-enclaves"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, number-of-enclaves solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Number Of Enclaves/problem-solving.webp
    alt: Number Of Enclaves
    hiddenInList: true
    hiddenInSingle: false
---




---




```cpp
class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& A){
        if(i<0 || j<0 || i>=A.size() || j>=A[0].size() || A[i][j]==0)
            return;
        A[i][j]=0;
        dfs(i+1, j, A);
        dfs(i-1, j, A);
        dfs(i, j+1, A);
        dfs(i, j-1, A);
        
    }
    int numEnclaves(vector<vector<int>>& A) {
        int n=A.size();
        int m=A[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
              if((i==0 || j==0 || i==n-1 || j==m-1) && A[i][j]==1)
                dfs(i, j, A);
           }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<A[i].size();j++){
                if(A[i][j]==1){
                    ans++;
                }
            }
        }
        return ans;
    }
};
```
