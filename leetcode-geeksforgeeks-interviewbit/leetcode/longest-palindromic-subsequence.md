---
title: Longest Palindromic Subsequence
summary: Longest Palindromic Subsequence LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/longest-palindromic-subsequence", "/blog/posts/longest-palindromic-subsequence", "/longest-palindromic-subsequence"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, longest-palindromic-subsequence solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Longest Palindromic Subsequence/problem-solving.webp
    alt: Longest Palindromic Subsequence
    hiddenInList: true
    hiddenInSingle: false
---


<h2>516. Longest Palindromic Subsequence</h2><h3>Medium</h3><hr><div><p>Given a string s, find the longest palindromic subsequence's length in s. You may assume that the maximum length of s is 1000.</p>

<p><b>Example 1:</b><br>
Input:</p>

<pre>"bbbab"
</pre>
Output:

<pre>4
</pre>
One possible longest palindromic subsequence is "bbbb".

<p>&nbsp;</p>

<p><b>Example 2:</b><br>
Input:</p>

<pre>"cbbd"
</pre>
Output:

<pre>2
</pre>
One possible longest palindromic subsequence is "bb".
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 1000</code></li>
	<li><code>s</code> consists only of lowercase English letters.</li>
</ul>
</div>

---




```cpp
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string a=s;
        string str=s;
        reverse(str.begin(), str.end());
        string b=str;
        int n=s.size();
        int t[n+1][n+1];
        for(int i=0;i<=n;i++)
            t[i][0]=0;
        for(int i=0;i<=n;i++)
            t[0][i]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
              if(a[i-1]==b[j-1])
                  t[i][j]=1+t[i-1][j-1];
              else
                  t[i][j]=max(t[i-1][j],t[i][j-1]);
           }
        }
        return t[n][n];
    }
};
```
