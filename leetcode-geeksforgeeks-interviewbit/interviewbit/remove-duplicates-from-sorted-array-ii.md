---
title: Remove Duplicates From Sorted Array Ii
summary: Remove Duplicates From Sorted Array Ii - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: ["interviewbit", "interviewbit solution in Python3 C++ Java", "Remove Duplicates From Sorted Array Ii Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Remove Duplicates From Sorted Array Ii - Solution Explained/problem-solving.webp
    alt: Remove Duplicates From Sorted Array Ii
    hiddenInList: true
    hiddenInSingle: false
---

# Remove Duplicates From Sorted Array II

https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array-ii


## Solution

```cpp

int Solution::removeDuplicates(vector<int> &A) {
    int count = 0;
    int size = A.size();
    for (auto i = 0; i < size; ++i) {
        if (i < size - 2 && A[i] == A[i + 1] && A[i] == A[i + 2])
            continue;
        else
            A[count++] = A[i];
    }
    return count;
}

int Solution::removeDuplicates(vector<int> &A) {
    int i = 0, j = A.size() - 1, k = 0;
    while (i <= j) {
        A[k] = A[i++];
        while (i + 1 <= j && A[i] == A[k] && A[i + 1] == A[k])
            i++;
        k++;
    }
    return k;
}
```