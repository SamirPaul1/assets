---
title: Reverse Integer
summary: Reverse Integer - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Reverse Integer solution]
aliases: ["/posts/reverse-integer", "/blog/posts/reverse-integer", "/reverse-integer"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Reverse Integer - Solution Explained/problem-solving.webp
    alt: Reverse Integer
    hiddenInList: true
    hiddenInSingle: false
---

# Reverse Integer

https://www.interviewbit.com/problems/reverse-integer


Reverse digits of an integer.
Example1: x = 123, return 321
## Solution

```cpp

int Solution::reverse(int A) {
    long r=0;
    while (A) {
        r = r * 10 + A % 10;
        if (r>INT_MAX || r<INT_MIN)
            return 0;
        A /= 10;
    }
    return r;
}

/*

int Solution::reverse(int A) {
    long r=0;
    while(A) {
        r *= 10;
        r += A % 10;
        A /= 10;
        if (r>INT_MAX || r<INT_MIN)
            return 0;
    }
    return r;
}
*/

/*

int Solution::reverse(int A) {
    int sign = A<0 ? -1 : 1;
    long x = A<0 ? -A : A;
    string s = to_string(x);
    std::reverse(s.begin(), s.end());
    long res = stol(s);
    if (res>=INT_MAX)
        return 0;
    return res * sign;
}
*/

/* // this one doesn't work
int Solution::reverse(int A) {
    char digits[16];
    long long x = A<0 ? -A : A;
    int sign = A<0 ? -1 : 1;
    int n = 0;
    do {
        digits[n++] = x % 10;
        x /= 10;    
    } while(x);
    
    long long res = 0;
    for (int p=1, i=n-1; i>=0; i--) {
        long long x = digits[i] * p;
        if (res + x >= INT_MAX)
            return 0;
        res += x;
        p *= 10;
    }
    return res * sign;
}
*/
```