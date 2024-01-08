---
title: Intersection Of Sorted Arrays
summary: Intersection Of Sorted Arrays - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Intersection Of Sorted Arrays solution]
aliases: ["/posts/intersection-of-sorted-arrays", "/blog/posts/intersection-of-sorted-arrays", "/intersection-of-sorted-arrays"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Intersection Of Sorted Arrays - Solution Explained/problem-solving.webp
    alt: Intersection Of Sorted Arrays
    hiddenInList: true
    hiddenInSingle: false
---

# Intersection Of Sorted Arrays

https://www.interviewbit.com/problems/intersection-of-sorted-arrays


	Intersection Of Sorted Arrays
	Find the intersection of two sorted arrays.
	OR in other words,
	Given 2 sorted arrays, find all the elements which occur in both the arrays.
## Solution

```cpp
vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    vector<int> res;
    int i=0,j=0,n=A.size(),m=B.size();
    while (i<n && j<m) {
        if (A[i]>B[j]) {
            j++;
        } else if (A[i]<B[j]) {
            i++;
        } else {
            res.push_back(A[i]);
            i++;
            j++;
        }
    }
    return res;
}
```