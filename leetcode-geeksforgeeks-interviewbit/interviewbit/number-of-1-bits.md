---
title: Number Of 1 Bits
summary: Number Of 1 Bits - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Number Of 1 Bits solution]
aliases: ["/posts/number-of-1-bits", "/blog/posts/number-of-1-bits", "/number-of-1-bits"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Number Of 1 Bits - Solution Explained/problem-solving.webp
    alt: Number Of 1 Bits
    hiddenInList: true
    hiddenInSingle: false
---

# Number Of 1 Bits

https://www.interviewbit.com/problems/number-of-1-bits


## Solution

```cpp
int Solution::numSetBits(unsigned int A) {
    // use kernigan
    int i;
    for (i = 0; A; i++) {
        A &= A - 1;
    }
    return i;
}

```