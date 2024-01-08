---
title: Matrix Search
summary: Matrix Search - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Matrix Search solution]
aliases: ["/posts/matrix-search", "/blog/posts/matrix-search", "/matrix-search"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Matrix Search - Solution Explained/problem-solving.webp
    alt: Matrix Search
    hiddenInList: true
    hiddenInSingle: false
---

# Matrix Search

https://www.interviewbit.com/problems/matrix-search


Write an efficient algorithm that searches for a value in an m x n matrix.

This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than or equal to the last integer of the previous row.
## Solution

```cpp

int Solution::searchMatrix(vector<vector<int> > &matrix, int target) {
    int n = matrix.size();
    int m = matrix[0].size();
    int l = 0, r = m * n - 1;
    while (l != r){
        int mid = (l + r - 1) >> 1;
        if (matrix[mid / m][mid % m] < target)
            l = mid + 1;
        else 
            r = mid;
    }
    return matrix[r / m][r % m] == target;
}


int Solution::searchMatrix(vector<vector<int> > &A, int x) {
    int r=A.size(),c=A[0].size();
    int row=-1;
    for(int i=0;i<r;i++){
        if(x>=A[i][0]&&x<=A[i][c-1]){
            row=i;
            break;
        }
    }
    if(row==-1) return 0;
    int low=0,high=c-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(A[row][mid]==x) return 1;
        if(A[row][mid]<x) low=mid+1;
        else high=mid-1;
    }
    return 0;
}

```