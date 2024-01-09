---
title: Binary Array Sorting
summary: Binary Array Sorting - GeeksforGeeks Solution Explained
date: 2020-06-20
tags: [geeksforgeeks]
series: [GeeksforGeeks]
keywords: ["GeeksforGeeks", "GeeksforGeeks solution in Python3 C++ Java", "Binary Array Sorting Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Binary Array Sorting - Solution Explained/problem-solving.webp
    alt: Binary Array Sorting
    hiddenInList: true
    hiddenInSingle: false
---


# Binary Array Sorting
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a binary array <strong>A[]</strong> of size <strong>N</strong>. The task is to arrange the array in increasing order.</span><br>
<span style="font-size:18px"><strong>Note:</strong> The binary array contains only 0&nbsp; and 1.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
5
1 0 1 1 0

<strong>Output</strong>: 
0 0 1 1 1

<strong>Explanation</strong>: 
After arranging the elements in 
increasing order, elements will be as 
0 0 1 1 1.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
10
1 0 1 1 1 1 1 0 0 0

<strong>Output</strong>: 
0 0 0 0 1 1 1 1 1 1

<strong>Explanation</strong>: 
After arranging the elements in 
increasing order, elements will be 
0 0 0 0 1 1 1 1 1 1.
</span>
</pre>

<p><strong><span style="font-size:18px">Your Task:&nbsp;</span></strong><span style="font-size:18px">This is a function problem. You only need to complete the function<strong> binSort()&nbsp;</strong>that takes the array&nbsp;<strong>A[] </strong>and it's size <strong>N</strong> as parameters and sorts the array. The <strong>printing </strong>is done <strong>automatically </strong>by the driver code.</span><br>
<br>
<span style="font-size:18px"><strong>Expected Time Complexity</strong>: O(N)<br>
<strong>Expected Auxilliary Space</strong>: O(1)</span><br>
<br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;=&nbsp;N &lt;= 10<sup>6</sup><br>
0 &lt;= A[i] &lt;= 1</span></p>
 <p></p>
            </div>

---




```cpp
// { Driver Code Starts
// A Sample C++ program for beginners with Competitive Programming

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
       //Your code here
       
       /**************
        * No need to print the array
        * ************/
        sort(A, A+N);
    }
};

// { Driver Code Starts.
int main() {
	int T;
	cin>>T;
	// Input the number of testcases
	while(T--)
	{
	    int N;
	    cin>>N; //Input size of array N
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    Solution obj;
	    obj.binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}



  // } Driver Code Ends
```
