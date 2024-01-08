---
title: Min Xor Value
summary: Min Xor Value - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Min Xor Value solution]
aliases: ["/posts/min-xor-value", "/blog/posts/min-xor-value", "/min-xor-value"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Min Xor Value - Solution Explained/problem-solving.webp
    alt: Min Xor Value
    hiddenInList: true
    hiddenInSingle: false
---

# Min Xor Value

https://www.interviewbit.com/problems/min-xor-value


## Solution

```cpp
int Solution::findMinXor(vector<int> &arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end()); 
    int minXor = INT_MAX; 
    int val = 0; 
    // calculate min xor of consecutive pairs 
    for (int i = 0; i < n - 1; i++)
        minXor = min(minXor, arr[i] ^ arr[i + 1]); 
        
    return minXor;
}
```