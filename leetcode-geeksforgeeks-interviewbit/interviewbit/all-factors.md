---
title: All Factors
summary: All Factors - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, All Factors solution]
aliases: ["/posts/all-factors", "/blog/posts/all-factors", "/all-factors"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:All Factors - Solution Explained/problem-solving.webp
    alt: All Factors
    hiddenInList: true
    hiddenInSingle: false
---

# All Factors

https://www.interviewbit.com/problems/all-factors


## Solution

```cpp
vector<int> Solution::allFactors(int A) {
    vector<int> factors;
    int sqrtA = int(sqrt(A));
    for (int i=1; i<=sqrtA; i++) {
        if (A % i==0) {
            factors.push_back(i);
            if (i!=sqrtA) {
                factors.push_back(A/i);
            }
        }
    }
    sort(factors.begin(), factors.end());
    return factors;
}
```