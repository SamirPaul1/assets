---
title: Vowel or Not   GFG
date: 2020-08-31 09:54:52
tags: geeksforgeeks
categories: geeksforgeeks
keywords: GeeksforGeeks, GeeksforGeeks practice solution in Python3 C++ Java, Vowel or Not - GFG solution
cover: assets/img/gfg.webp
---


# Vowel or Not
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a English alphabet <strong>c</strong>, Write a program to check whether a character is a vowel or not.</span></p>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:</span></strong>
<span style="font-size:18px">c = 'a'</span>
<strong><span style="font-size:18px">Output:</span></strong>
<span style="font-size:18px">YES</span>
<strong><span style="font-size:18px">Explanation:</span></strong>
<span style="font-size:18px">'a' is a vowel.</span></pre>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:</span></strong>
<span style="font-size:18px">c = 'Z'</span>
<strong><span style="font-size:18px">Output:</span></strong>
<span style="font-size:18px">NO</span>
<strong><span style="font-size:18px">Explanation:</span></strong>
<span style="font-size:18px">'Z' is not a vowel.</span></pre>

<p>&nbsp;</p>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Your Task:</span></strong></p>

<p><span style="font-size:18px">You don't need to read input or print anything. Your task is to complete the function isVowel() which takes a character c and returns 'YES' or 'NO'.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(1)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Note: c is either lowercase or uppercase English alphabetic character</strong><br>
<br>
<strong>Constraints:</strong></span></p>

<p><span style="font-size:18px">c belongs to English Alphabets.</span></p>

<p>&nbsp;</p>
</div>

---




```cpp
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string isVowel(char c){
        // code here 
        if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I'  || c == 'o' || c == 'O' || c == 'u' || c == 'U')
        return "YES";
        else 
        return "NO";
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        char c;
        cin >> c;
        Solution ob;
        cout << ob.isVowel(c) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
```
