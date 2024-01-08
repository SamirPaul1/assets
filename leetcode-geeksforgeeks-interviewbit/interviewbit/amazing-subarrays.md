---
title: Amazing Subarrays
summary: Amazing Subarrays - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Amazing Subarrays solution]
aliases: ["/posts/amazing-subarrays", "/blog/posts/amazing-subarrays", "/amazing-subarrays"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Amazing Subarrays - Solution Explained/problem-solving.webp
    alt: Amazing Subarrays
    hiddenInList: true
    hiddenInSingle: false
---

# Amazing Subarrays

https://www.interviewbit.com/problems/amazing-subarrays



You are given a string S, and you have to find all the amazing substrings of S.

Amazing Substring is one that starts with a vowel (a, e, i, o, u, A, E, I, O, U).

## Solution

```cpp

bool isVowel(char c) {
    //return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
    return string("aeiouAEIOU").find(c)!=string::npos;
}

int Solution::solve(string A) {
    int sum = 0, n=A.size();
    for (int i = 0; i<n; i++) {
        if (isVowel(A[i]))
            sum += n-i;
    }
    return sum % 10003;
}
```