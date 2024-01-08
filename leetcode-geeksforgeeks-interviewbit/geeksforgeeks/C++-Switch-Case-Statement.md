---
title: C++ Switch Case Statement
summary: C++ Switch Case Statement - GeeksforGeeks Solution Explained
date: 2020-06-20
tags: [geeksforgeeks]
series: [GeeksforGeeks]
aliases: ["/posts/C++-Switch-Case-Statement", "/blog/posts/C++-Switch-Case-Statement", "/C++-Switch-Case-Statement", "/blog/C++-Switch-Case-Statement",]
keywords: GeeksforGeeks, GeeksforGeeks solution in Python3 C++ Java, C++ Switch Case Statement solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:C++ Switch Case Statement - Solution Explained/problem-solving.webp
    alt: C++ Switch Case Statement
    hiddenInList: true
    hiddenInSingle: false
---


# C++ Switch Case Statement
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a number N, if the number is between 1 and 10 both inclusive then return the number in words (Lower case English Alphabets) otherwise return&nbsp;"not in range".</span></p>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:</span></strong>
<span style="font-size:18px">5</span>
<strong><span style="font-size:18px">Output:</span></strong>
<span style="font-size:18px">five</span></pre>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:</span></strong>
<span style="font-size:18px">11</span>
<strong><span style="font-size:18px">Output:</span></strong>
<span style="font-size:18px">not in range</span></pre>

<p>&nbsp;</p>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Your Task:</span></strong></p>

<p><span style="font-size:18px">You don't need to read input or print anything. Your task is to complete the function isInRange() which takes an integer and&nbsp;if the number is between 1 and 10 both inclusive then return the number in words otherwise return&nbsp;"not in range".</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(1)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong></span></p>

<p><span style="font-size:18px">1&lt;=N&lt;=10000</span></p>

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
    string isInRange(int N){
        // code here 
        switch(N){
            case 1 :
            return "one";
            break;
            
            case 2 :
            return  "two";
            break;
            
            case 3 :
            return "three";
            break;
            
            case 4 :
            return "four";
            break;
            
            case 5 :
            return "five";
            break;
            
            case 6 :
            return "six";
            break;
            
            case 7 : 
            return "seven";
            break;
            
            case 8: 
            return "eight";
            break;
            
            case 9:
            return "nine";
            break;
            
            case 10:
            return "ten";
            break;
            
            default:
            return "not in range";
            break;
        }
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isInRange(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
```
