---
title: Largest Coprime Divisor
summary: Largest Coprime Divisor - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: ["interviewbit", "interviewbit solution in Python3 C++ Java", "Largest Coprime Divisor Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Largest Coprime Divisor - Solution Explained/problem-solving.webp
    alt: Largest Coprime Divisor
    hiddenInList: true
    hiddenInSingle: false
---

# Largest Coprime Divisor

https://www.interviewbit.com/problems/largest-coprime-divisor


## Solution

```cpp
int gcd(int A, int B) {
    if(A<B) swap(A,B);
    while(B) {
        int tmp = B;
        B = A%B;
        A = tmp;
    }
    return A;
}

int Solution::cpFact(int x, int y) {
    // first we will remove the common factors of x and y
    // from x by finding the greatest common divisor (gcd)
    // of x and y and dividing x with that gcd.
    // x = x / gcd(x, y)
    // we repeat till we get gcd(x, y) = 1.
    // At last, we return a = x
    while (gcd(x, y) != 1) {
        x = x / gcd(x, y);
    } 
    return x;
}
```