---
title: Quick Left Rotation
summary: Quick Left Rotation - GeeksforGeeks Solution Explained
date: 2020-06-20
tags: [geeksforgeeks]
series: [GeeksforGeeks]
aliases: ["/posts/Quick-Left-Rotation", "/blog/posts/Quick-Left-Rotation", "/Quick-Left-Rotation", "/blog/Quick-Left-Rotation",]
keywords: GeeksforGeeks, GeeksforGeeks solution in Python3 C++ Java, Quick Left Rotation solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Quick Left Rotation - Solution Explained/problem-solving.webp
    alt: Quick Left Rotation
    hiddenInList: true
    hiddenInSingle: false
---


# Quick Left Rotation
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array <strong>arr[] </strong>of size <strong>N</strong> and an integer <strong>K</strong>, the task is to left rotate the array <strong>K</strong> indexes</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>N = 7, K = 2
arr[] = {1, 2, 3, 4, 5, 6, 7}
<strong>Output:</strong> 3 4 5 6 7 1 2
<strong>Explanation</strong>: Rotation of the above 
array by 2 will make the output array .</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span><span style="font-size:18px"><strong> </strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>N = 6, K = 12
arr[] = {1, 2, 3, 4, 5, 6}
<strong>Output:</strong> 1 2 3 4 5 6

</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function <strong>leftRotate</strong>() that takes array<strong> arr, </strong>integer<strong> K </strong>and integer<strong> N</strong> as parameters and rotate the given array by d value.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N).<br>
<strong>Expected Auxiliary Space:</strong> O(1).</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup></span></p>

<p>&nbsp;</p>
</div>

---




```cpp
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	   k = k % n;
	   int temp[k];
	   for(int i = 0; i < k; i++) {
	       temp[i] = arr[i];
	   }
	   for(int i = k; i < n; i++) {
	       arr[i-k] = arr[i];
	   }
	   for(int i = n - k; i < n; i++) {
	       arr[i] = temp[i-(n-k)];
	   }
	} 
		 

};

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends
```
