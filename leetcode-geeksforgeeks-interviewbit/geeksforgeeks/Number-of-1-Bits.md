---
title: Number Of 1 Bits
summary: Number Of 1 Bits - GeeksforGeeks Solution Explained
date: 2020-06-20
tags: [geeksforgeeks]
series: [GeeksforGeeks]
aliases: ["/posts/Number-of-1-Bits", "/blog/posts/Number-of-1-Bits", "/Number-of-1-Bits", "/blog/Number-of-1-Bits",]
keywords: GeeksforGeeks, GeeksforGeeks solution in Python3 C++ Java, Number Of 1 Bits solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Number Of 1 Bits - Solution Explained/problem-solving.webp
    alt: Number Of 1 Bits
    hiddenInList: true
    hiddenInSingle: false
---


# Number of 1 Bits
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a positive integer N, print count of set bits in it.&nbsp;</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 6</span>
<span style="font-size:18px"><strong>Output:</strong>
2</span>
<span style="font-size:18px"><strong>Explanation:</strong>
Binary representation is '110' 
So the count of the set bit is 2.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
8</span>
<span style="font-size:18px"><strong>Output:</strong>
1</span>
<span style="font-size:18px"><strong>Explanation:</strong>
Binary representation is '1000' 
So the count of the set bit is 1.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong>&nbsp;&nbsp;<br>
You don't need to read input or print anything. Your task is to complete the function <strong>setBits</strong>()&nbsp;which takes an Integer N&nbsp;and returns the count of number of set bits.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(LogN)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>9</sup></span></p>
 <p></p>
            </div>

---




```cpp
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int cnt =  __builtin_popcount(N);
        return cnt;
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
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}
  // } Driver Code Ends
```
