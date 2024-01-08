---
title: Greatest Common Divisor
summary: Greatest Common Divisor - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Greatest Common Divisor solution]
aliases: ["/posts/greatest-common-divisor", "/blog/posts/greatest-common-divisor", "/greatest-common-divisor"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Greatest Common Divisor - Solution Explained/problem-solving.webp
    alt: Greatest Common Divisor
    hiddenInList: true
    hiddenInSingle: false
---

# Greatest Common Divisor

https://www.interviewbit.com/problems/greatest-common-divisor


## Solution

```cpp
int Solution::gcd(int A, int B) {
    if (B==0)
        return A;
    return gcd(B, A % B);
}

/*
int Solution::gcd(int A, int B) {
    if(A<B) swap(A,B);

    while(B) {
        int tmp = B;
        B = A%B;
        A = tmp;
    }

    return A;
}
*/
```