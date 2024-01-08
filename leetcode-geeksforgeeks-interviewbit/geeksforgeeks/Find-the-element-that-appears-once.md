---
title: Find The Element That Appears Once
summary: Find The Element That Appears Once - GeeksforGeeks Solution Explained
date: 2020-06-20
tags: [geeksforgeeks]
series: [GeeksforGeeks]
aliases: ["/posts/Find-the-element-that-appears-once", "/blog/posts/Find-the-element-that-appears-once", "/Find-the-element-that-appears-once", "/blog/Find-the-element-that-appears-once",]
keywords: GeeksforGeeks, GeeksforGeeks solution in Python3 C++ Java, Find The Element That Appears Once solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Find The Element That Appears Once - Solution Explained/problem-solving.webp
    alt: Find The Element That Appears Once
    hiddenInList: true
    hiddenInSingle: false
---


# Find the element that appears once
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a sorted array <strong>A[]</strong> of <strong>N&nbsp;</strong>positive integers having all the numbers occurring exactly twice, except&nbsp;for one number which will occur only once. Find the number occurring only once.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5
A = {1, 1, 2, 5, 5}<strong>
Output: </strong>2
<strong>Explanation: 
</strong>Since 2 occurs once, while
other numbers occur twice, 
2 is the answer.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 7
A = {2, 2, 5, 5, 20, 30, 30}
<strong>Output: </strong>20
<strong>Explanation:
</strong>Since 20 occurs once, while
other numbers occur twice, 
20 is the answer.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>search()&nbsp;</strong>which takes two&nbsp;arguments(array A and integer N) and returns the number occurring only once.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(Log(N)).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><span style="font-size:18px"><strong>Constraints</strong><br>
0 &lt; &nbsp; <strong>N</strong>&nbsp; &lt;= 10^6<br>
0 &lt;= <strong>A[i]</strong> &lt;= 10^9</span></p>
 <p></p>
            </div>

---




```cpp
// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N){
	    //code
	    int count = 0;
	    for(int i = 0; i < N; i++) {
	        count = count^A[i];
	    }
	    return count;
	}
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}
  // } Driver Code Ends
```
