---
title: Display Longest Name
summary: Display Longest Name - GeeksforGeeks Solution Explained
date: 2020-06-20
tags: [geeksforgeeks]
series: [GeeksforGeeks]
keywords: ["GeeksforGeeks", "GeeksforGeeks solution in Python3 C++ Java", "Display Longest Name Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Display Longest Name - Solution Explained/problem-solving.webp
    alt: Display Longest Name
    hiddenInList: true
    hiddenInSingle: false
---


# Display longest name
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a list of names, display the longest name.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5
names[] = { "Geek", "Geeks", "Geeksfor",
  "GeeksforGeek", "GeeksforGeeks" }</span>

<span style="font-size:18px"><strong>Output:</strong>
GeeksforGeeks</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>longest()</strong>&nbsp;which takes the array <strong>names[]</strong> and its size <strong>N</strong><strong> </strong>as inputs and <strong>returns</strong> the Longest name in the list of names.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 &lt;= N &lt;= 100</span><br>
<span style="font-size:18px">1 &lt;= |length of name| &lt;= 1000</span></p>

<p>&nbsp;</p>
</div>

---




```cpp
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    string longest(string names[], int n)
    {
       string res = names[0];
       
       for(int i = 0; i < n; i++) {
           if(names[i].size() > res.size())
           res = names[i];
       }
       return res;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string names[n];
		
		for(int i=0;i<n;i++)
			cin>>names[i];
		Solution ob;
		cout<< ob.longest(names, n) << endl;
	}
}

// } Driver Code Ends
```
