---
title: Excel Column Number
summary: Excel Column Number - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: ["interviewbit", "interviewbit solution in Python3 C++ Java", "Excel Column Number Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Excel Column Number - Solution Explained/problem-solving.webp
    alt: Excel Column Number
    hiddenInList: true
    hiddenInSingle: false
---

# Excel Column Number

https://www.interviewbit.com/problems/excel-column-number


## Solution

```cpp
int Solution::titleToNumber(string A) {

    int x = 0, p = 1;
    for (int i=A.length()-1; i>=0; i--) {
        x += int(A[i]-'A'+1) * p;
        p *= 26;
    }

    return x;
}

```