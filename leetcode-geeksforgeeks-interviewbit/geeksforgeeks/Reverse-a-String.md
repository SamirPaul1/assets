---
title: Reverse A String
summary: Reverse A String - GeeksforGeeks Solution Explained
date: 2020-06-20
tags: [geeksforgeeks]
series: [GeeksforGeeks]
aliases: ["/posts/Reverse-a-String", "/blog/posts/Reverse-a-String", "/Reverse-a-String", "/blog/Reverse-a-String",]
keywords: GeeksforGeeks, GeeksforGeeks solution in Python3 C++ Java, Reverse A String solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Reverse A String - Solution Explained/problem-solving.webp
    alt: Reverse A String
    hiddenInList: true
    hiddenInSingle: false
---


# Reverse a String
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a String S , print the reverse of the string as output.</span><br>
<br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: S = "GeeksforGeeks</span><span style="font-size:18px">"
<strong>Output:</strong>&nbsp;"skeeGrofskeeG</span><span style="font-size:18px">"&nbsp;
<strong>Explanation</strong>: Element at first is at last and
last is at first, second is at second last and 
second last is at second position and so on .
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>S = "ReversE"
<strong>Output:&nbsp;</strong>"EsreveR"
<strong>Explanation</strong>: "E" at first and "R" at last and
"e" at second last and "s" at second and
so on .</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You dont need to read input or print anything. Complete the function <strong>revStr</strong><strong>()&nbsp;</strong>which takes S&nbsp;as input parameter and returns the reversed string .<br>
<br>
<strong>Expected Time Complexity:</strong> O(|S|)<br>
<strong>Expected Auxiliary Space:</strong> O(|S|)<br>
<br>
<strong>Constraints:</strong><br>
1&lt;= |S|&nbsp;&lt;=1000</span></p>
</div>

---




```cpp
//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string revStr(string S) {
        // code here
        // reverse(S.begin(), S.end());
        // return S;
        
        int s = 0, e = S.length() - 1;
        while(s < e) {
        swap(S[s], S[e]);
        s++;
        e--;
    }
    return S;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.revStr(S) << endl;
    }
    return 0;
}

// } Driver Code Ends
```
