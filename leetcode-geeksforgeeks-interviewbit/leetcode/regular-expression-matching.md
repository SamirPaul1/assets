---
title: Regular Expression Matching
summary: Regular Expression Matching LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/regular-expression-matching", "/blog/posts/regular-expression-matching", "/regular-expression-matching"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, regular-expression-matching solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Regular Expression Matching/problem-solving.webp
    alt: Regular Expression Matching
    hiddenInList: true
    hiddenInSingle: false
---


<h2>10. Regular Expression Matching</h2><h3>Hard</h3><hr><div><p>Given an input string <code>s</code>&nbsp;and a pattern <code>p</code>, implement regular expression matching with support for <code>'.'</code> and <code>'*'</code> where:</p>

<ul>
	<li><code>'.'</code> Matches any single character.​​​​</li>
	<li><code>'*'</code> Matches zero or more of the preceding element.</li>
</ul>

<p>The matching should cover the <strong>entire</strong> input string (not partial).</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> s = "aa", p = "a"
<strong>Output:</strong> false
<strong>Explanation:</strong> "a" does not match the entire string "aa".
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> s = "aa", p = "a*"
<strong>Output:</strong> true
<strong>Explanation:</strong>&nbsp;'*' means zero or more of the preceding&nbsp;element, 'a'. Therefore, by repeating 'a' once, it becomes "aa".
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> s = "ab", p = ".*"
<strong>Output:</strong> true
<strong>Explanation:</strong>&nbsp;".*" means "zero or more (*) of any character (.)".
</pre>

<p><strong>Example 4:</strong></p>

<pre><strong>Input:</strong> s = "aab", p = "c*a*b"
<strong>Output:</strong> true
<strong>Explanation:</strong>&nbsp;c can be repeated 0 times, a can be repeated 1 time. Therefore, it matches "aab".
</pre>

<p><strong>Example 5:</strong></p>

<pre><strong>Input:</strong> s = "mississippi", p = "mis*is*p*."
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length&nbsp;&lt;= 20</code></li>
	<li><code>1 &lt;= p.length&nbsp;&lt;= 30</code></li>
	<li><code>s</code> contains only lowercase English letters.</li>
	<li><code>p</code> contains only lowercase English letters, <code>'.'</code>, and&nbsp;<code>'*'</code>.</li>
	<li>It is guaranteed for each appearance of the character <code>'*'</code>, there will be a previous valid character to match.</li>
</ul>
</div>

---




```cpp
class Solution {
public:
    
    bool solve(string &s, string &p, int n, int m){
        if(n==0 && m==0)
            return true;
        if(n==0 && m!=0){
            if(p[m-1]=='*')
                return solve(s,p,n,m-2);
            return false;
        }
        if(n!=0 && m==0)
            return false;
        
        if(s[n-1]==p[m-1] || p[m-1]=='.')
            return solve(s,p,n-1,m-1);
        
        else if(p[m-1]=='*'){
            //0 characters match
            if(solve(s,p,n,m-2))
                return true;
            //if previous character matches
            if(s[n-1]==p[m-2] || p[m-2]=='.')
                return solve(s,p,n-1,m);
            return false;
        }
        return false;
    }
    
    bool isMatch(string s, string p) {
        int n=s.size();
        int m=p.size();
        return solve(s,p,n,m);
    }
};
```
