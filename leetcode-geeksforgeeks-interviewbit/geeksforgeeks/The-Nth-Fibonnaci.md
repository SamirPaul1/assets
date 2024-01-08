---
title: The Nth Fibonnaci
summary: The Nth Fibonnaci - GeeksforGeeks Solution Explained
date: 2020-06-20
tags: [geeksforgeeks]
series: [GeeksforGeeks]
aliases: ["/posts/The-Nth-Fibonnaci", "/blog/posts/The-Nth-Fibonnaci", "/The-Nth-Fibonnaci", "/blog/The-Nth-Fibonnaci",]
keywords: GeeksforGeeks, GeeksforGeeks solution in Python3 C++ Java, The Nth Fibonnaci solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:The Nth Fibonnaci - Solution Explained/problem-solving.webp
    alt: The Nth Fibonnaci
    hiddenInList: true
    hiddenInSingle: false
---


# The Nth Fibonnaci
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a positive integer <strong>N</strong>, find the last digit of the <strong>N<sup>th</sup></strong> term from the Fibonacci series.</span></p>

<p><span style="font-size:18px"><strong>Note:&nbsp;</strong>For N=0 you have to return 0.</span><br>
&nbsp;</p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5
<strong>Output:</strong>
5
<strong>Explanation:</strong>
5th Fibonacci number is 5</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 14
<strong>Output:</strong>
7
<strong>Explanation:</strong>
14th Fibonacci number is 377
It's last digit is 7</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>fib()</strong>&nbsp;which takes an integer N<strong>&nbsp;</strong>as input parameter&nbsp;and returns the last digit of Nth Fibonacci number.</span><br>
<br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Space Complexity:</strong> O(1)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
0 &lt;= N &lt;= 1000</span></p>
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
    int fib(int N){
        //code here
        if(N <= 1) return N;
        int a = 0, b = 1, c;
        for(int i = 2; i <= N; i ++) {
            c = (a+b) % 10;
            a = b, b = c;
        }
        return c;
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
        Solution ob;
        cout << ob.fib(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends
```
