---
title: Remove Duplicates From Sorted Array
summary: Remove Duplicates From Sorted Array - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: ["interviewbit", "interviewbit solution in Python3 C++ Java", "Remove Duplicates From Sorted Array Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Remove Duplicates From Sorted Array - Solution Explained/problem-solving.webp
    alt: Remove Duplicates From Sorted Array
    hiddenInList: true
    hiddenInSingle: false
---

# Remove Duplicates

https://www.interviewbit.com/problems/remove-duplicates


## Solution

```cpp
int Solution::removeDuplicates(vector<int> &A) {
    // [1,1,2]
    //  i   j
    // [1,2,2]
    //    i j
    
    if (A.size()<2)
        return A.size();
    int i=0;
    for (int j=1; j<A.size(); j++) {
        if (A[i]!=A[j]) {
            i++;
            A[i] = A[j];
        }
    }
    return i+1;
}

```