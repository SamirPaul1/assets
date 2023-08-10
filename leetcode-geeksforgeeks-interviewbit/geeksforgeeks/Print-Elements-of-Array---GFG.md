---
title: Print Elements of Array   GFG
date: 2020-08-31 09:54:52
tags: geeksforgeeks
categories: geeksforgeeks
keywords: GeeksforGeeks, GeeksforGeeks practice solution in Python3 C++ Java, Print Elements of Array - GFG solution
cover: assets/img/gfg.webp
---


# Print Elements of Array
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array <strong>Arr</strong>&nbsp;of size <strong>N</strong>, print all its elements.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5
Arr[] = {1, 2, 3, 4, 5}
<strong>Output:</strong> 1 2 3 4&nbsp;5
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4
Arr[] = {2, 3, 5, 5}
<strong>Output:</strong> 2 3 5 5
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete the function <strong>printArray()</strong>&nbsp;which takes an array <strong>arr,</strong>&nbsp;single&nbsp;integer&nbsp;<strong>n,</strong>&nbsp;as input parameters and prints the value of the array space separated.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>5</sup><br>
1 &lt;= Arr[i] &lt;= 10<sup>5</sup></span></p>
</div>

---




```cpp
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    //Just print the space seperated array elements
	void printArray(int arr[], int n) {
	    // code here
	    for(int i = 0; i < n; i++) {
	        cout << arr[i] << " " ;
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.printArray(arr, n);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
```
