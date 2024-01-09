---
title: Max Sum Contiguous Subarray
summary: Max Sum Contiguous Subarray - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: ["interviewbit", "interviewbit solution in Python3 C++ Java", "Max Sum Contiguous Subarray Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Max Sum Contiguous Subarray - Solution Explained/problem-solving.webp
    alt: Max Sum Contiguous Subarray
    hiddenInList: true
    hiddenInSingle: false
---

# Max Sum Contiguous Subarray

https://www.interviewbit.com/problems/max-sum-contiguous-subarray/

Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

For example:

Given the array [-2,1,-3,4,-1,2,1,-5,4],

the contiguous subarray [4,-1,2,1] has the largest sum = 6.

For this problem, return the maximum sum.

## Solution

```cpp

// Find the contiguous subarray within an array (containing at least one number) which has the largest sum.
// solution: Kadane's Algorithm
int Solution::maxSubArray(const vector<int> &A) {
    int maxSum = A[0], currentSum = A[0], n = A.size();
    for (int i=1; i<n; i++) {
        currentSum = max(A[i], currentSum+A[i]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}
```

## Asked in

* Facebook
* Paypal
* Yahoo
* Microsoft
* LinkedIn
* Amazon
* Goldman Sachs

