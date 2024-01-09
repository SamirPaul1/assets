---
title: Two Numbers With Odd Occurrences
summary: Two Numbers With Odd Occurrences - GeeksforGeeks Solution Explained
date: 2020-06-20
tags: [geeksforgeeks]
series: [GeeksforGeeks]
keywords: ["GeeksforGeeks", "GeeksforGeeks solution in Python3 C++ Java", "Two Numbers With Odd Occurrences Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Two Numbers With Odd Occurrences - Solution Explained/problem-solving.webp
    alt: Two Numbers With Odd Occurrences
    hiddenInList: true
    hiddenInSingle: false
---


# Two numbers with odd occurrences
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an unsorted array,&nbsp;<strong>arr</strong>[] of size <strong>N</strong> and that contains <strong>even </strong>number of occurrences for all numbers except two numbers. Find the two numbers in decreasing order which has odd occurrences.</span><br>
<br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 8
Arr = {4, 2, 4, 5, 2, 3, 3, 1}
<strong>Output:</strong> {5, 1} 
<strong>Explaination:</strong> 5 and 1 have odd occurrences.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 6
Arr = {1 7 5 5 4 4}
<strong>Output:</strong> {7, 1}
<strong>Explaination:</strong> 7 and 1 have odd occurrences.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>twoOddNum()</strong>&nbsp;which takes the array <strong>Arr[]</strong> and its size <strong>N&nbsp;</strong>as input parameters&nbsp;and returns the two numbers in decreasing order which have odd occurrences.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ Arr<sub>i</sub>&nbsp;≤ 10<sup>8</sup></span></p>
 <p></p>
            </div>

---




```cpp
// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<int> twoOddNum(int Arr[], int N)  
    {
        // code here
       vector<int>ans;
       int res1 = 0, res2 = 0;
       int XOR = 0;
       for(int i = 0; i < N; i++) {
           XOR = XOR^Arr[i];
       }
       int rightMostBit = XOR & ~ (XOR - 1);
       for(int i = 0; i < N; i++) {
           if((Arr[i] & rightMostBit) != 0) {
               res1 = res1^Arr[i];
           }else {
               res2 = res2^Arr[i];
           }
       }
       ans.push_back(res1);
       ans.push_back(res2);
       sort(ans.rbegin(), ans.rend());
       return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int Arr[N];
        for(int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<int>ans=ob.twoOddNum(Arr,N);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
```
