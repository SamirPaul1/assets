---
title: Find The Median
summary: Find The Median - GeeksforGeeks Solution Explained
date: 2020-06-20
tags: [geeksforgeeks]
series: [GeeksforGeeks]
aliases: ["/posts/Find-the-median", "/blog/posts/Find-the-median", "/Find-the-median", "/blog/Find-the-median",]
keywords: GeeksforGeeks, GeeksforGeeks solution in Python3 C++ Java, Find The Median solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Find The Median - Solution Explained/problem-solving.webp
    alt: Find The Median
    hiddenInList: true
    hiddenInSingle: false
---


# Find the median
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array arr[] of N integers, calculate the median</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>N =<strong> </strong>5
arr[] = 90 100 78 89 67
<strong>Output: </strong>89</span>
<span style="font-size:18px"><strong>Explanation: </strong>After sorting the array 
middle element is the median</span> 

</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>N =<strong> </strong>4
arr[] = 56 67 30 79
<strong>Output: </strong></span><span style="font-size:18px">61</span>
<span style="font-size:18px"><strong>Explanation: </strong>In case of even number of 
elements, average of two middle elements 
is the median.</span>

</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>find_median()</strong>&nbsp;which takes the array as input parameter and returns the floor value of the median.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(n * log(n))<br>
<strong>Expected Space Complexity:&nbsp;</strong>O(1)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= Length of Array &lt;= 100<br>
1 &lt;= Elements of Array &lt;= 100</span></p>
</div>

---




```cpp
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    int n = v.size();
		    sort(v.begin(), v.end());
		    if(n % 2 != 0) {
		        return v[floor(n/2)];
		    }
		    else{
		        return floor((v[floor(n/2)]+v[floor(n/2)-1])/2);
		    }
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends
```
