---
title: Count of camel case characters   GFG
date: 2020-08-31 09:54:52
tags: geeksforgeeks
categories: geeksforgeeks
keywords: GeeksforGeeks, GeeksforGeeks practice solution in Python3 C++ Java, Count of camel case characters - GFG solution
cover: assets/img/gfg.webp
---


# Count of camel case characters
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a string. Count the number of Camel Case characters in it.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
S = "ckjkUUYII"
<strong>Output:</strong> 5
<strong>Explanation</strong>: Camel Case characters present:
U, U, Y, I and I.
</span>
</pre>

<p><span style="font-size:18px">â€‹<strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
S = "abcd"
<strong>Output:</strong> 0
<strong>Explanation</strong>: No Camel Case character
present.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>countCamelCase()&nbsp;</strong>which takes the string S as input and returns the count of the camel case characters in the string.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(|S|).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=|S|&lt;=10<sup>5</sup></span></p>

<p>&nbsp;</p>
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
    int countCamelCase (string s)
    {
    	//code here.
    	int count = 0;
    	for(int i = 0; i < s.size(); i++) {
    	    if(s[i] >= 65 && s[i] <= 90)
    	    count++;
    	}
    	return count;
    }
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout <<ob.countCamelCase (s) << '\n';
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
```
