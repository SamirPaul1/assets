---
title: Count Vowels Permutation
summary: Count Vowels Permutation LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/count-vowels-permutation", "/blog/posts/count-vowels-permutation", "/count-vowels-permutation"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, count-vowels-permutation solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Count Vowels Permutation/problem-solving.webp
    alt: Count Vowels Permutation
    hiddenInList: true
    hiddenInSingle: false
---


<h2>1220. Count Vowels Permutation</h2><h3>Hard</h3><hr><div><p>Given an integer <code>n</code>, your task is to count how many strings of length <code>n</code> can be formed under the following rules:</p>

<ul>
	<li>Each character is a lower case vowel&nbsp;(<code>'a'</code>, <code>'e'</code>, <code>'i'</code>, <code>'o'</code>, <code>'u'</code>)</li>
	<li>Each vowel&nbsp;<code>'a'</code> may only be followed by an <code>'e'</code>.</li>
	<li>Each vowel&nbsp;<code>'e'</code> may only be followed by an <code>'a'</code>&nbsp;or an <code>'i'</code>.</li>
	<li>Each vowel&nbsp;<code>'i'</code> <strong>may not</strong> be followed by another <code>'i'</code>.</li>
	<li>Each vowel&nbsp;<code>'o'</code> may only be followed by an <code>'i'</code> or a&nbsp;<code>'u'</code>.</li>
	<li>Each vowel&nbsp;<code>'u'</code> may only be followed by an <code>'a'.</code></li>
</ul>

<p>Since the answer&nbsp;may be too large,&nbsp;return it modulo <code>10^9 + 7.</code></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> n = 1
<strong>Output:</strong> 5
<strong>Explanation:</strong> All possible strings are: "a", "e", "i" , "o" and "u".
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> n = 2
<strong>Output:</strong> 10
<strong>Explanation:</strong> All possible strings are: "ae", "ea", "ei", "ia", "ie", "io", "iu", "oi", "ou" and "ua".
</pre>

<p><strong>Example 3:&nbsp;</strong></p>

<pre><strong>Input:</strong> n = 5
<strong>Output:</strong> 68</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 2 * 10^4</code></li>
</ul>
</div>

---




```cpp
class Solution {
public:
    
    // a 0 e 1 i 2 o 3 u 4
    long long int mod =1e9+7;
    
    int countVowelPermutation(int n) {
        long long dp[n][5];
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<5;i++)
            dp[0][i]=1;
        
        for(int i=1;i<n;i++){
            for(int j=0;j<5;j++){
                if(j==0){
                    dp[i][j]=(dp[i-1][1]+dp[i-1][2]+dp[i-1][4])%mod;
                }
                
                if(j==1){
                   dp[i][j]=(dp[i-1][0]+dp[i-1][2])%mod; 
                }
                
                 if(j==2){
                   dp[i][j]=(dp[i-1][1]+dp[i-1][3])%mod; 
                }
                
                 if(j==3){
                   dp[i][j]=(dp[i-1][2])%mod; 
                }
                
                if(j==4){
                   dp[i][j]=(dp[i-1][2]+dp[i-1][3])%mod; 
                }
            }
        }
        return (dp[n-1][0] + dp[n-1][1] + dp[n-1][2] + dp[n-1][3] + dp[n-1][4])%mod;
    }
};

```
