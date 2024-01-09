---
title: Find Minimum And Maximum Element In An Array
summary: Find Minimum And Maximum Element In An Array - GeeksforGeeks Solution Explained
date: 2020-06-20
tags: [geeksforgeeks]
series: [GeeksforGeeks]
keywords: ["GeeksforGeeks", "GeeksforGeeks solution in Python3 C++ Java", "Find Minimum And Maximum Element In An Array Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Find Minimum And Maximum Element In An Array - Solution Explained/problem-solving.webp
    alt: Find Minimum And Maximum Element In An Array
    hiddenInList: true
    hiddenInSingle: false
---


# Find minimum and maximum element in an array
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array<strong> A</strong> of size <strong>N</strong> of integers. Your task is to find the <strong>minimum and maximum </strong>elements in the&nbsp;array.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 6
A[] = {3, 2, 1, 56, 10000, 167}
<strong>Output:</strong>
min = 1, max =  10000</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5
A[]  = {1, 345, 234, 21, 56789}
<strong>Output:</strong>
min = 1, max = 56789</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>getMinMax()</strong>&nbsp;which takes the array <strong>A[]</strong> and its size <strong>N</strong><strong> </strong>as inputs and returns the <strong>minimum and maximum</strong> element of the&nbsp;array.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>5</sup><br>
1 &lt;= A<sub>i</sub> &lt;=10<sup>12</sup></span></p>
 <p></p>
            </div>

---




```cpp
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    long long int mine = 1000000000001;
    long long int maxe = 0;
    
    // max 
    for(int i = 0; i < n; i++) {
        if(a[i] > maxe) {
            maxe = a[i];
        }
    }
    
    // main 
    for(int i = 0; i < n; i++) {
        if(a[i] < mine) {
            mine = a[i];
        }
    }
    
    pair<long long, long>ans;
    ans.first = mine;
    ans.second = maxe;
    
    return ans;
}
```
