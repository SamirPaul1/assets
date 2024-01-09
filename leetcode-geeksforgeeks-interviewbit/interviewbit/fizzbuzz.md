---
title: Fizzbuzz
summary: Fizzbuzz - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: ["interviewbit", "interviewbit solution in Python3 C++ Java", "Fizzbuzz Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Fizzbuzz - Solution Explained/problem-solving.webp
    alt: Fizzbuzz
    hiddenInList: true
    hiddenInSingle: false
---

# Fizzbuzz

https://www.interviewbit.com/problems/fizzbuzz


## Solution

```cpp
vector<string> Solution::fizzBuzz(int A) {
    vector<string> B;
    for (int i=1; i<=A; i++) {
        if (i%3==0 && i%5==0)
            B.push_back("FizzBuzz");
        else if (i%3==0)
            B.push_back("Fizz");
        else if (i%5==0)
            B.push_back("Buzz");
        else
            B.push_back(to_string(i));
    }
    return B;
}

/*
vector<string> Solution::fizzBuzz(int A) {
    vector<string> B;
    for (int i=1; i<=A; i++)
        B.push_back(i%3==0 && i%5==0
            ? "FizzBuzz" : i%3==0
            ? "Fizz" : i%5==0
            ? "Buzz" : to_string(i));
    return B;
}
*/

/*
vector<string> Solution::fizzBuzz(int A) {
    vector<string> B;
    for (int i=1; i<=A; i++) {
        string s;
        if (i%3==0) s+="Fizz";
        if (i%5==0) s+="Buzz";
        B.push_back(s.length() ? s : to_string(i));
    }
    return B;
}

*/
```