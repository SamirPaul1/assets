---
title: Single Number
summary: Single Number - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: ["interviewbit", "interviewbit solution in Python3 C++ Java", "Single Number Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Single Number - Solution Explained/problem-solving.webp
    alt: Single Number
    hiddenInList: true
    hiddenInSingle: false
---

# Single Number

https://www.interviewbit.com/problems/single-number


	Given an array of integers, every element appears twice except for one. Find that single one.
## Solution

```cpp

/* editorial */
int Solution::singleNumber(const vector<int> &A) {
    int ret = 0;
    for(int i = 0; i < A.size(); i++)
        ret ^= A[i];
    return ret;
}


/* my solution */

int Solution::singleNumber(const vector<int> &A) {
    int ret = 0;
    for(int i = 0; i < A.size(); ret ^= A[i++]);
    return ret;
}

int Solution::singleNumber(const vector<int> &A) {
    int sum = A[0];
    for (int i=1; i<A.size(); i++) {
        sum ^= A[i];
    }
    return sum;
}
```