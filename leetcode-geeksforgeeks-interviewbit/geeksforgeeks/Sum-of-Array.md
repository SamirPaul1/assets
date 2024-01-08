---
title: Sum Of Array
summary: Sum Of Array - GeeksforGeeks Solution Explained
date: 2020-06-20
tags: [geeksforgeeks]
series: [GeeksforGeeks]
aliases: ["/posts/Sum-of-Array", "/blog/posts/Sum-of-Array", "/Sum-of-Array", "/blog/Sum-of-Array",]
keywords: GeeksforGeeks, GeeksforGeeks solution in Python3 C++ Java, Sum Of Array solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Sum Of Array - Solution Explained/problem-solving.webp
    alt: Sum Of Array
    hiddenInList: true
    hiddenInSingle: false
---


# Sum of Array
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an integer array <strong>Arr[] </strong>of size <strong>N</strong>. The task is to find sum of it.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4
Arr[] = {1, 2, 3, 4}
<strong>Output:</strong> 10
<strong>Explanation:</strong> 1 + 2 + 3 + 4 = 10.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3
Arr[] = {1, 3, 3}
<strong>Output:</strong> 7
<strong>Explanation:</strong>&nbsp;1 + 3 + 3 = 7.
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete the function <strong>sum()</strong>&nbsp;which takes&nbsp;array&nbsp;<strong>arr&nbsp;</strong>and single&nbsp;integer&nbsp;<strong>n</strong>,&nbsp;as input parameters&nbsp;and returns an integer denoting the answer.&nbsp;You don't to print answer or take inputs.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>5</sup><br>
1 &lt;= Arr[i] &lt;= 10<sup>4</sup></span></p>

<p>&nbsp;</p>
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
	// function to return sum of elements
	// in an array of size n
	int sum(int arr[], int n) {
	    // code here
	    int sum = 0;
	    for(int i = 0; i < n; i++) {
	        sum += arr[i];
	    }
	    return sum;
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
        auto ans = ob.sum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
```
