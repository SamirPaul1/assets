---
title: Amortized2
summary: Amortized2 - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: ["interviewbit", "interviewbit solution in Python3 C++ Java", "Amortized2 Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Amortized2 - Solution Explained/problem-solving.webp
    alt: Amortized2
    hiddenInList: true
    hiddenInSingle: false
---

# AMORTIZED2

https://www.interviewbit.com/problems/amortized2/

What is the time complexity of the following code :

```
int j = 0;
for(i = 0; i < n; ++i) {
    while(j < n && arr[i] < arr[j]) {
        j++;
    }
}
```

## Solution
```
O(n)
```
