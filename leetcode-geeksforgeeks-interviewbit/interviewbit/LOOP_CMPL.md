---
title: Loop_Cmpl
summary: Loop_Cmpl - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: ["interviewbit", "interviewbit solution in Python3 C++ Java", "Loop_Cmpl Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Loop_Cmpl - Solution Explained/problem-solving.webp
    alt: Loop_Cmpl
    hiddenInList: true
    hiddenInSingle: false
---

# LOOP_CMPL

* https://www.interviewbit.com/problems/loopcmpl

What is the time, space complexity of following code:

```
int a = 0, b = 0;
for (i = 0; i < N; i++) {
    a = a + rand();
}
for (j = 0; j < M; j++) {
    b = b + rand();
}
```

Assume that rand() is O(1) time, O(1) space function.

## Solution

```
O(N + M) time, O(1) space
```
