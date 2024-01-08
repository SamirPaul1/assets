---
title: Rope Cutting
summary: Rope Cutting - GeeksforGeeks Solution Explained
date: 2020-06-20
tags: [geeksforgeeks]
series: [GeeksforGeeks]
aliases: ["/posts/Rope-Cutting", "/blog/posts/Rope-Cutting", "/Rope-Cutting", "/blog/Rope-Cutting",]
keywords: GeeksforGeeks, GeeksforGeeks solution in Python3 C++ Java, Rope Cutting solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Rope Cutting - Solution Explained/problem-solving.webp
    alt: Rope Cutting
    hiddenInList: true
    hiddenInSingle: false
---


# Rope Cutting
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">You are given <strong>N</strong> ropes. A cut operation is performed on ropes such that all of them are reduced by the length of the smallest rope. Display the number of ropes left after every cut operation until the length of each rope is zero.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> arr[ ] = {5, 1, 1, 2, 3, 5} </span>
<span style="font-size:18px"><strong>Output :</strong> 4 3 2 </span>
<span style="font-size:18px"><strong>Explanation:</strong> In the first operation, the 
minimum ropes are 1 So, we reduce length 1 
from all of them after reducing we left with 
4 ropes and we do the same for rest. </span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> arr[ ] = {5, 1, 6, 9, 8, 11, 2, 
                               2, 6, 5} <strong>
Output :</strong>  9 7 5 3 2 1</span></pre>

<p><br>
<br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>RopeCutting()</strong> that takes an array <strong>(arr)</strong>, sizeOfArray <strong>(n),</strong>&nbsp;and return the number of ropes that are left after each operation with space if&nbsp;no ropes left after one operation, in this case, return&nbsp;0. The driver code takes care of the printing.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N*LOG(N)).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span></p>

<p><span style="font-size:18px">1 ≤ N ≤ 10<sup>5</sup></span></p>
 <p></p>
            </div>

---




```cpp
// { Driver Code Starts
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
        vector<int> RopeCutting(int arr[], int n)
    {
        // Complete the function
        vector<int>ans;
        sort(arr, arr+n);
        int count = 1;
        int length = n;
        for(int i = 0; i < n - 1; i++) {
            if(arr[i] == arr[i+1]) {
                count++;
            } else {
                ans.push_back(length - count);
                length = length - count;
                count = 1;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{   
    int T;
    cin>> T;
    while(T--)
    {
       	int n;
       	cin>>n;
       	int arr[n+1];
       	for(int i=0;i<n;i++)
       	   cin>>arr[i];
        
        vector<int> v;
        Solution ob;
        v = ob.RopeCutting(arr, n);
        for(int i : v){
            cout << i << " ";
        }
        cout << endl;
        
        
    }
  return 0;
}  // } Driver Code Ends
```
