---
title: Subset
summary: Subset - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Subset solution]
aliases: ["/posts/subset", "/blog/posts/subset", "/subset"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Subset - Solution Explained/problem-solving.webp
    alt: Subset
    hiddenInList: true
    hiddenInSingle: false
---

# Subset

https://www.interviewbit.com/problems/subset


## Solution

```cpp
void helper(vector<vector<int>> &res, vector<int> &A, vector<int> &subset, int index) {
    res.push_back(subset);
    for (int i = index; i < A.size(); i++) {
        subset.push_back(A[i]);
        helper(res, A, subset, i+1);
        subset.pop_back();
    }
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    sort(A.begin(), A.end());
    vector<vector<int>> res;
    vector<int> subset;
    helper(res, A, subset, 0);
    return res;
}

```