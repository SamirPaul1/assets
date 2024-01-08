---
title: Palindrome Partitioning Ii
summary: Palindrome Partitioning Ii LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/palindrome-partitioning-ii", "/blog/posts/palindrome-partitioning-ii", "/palindrome-partitioning-ii"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, palindrome-partitioning-ii solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Palindrome Partitioning Ii/problem-solving.webp
    alt: Palindrome Partitioning Ii
    hiddenInList: true
    hiddenInSingle: false
---


<h2>132. Palindrome Partitioning II</h2><h3>Hard</h3><hr><div><p>Given a string <code>s</code>, partition <code>s</code> such that every substring of the partition is a palindrome.</p>

<p>Return <em>the minimum cuts needed</em> for a palindrome partitioning of <code>s</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> s = "aab"
<strong>Output:</strong> 1
<strong>Explanation:</strong> The palindrome partitioning ["aa","b"] could be produced using 1 cut.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> s = "a"
<strong>Output:</strong> 0
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> s = "ab"
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 2000</code></li>
	<li><code>s</code> consists of lower-case English letters only.</li>
</ul>
</div>

---




```cpp
class Solution {
public:
    int t[2002][2002];
    
    bool isPalindrome(string &s, int i, int j){
        while(i<=j){
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    
    int solve(string s, int i, int j){
        if(t[i][j]!=-1)
            return t[i][j];
        if(i>=j)
            return 0;
        if(isPalindrome(s,i,j))
            return t[i][j]=0;
        int ans=INT_MAX;
        for(int k=i;k<=j-1;k++){
            int temp=0;
            if(isPalindrome(s,i,k)){
                temp=solve(s,k+1,j)+1;
            }
            else{
                t[i][j]=0;
                continue;
            }
            ans=min(ans,temp);
        }
        return t[i][j]=ans;
    }
    
    
    int minCut(string s) {
        int n=s.size();
        memset(t,-1,sizeof(t));
        return solve(s,0,n-1);
    }
};
```
