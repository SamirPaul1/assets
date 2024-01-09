---
title: Palindrome
summary: Palindrome - GeeksforGeeks Solution Explained
date: 2020-06-20
tags: [geeksforgeeks]
series: [GeeksforGeeks]
keywords: ["GeeksforGeeks", "GeeksforGeeks solution in Python3 C++ Java", "Palindrome Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Palindrome - Solution Explained/problem-solving.webp
    alt: Palindrome
    hiddenInList: true
    hiddenInSingle: false
---


# Palindrome
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an integer, check whether it is a palindrome or not.</span><br>
<br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>n = 55555
<strong>Output: </strong>Yes</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>n = 123
<strong>Output: </strong>No</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>is_palindrome()&nbsp;</strong>which takes the number as input parameter and returns "Yes" if it is palindrome otherwise returns "No"(Without quotes).</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(x)<br>
<strong>Expected Space Complexity:&nbsp;</strong>O(x)&nbsp;where x is number of digits in n.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= n &lt;= 1000</span></p>
 <p></p>
            </div>

---




```cpp
// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int res = 0;
		    int temp = n;
		    while(temp != 0) {
		        int lastDigit = temp % 10;
		        res = res * 10 + lastDigit;
		        temp = temp / 10;
		    }
		    if(res == n)
		    return "Yes";
		    else 
		    return "No";
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}
  // } Driver Code Ends
```
