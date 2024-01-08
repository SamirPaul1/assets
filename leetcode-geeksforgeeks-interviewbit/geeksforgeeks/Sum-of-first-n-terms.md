---
title: Sum Of First N Terms
summary: Sum Of First N Terms - GeeksforGeeks Solution Explained
date: 2020-06-20
tags: [geeksforgeeks]
series: [GeeksforGeeks]
aliases: ["/posts/Sum-of-first-n-terms", "/blog/posts/Sum-of-first-n-terms", "/Sum-of-first-n-terms", "/blog/Sum-of-first-n-terms",]
keywords: GeeksforGeeks, GeeksforGeeks solution in Python3 C++ Java, Sum Of First N Terms solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Sum Of First N Terms - Solution Explained/problem-solving.webp
    alt: Sum Of First N Terms
    hiddenInList: true
    hiddenInSingle: false
---


# Sum of first n terms
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given and integer N.Calculate&nbsp;the sum of series 1<sup>3</sup> + 2<sup>3</sup> + 3<sup>3</sup> + 4<sup>3</sup> + …&nbsp;till N-th term.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=5
<strong>Output:</strong>
225
<strong>Explanation:</strong>
1<sup>3</sup>+2<sup>3</sup>+3<sup>3</sup>+4<sup>3</sup>+5<sup>3</sup>=225</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=7
<strong>Output:</strong>
784
<strong>Explanation:</strong>
1<sup>3</sup>+2<sup>3</sup>+3<sup>3</sup>+4<sup>3</sup>+5<sup>3</sup>+6<sup>3</sup>+7<sup>3</sup>=784</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything.Your task is to complete the function <strong>sumOfSeries()</strong> which takes the integer N as parameter and returns the sum of the cubes of the first N natural numbers.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>O(1)<br>
<strong>Expected Auxillary Space:</strong>O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=N&lt;=50000</span></p>
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
    long long sumOfSeries(long long N) {
        // code here
        long long sum = N * (N + 1)/2;
        return sum * sum;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}  // } Driver Code Ends
```
