---
title: Kth Smallest Element In The Array
summary: Kth Smallest Element In The Array - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Kth Smallest Element In The Array solution]
aliases: ["/posts/kth-smallest-element-in-the-array", "/blog/posts/kth-smallest-element-in-the-array", "/kth-smallest-element-in-the-array"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Kth Smallest Element In The Array - Solution Explained/problem-solving.webp
    alt: Kth Smallest Element In The Array
    hiddenInList: true
    hiddenInSingle: false
---

# Kth Smallest Element in the Array

https://www.interviewbit.com/problems/kth-smallest-element-in-the-array/

Find the kth smallest element in an unsorted array of non-negative integers.

### Definition of kth smallest element

kth smallest element is the minimum possible n such that there are at least k elements in the array <= n.

In other words, if the array A was sorted, then A[k - 1] ( k is 1 based, while the arrays are 0 based ) 


### Note

You are not allowed to modify the array ( The array is read only ). 

Try to do it using constant extra space.

Example:
```
A : [2 1 4 3 2]
k : 3
answer : 2
```

## Solution

```cpp
int Solution::kthsmallest(const vector<int> &A, int k) {
    int n = A.size();
    if (k>n || n==0)
        return -1;

    int lo = A[0], hi = A[0];
    for (int i=1; i<n; i++) {
        lo = min(lo, A[i]);
        hi = max(hi, A[i]);
    }

    while (lo <= hi) {
        int mid = lo + (hi - lo)/2;
        int countLess = 0, countEqual = 0;

        for (int i = 0; i<n; i++) {
            if (A[i]<mid)
                ++countLess;
            else if (A[i] == mid)
                ++countEqual;
            if (countLess >= k)
                break;
        }

        if (countLess < k && countLess + countEqual >= k)
            return mid;
        else if (countLess >= k)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    return -1;
}
```
