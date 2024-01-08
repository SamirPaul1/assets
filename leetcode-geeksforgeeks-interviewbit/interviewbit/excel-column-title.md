---
title: Excel Column Title
summary: Excel Column Title - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Excel Column Title solution]
aliases: ["/posts/excel-column-title", "/blog/posts/excel-column-title", "/excel-column-title"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Excel Column Title - Solution Explained/problem-solving.webp
    alt: Excel Column Title
    hiddenInList: true
    hiddenInSingle: false
---

# Excel Column Title

https://www.interviewbit.com/problems/excel-column-title


## Solution

```cpp

string Solution::convertToTitle(int A) {
    string res;
    do {
        A--;
        res = char('A' + A % 26) + res;
        A /= 26;
    } while (A);
    return res;
}

/*

string Solution::convertToTitle(int A) {
    string res;
    do {
        A--;
        res += A % 26 + 'A';
        A /= 26;
    } while (A);
    reverse(res.begin(), res.end());
    return res;
}
*/
```