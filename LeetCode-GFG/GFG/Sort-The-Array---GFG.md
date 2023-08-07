---
title: Sort The Array   GFG
date: 2020-08-31 09:54:52
tags: geeksforgeeks
categories: geeksforgeeks
keywords: GeeksforGeeks, GeeksforGeeks practice solution in Python3 C++ Java, Sort The Array - GFG solution
cover: assets/img/gfg.webp
---


# Sort The Array
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a random set of numbers, Print them in sorted order.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 4
arr[] = {1, 5, 3, 2}
<strong>Output:</strong> {1, 2, 3, 5}
<strong>Explanation</strong>: After sorting array will 
be like {1, 2, 3, 5}.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 2
arr[] = {3, 1}
<strong>Output:</strong> {1, 3}
<strong>Explanation</strong>: After sorting array will
be like {3, 1}.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>sortArr()</strong>&nbsp;which takes the list of integers and the size N<strong>&nbsp;</strong>as inputs and returns the modified list.<br>
<br>
<strong>Expected Time Complexity:</strong>&nbsp;O(N * log N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N, A[i] ≤ 10<sup>5</sup></span></p>
 <p></p>
            </div>

---




```cpp
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    vector<int> sortArr(vector<int>arr, int n){
    //complete the function here
    sort(arr.begin(), arr.end());
    return arr;
    }
};

// { Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>s(n);
        for(int i = 0; i < n; i++)
            cin >> s[i];
        Solution ob;
        vector<int>v = ob.sortArr(s, n);
        for(auto i : v)
            cout << i << ' ';
        cout << endl;
    }
return 0;
}

  // } Driver Code Ends
```
