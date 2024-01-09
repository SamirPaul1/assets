---
title: Prime Sum
summary: Prime Sum - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: ["interviewbit", "interviewbit solution in Python3 C++ Java", "Prime Sum Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Prime Sum - Solution Explained/problem-solving.webp
    alt: Prime Sum
    hiddenInList: true
    hiddenInSingle: false
---

# Prime Sum

https://www.interviewbit.com/problems/prime-sum

// Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.
// Solution: find all primes and check in a loop i to n if i and n-i are primes
vector<int> Solution::primesum(int n) {
    
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;

    for (int p=2; p*p<=n; p++)
        if (isPrime[p])
            for (int i=p*p; i<=n; i+=p) 
                isPrime[i] = false;
    
    vector<int> B;
    
    for (int i=0; i<n; i++) { 
        if (isPrime[i] && isPrime[n-i]) { 
            B.push_back(i);
            B.push_back(n-i);
            return B; 
        } 
    }
    return B;
}

```