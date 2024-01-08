---
title: Natural Sum
summary: Natural Sum - GeeksforGeeks Solution Explained
date: 2020-06-20
tags: [geeksforgeeks]
series: [GeeksforGeeks]
aliases: ["/posts/Natural-Sum", "/blog/posts/Natural-Sum", "/Natural-Sum", "/blog/Natural-Sum",]
keywords: GeeksforGeeks, GeeksforGeeks solution in Python3 C++ Java, Natural Sum solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Natural Sum - Solution Explained/problem-solving.webp
    alt: Natural Sum
    hiddenInList: true
    hiddenInSingle: false
---


# Natural Sum
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given N, find s such that sum of first s natural number is N.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>N = 10
<strong>Output: </strong>4
<strong>Explanation:</strong>&nbsp;Sum of first 4 natural
number is 1 + 2 + 3 + 4 = 10.     </span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>N = 17
<strong>Output: </strong>-1
<strong>Explanaion: </strong>There is no such number.</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anyhting. Your task is to complete the function&nbsp;<strong>find()</strong>&nbsp;which takes N as input parameter and returns&nbsp;s. If not possible return -1.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(log(N))<br>
<strong>Expected Space Complexity:&nbsp;</strong>O(1)<br>
<br>
<strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>9</sup></span></p>
 <p></p>
            </div>

---




```cpp
// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
	public:
   	int find(int n){
   	    // Code here
   	    float ans = (sqrt(1+8*n)-1)/2;
   	    if(ans == (int) ans)
   	    return ans; 
   	    return -1;
   	}    
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.find(n);
		cout << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends
```
