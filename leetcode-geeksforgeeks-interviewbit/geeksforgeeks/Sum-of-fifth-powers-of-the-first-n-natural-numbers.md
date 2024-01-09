---
title: Sum Of Fifth Powers Of The First N Natural Numbers
summary: Sum Of Fifth Powers Of The First N Natural Numbers - GeeksforGeeks Solution Explained
date: 2020-06-20
tags: [geeksforgeeks]
series: [GeeksforGeeks]
keywords: ["GeeksforGeeks", "GeeksforGeeks solution in Python3 C++ Java", "Sum Of Fifth Powers Of The First N Natural Numbers Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Sum Of Fifth Powers Of The First N Natural Numbers - Solution Explained/problem-solving.webp
    alt: Sum Of Fifth Powers Of The First N Natural Numbers
    hiddenInList: true
    hiddenInSingle: false
---


# Sum of fifth powers of the first n natural numbers
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a number N.Find the sum of fifth powers of natural numbers till N i.e. 1<sup>5</sup>+2<sup>5</sup>+3<sup>5</sup>+..+N<sup>5</sup>.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=2
<strong>Output:</strong>
33
<strong>Explanation:</strong>
The sum is calculated as 1<sup>5</sup>+2<sup>5</sup>=1+32=33.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=3
<strong>Output:</strong>
276
<strong>Explanation:</strong>
The sum is calculated as 1<sup>5</sup>+2<sup>5</sup>+3<sup>5</sup>
=1+32+243=276.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything.Your task is to complete the function <strong>sumOfFifthPowers()</strong> which takes an integer N as input parameter and returns the sum of the fifth powers of Natural numbers till N.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>O(1)<br>
<strong>Expected Auxillary Space:</strong>O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=N&lt;=1000</span></p>
 <p></p>
            </div>

---




```cpp
// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    long long sumOfFifthPowers(long long N) {
        // code here
        long long i, sum = 0;
        for(i = 1; i <= N; i++) {
            sum = sum + i * i * i * i * i;
        }
        return sum;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfFifthPowers(N) << "\n";
    }
}  // } Driver Code Ends
```
