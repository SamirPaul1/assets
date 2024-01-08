---
title: Count Odd Factors
summary: Count Odd Factors - GeeksforGeeks Solution Explained
date: 2020-06-20
tags: [geeksforgeeks]
series: [GeeksforGeeks]
aliases: ["/posts/Count-Odd-Factors", "/blog/posts/Count-Odd-Factors", "/Count-Odd-Factors", "/blog/Count-Odd-Factors",]
keywords: GeeksforGeeks, GeeksforGeeks solution in Python3 C++ Java, Count Odd Factors solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Count Odd Factors - Solution Explained/problem-solving.webp
    alt: Count Odd Factors
    hiddenInList: true
    hiddenInSingle: false
---


# Count Odd Factors
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an integer <strong>N</strong>, count the numbers having<strong>&nbsp;an odd number of factors from 1 to N</strong> (inclusive).</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5
<strong>Output:</strong>
2
<strong>Explanation:</strong>
From 1 - 5 only 2 numbers,
1 and 4 are having odd number
of factors.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 1
<strong>Output:</strong>
1
<strong>Explanation:</strong>
1 have only 1(odd)
factor
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>count()</strong>&nbsp;which takes&nbsp;an integer <strong>N</strong>&nbsp;as input parameters&nbsp;and returns an integer, the total count of numbers&nbsp;from 1 to N having an odd number of factors.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(sqrt(N))<br>
<strong>Expected Space Complexity:</strong> O(1)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
0 &lt;= N &lt;= 10<sup>9</sup></span></p>
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
    int count(int N){
        // code here
        return sqrt(N);
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
        cout << ob.count(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends
```
