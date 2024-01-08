---
title: Cows
summary: Cows - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Cows solution]
aliases: ["/posts/cows", "/blog/posts/cows", "/cows"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Cows - Solution Explained/problem-solving.webp
    alt: Cows
    hiddenInList: true
    hiddenInSingle: false
---

# Cows

https://www.interviewbit.com/problems/cows


## Solution

```cpp
int func (int num, vector<int> &A, int c) {
    int cows = 1, pos = array[0], n = A.size();
    for (int i = 1; i < n; i++) {
        if (A[i]-pos >= num) {
            pos = A[i];
            cows++;
            if (cows == c)
                return 1;
        }
    }
    return 0;
}

int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int ini = 0, last = A[n - 1], max = -1;
    while (last > ini) {
        int mid = (ini + last) / 2;
        if (func (mid, A, B) == 1) {
            if (mid > max)
                max = mid;
            ini = mid + 1;
        }
        else
            last = mid;
    }
    return max;
}
```