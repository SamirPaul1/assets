---
title: Palindromic Substrings
summary: Palindromic Substrings LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "palindromic-substrings LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Palindromic Substrings - Solution Explained/problem-solving.webp
    alt: Palindromic Substrings
    hiddenInList: true
    hiddenInSingle: false
---


[Discussion Post (created on 14/0/2021 at 19:11)](https://leetcode.com/problems/palindromic-substrings/solution/)  
[Discussion Post (created on 14/0/2021 at 19:1)](https://leetcode.com/problems/palindromic-substrings/discuss/1016504/Expand-Around-Center-or-100-faster-100-memory-or-C%2B%2B)  
<h2>647. Palindromic Substrings</h2><h3>Medium</h3><hr><div><p>Given a string, your task is to count how many palindromic substrings in this string.</p>

<p>The substrings with different start indexes or end indexes are counted as different substrings even they consist of same characters.</p>

<p><b>Example 1:</b></p>

<pre><b>Input:</b> "abc"
<b>Output:</b> 3
<b>Explanation:</b> Three palindromic strings: "a", "b", "c".
</pre>

<p>&nbsp;</p>

<p><b>Example 2:</b></p>

<pre><b>Input:</b> "aaa"
<b>Output:</b> 6
<b>Explanation:</b> Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".
</pre>

<p>&nbsp;</p>

<p><b>Note:</b></p>

<ol>
	<li>The input string length won't exceed 1000.</li>
</ol>

<p>&nbsp;</p></div>

---




```cpp
class Solution {
public:
    
    int countSubstrings(string s) {
        int n=s.size(),ans=0;
        if(n<=0)
            return 0;
        int t[n][n];
        memset(t,0,sizeof(t));
        for(int i=0;i<n;i++){
            t[i][i]=1;
        }
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1])
              t[i][i+1]=1;
        }
            
        for(int i=2;i<n;i++){
           for(int j=0;j<n-i;j++){
               if(t[j+1][i+j-1]==1 && s[j]==s[i+j])
                   t[j][i+j]=1;
           }
        }
        for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
                   if(t[i][j])
                       ans++;
           }
        }
        return ans;
    }
};
```
