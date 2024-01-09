---
title: Remove Element From Array
summary: Remove Element From Array - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: ["interviewbit", "interviewbit solution in Python3 C++ Java", "Remove Element From Array Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Remove Element From Array - Solution Explained/problem-solving.webp
    alt: Remove Element From Array
    hiddenInList: true
    hiddenInSingle: false
---

# Remove Element From Array

https://www.interviewbit.com/problems/remove-element-from-array



## Hint 1
You need to modify the original array itself. 
So you need to keep current like pointer which will point to the index of the array where you can store the next value.

Solution approach

Maybe you should try maintaining 2 pointers in the array:

One pointer iterates over the array
Other pointer only moves when it finds an element different from 'elem'.
In other words, the second pointer only moves when the first pointer is on an element worth keeping in the final array.

## Solution

```cpp

// editorial

int Solution::removeElement(vector<int> &A, int elem) {
    int count = 0, n = A.size();
    for (int i = 0; i < n; i++) {
        if (A[i] == elem)
            continue;
        else {
            A[count] = A[i];
            count++;
        }
    }
    return count;
}

/////////////////

// OOM

int Solution::removeElement(vector<int> &A, int B) {
    auto n = A.size();
    auto count = 0;
    for (auto i = 0; i < n; ++i) {
        if (A[i] == B)
            continue;
        else
            A[count++] = A[i];
    }
    return count;
}

///

int Solution::removeElement(vector<int> &A, int B) {

    int i = 0;
    int length = A.size();

    while (i < A.size()) {
        if (A[i] == B) {
            break;
        }
        i++;
    }

    if (i == length) {
        return length;
    }

    int j = i + 1;

    while (j < length) {
        if (A[j] != B) {
            A[i] = A[j];
            i++;
        }
        j++;
    }

    while (i < length) {
        A.pop_back();
        i++;
    }

    return A.size();
}
```