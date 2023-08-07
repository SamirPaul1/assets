---
title: K largest elements   GFG
date: 2020-08-31 09:54:52
tags: geeksforgeeks
categories: geeksforgeeks
keywords: GeeksforGeeks, GeeksforGeeks practice solution in Python3 C++ Java, K largest elements - GFG solution
cover: assets/img/gfg.webp
---


# K largest elements
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array of N positive integers, print k largest elements from the array.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5, k = 2
arr[] = {12,5,787,1,23}
<strong>Output: </strong>787 23<strong>
Explanation: </strong>First largest element in
the array is 787 and the second largest
is 23.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 7, k = 3
arr[] = {1,23,12,9,30,2,50}
<strong>Output: </strong>50 30 23<strong>
Explanation: </strong>Three Largest element in
the array are 50, 30 and 23.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete the function <strong>kLargest()</strong> that takes the array, N and K as input parameters and returns a list of k largest element in descending order.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N log K)<br>
<strong>Expected Auxiliary Space:</strong> O(K)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>4</sup><br>
K ≤ N<br>
1 ≤ array[i] ≤ 10<sup>5</sup></span></p>
 <p></p>
            </div>

---




```cpp
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        vector<int>ans;
        sort(arr, arr + n);
        for(int i = n - 1; i >= n - k; i--) {
            ans.push_back(arr[i]);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i < n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int> result = ob.kLargest(arr, n, k);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout << endl;
        
    }
    return 0;
}
  // } Driver Code Ends
```
