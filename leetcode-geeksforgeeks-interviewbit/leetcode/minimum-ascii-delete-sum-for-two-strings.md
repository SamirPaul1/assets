---
title: Minimum Ascii Delete Sum For Two Strings
summary: Minimum Ascii Delete Sum For Two Strings LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/minimum-ascii-delete-sum-for-two-strings", "/blog/posts/minimum-ascii-delete-sum-for-two-strings", "/minimum-ascii-delete-sum-for-two-strings"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, minimum-ascii-delete-sum-for-two-strings solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Minimum Ascii Delete Sum For Two Strings/problem-solving.webp
    alt: Minimum Ascii Delete Sum For Two Strings
    hiddenInList: true
    hiddenInSingle: false
---


<h2>712. Minimum ASCII Delete Sum for Two Strings</h2><h3>Medium</h3><hr><div><p>Given two strings <code>s1, s2</code>, find the lowest ASCII sum of deleted characters to make two strings equal.</p>

<p><b>Example 1:</b><br>
</p><pre><b>Input:</b> s1 = "sea", s2 = "eat"
<b>Output:</b> 231
<b>Explanation:</b> Deleting "s" from "sea" adds the ASCII value of "s" (115) to the sum.
Deleting "t" from "eat" adds 116 to the sum.
At the end, both strings are equal, and 115 + 116 = 231 is the minimum sum possible to achieve this.
</pre>
<p></p>

<p><b>Example 2:</b><br>
</p><pre><b>Input:</b> s1 = "delete", s2 = "leet"
<b>Output:</b> 403
<b>Explanation:</b> Deleting "dee" from "delete" to turn the string into "let",
adds 100[d]+101[e]+101[e] to the sum.  Deleting "e" from "leet" adds 101[e] to the sum.
At the end, both strings are equal to "let", and the answer is 100+101+101+101 = 403.
If instead we turned both strings into "lee" or "eet", we would get answers of 433 or 417, which are higher.
</pre>
<p></p>

<p><b>Note:</b>
</p><li><code>0 &lt; s1.length, s2.length &lt;= 1000</code>.</li>
<li>All elements of each string will have an ASCII value in <code>[97, 122]</code>.</li> 
<p></p></div>

---




```cpp
class Solution {
public:
    
    int t[1003][1003];
    
    int minimumDeleteSum(string s1, string s2) {
        int n=s1.size(),m=s2.size();
        memset(t,0,sizeof(t));
        t[0][0]=0;
        for(int i=1;i<=n;i++)
            t[i][0]=(int)s1[i-1]+t[i-1][0];
        for(int i=1;i<=m;i++)
            t[0][i]=(int)s2[i-1]+t[0][i-1];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1])
                    t[i][j]=t[i-1][j-1];
                else
                    t[i][j]=min(s1[i-1]+t[i-1][j], s2[j-1]+t[i][j-1]);
            }
        }
        return t[n][m];
    }
};
```
