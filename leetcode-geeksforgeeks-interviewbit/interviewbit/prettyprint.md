---
title: Prettyprint
summary: Prettyprint - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Prettyprint solution]
aliases: ["/posts/prettyprint", "/blog/posts/prettyprint", "/prettyprint"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Prettyprint - Solution Explained/problem-solving.webp
    alt: Prettyprint
    hiddenInList: true
    hiddenInSingle: false
---

# PRETTYPRINT

https://www.interviewbit.com/problems/prettyprint/

Print concentric rectangular pattern in a 2d matrix. 
Let us show you some examples to clarify what we mean.

Example 1:

Input: A = 4.
Output:
```
4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4 
4 3 3 3 3 3 4 
4 4 4 4 4 4 4 
```
Example 2:

Input: A = 3.
Output:
```
3 3 3 3 3 
3 2 2 2 3 
3 2 1 2 3 
3 2 2 2 3 
3 3 3 3 3 
```
The outermost rectangle is formed by A, then the next outermost is formed by A-1 and so on.

You will be given A as an argument to the function you need to implement, and you need to return a 2D array.

## Solution

```cpp
// Print concentric rectangular pattern in a 2d matrix

vector<vector<int> > Solution::prettyPrint(int A) {
    int n = A*2 - 1;
    vector<vector<int>> v(n, vector<int>(n));
    for (int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            int dx = abs(i-n/2);
            int dy = abs(j-n/2);
            v[i][j] = dx>dy ? dx+1 : dy+1;
        }
    }
    return v;
}
```
