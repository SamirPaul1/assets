---
title: Distinct Subsequences
summary: Distinct Subsequences LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/distinct-subsequences", "/blog/posts/distinct-subsequences", "/distinct-subsequences"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, distinct-subsequences solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Distinct Subsequences/problem-solving.webp
    alt: Distinct Subsequences
    hiddenInList: true
    hiddenInSingle: false
---


[Discussion Post (created on 27/2/2021 at 17:17)](https://leetcode.com/problems/distinct-subsequences/discuss/1129570/EASY-DP-or-C%2B%2B)  
[Discussion Post (created on 17/0/2021 at 15:30)](https://leetcode.com/problems/distinct-subsequences/discuss/1021259/Recursion-%2B-Memoization-or-C%2B%2B)  
<h2>115. Distinct Subsequences</h2><h3>Hard</h3><hr><div><p>Given two strings <code>s</code> and <code>t</code>, return <em>the&nbsp;number of distinct subsequences of <code>s</code> which equals <code>t</code></em>.</p>

<p>A string's <strong>subsequence</strong> is a new string formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., <code>"ACE"</code> is a subsequence of <code>"ABCDE"</code> while <code>"AEC"</code> is not).</p>

<p>It's guaranteed the answer fits on a 32-bit signed integer.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> s = "rabbbit", t = "rabbit"
<strong>Output:</strong> 3
<strong>Explanation:</strong>
As shown below, there are 3 ways you can generate "rabbit" from S.
<code><strong><u>rabb</u></strong>b<strong><u>it</u></strong></code>
<code><strong><u>ra</u></strong>b<strong><u>bbit</u></strong></code>
<code><strong><u>rab</u></strong>b<strong><u>bit</u></strong></code>
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> s = "babgbag", t = "bag"
<strong>Output:</strong> 5
<strong>Explanation:</strong>
As shown below, there are 5 ways you can generate "bag" from S.
<code><strong><u>ba</u></strong>b<u><strong>g</strong></u>bag</code>
<code><strong><u>ba</u></strong>bgba<strong><u>g</u></strong></code>
<code><u><strong>b</strong></u>abgb<strong><u>ag</u></strong></code>
<code>ba<u><strong>b</strong></u>gb<u><strong>ag</strong></u></code>
<code>babg<strong><u>bag</u></strong></code></pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= s.length, t.length &lt;= 1000</code></li>
	<li><code>s</code> and <code>t</code> consist of English letters.</li>
</ul>
</div>

---




```cpp
class Solution {
public:
    int numDistinct(string s, string t) {
        int m=s.size();
        int n=t.size();
        long long dp[m+1][n+1];
        dp[0][0]=1;
        for(int i=1;i<=m;i++)
            dp[i][0]=1;
        for(int i=1;i<=n;i++)
            dp[0][i]=0;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==t[j-1]){
                    dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
                }
                else
                    dp[i][j]=dp[i-1][j]; 
            }
        }
        return dp[m][n];
    }
};
```
