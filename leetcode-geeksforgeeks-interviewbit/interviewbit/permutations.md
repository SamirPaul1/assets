---
title: Permutations
summary: Permutations - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Permutations solution]
aliases: ["/posts/permutations", "/blog/posts/permutations", "/permutations"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Permutations - Solution Explained/problem-solving.webp
    alt: Permutations
    hiddenInList: true
    hiddenInSingle: false
---

# Permutations

https://www.interviewbit.com/problems/permutations


## Solution

```cpp
void helper(vector<vector<int>> &res, vector<int> &set, int pos) {
    if (pos == set.size()) {
        res.push_back(set);
        return;
    }
    for (int i = pos; i < set.size(); i++) {
        swap(set[i], set[pos]);
        helper(res, set, pos + 1);
        swap(set[i], set[pos]);
    }
}

vector<vector<int>> Solution::permute(vector<int> &A) {
    vector<vector<int>> res;
    helper(res, A, 0);
    return res;
}
```