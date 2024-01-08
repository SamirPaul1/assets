---
title: Wildcard Matching
summary: Wildcard Matching LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/wildcard-matching", "/blog/posts/wildcard-matching", "/wildcard-matching"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, wildcard-matching solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Wildcard Matching/problem-solving.webp
    alt: Wildcard Matching
    hiddenInList: true
    hiddenInSingle: false
---


<h2>44. Wildcard Matching</h2><h3>Hard</h3><hr><div><p>Given an input string (<code>s</code>) and a pattern (<code>p</code>), implement wildcard pattern matching with support for <code>'?'</code> and <code>'*'</code> where:</p>

<ul>
	<li><code>'?'</code> Matches any single character.</li>
	<li><code>'*'</code> Matches any sequence of characters (including the empty sequence).</li>
</ul>

<p>The matching should cover the <strong>entire</strong> input string (not partial).</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> s = "aa", p = "a"
<strong>Output:</strong> false
<strong>Explanation:</strong> "a" does not match the entire string "aa".
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> s = "aa", p = "*"
<strong>Output:</strong> true
<strong>Explanation:</strong>&nbsp;'*' matches any sequence.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> s = "cb", p = "?a"
<strong>Output:</strong> false
<strong>Explanation:</strong>&nbsp;'?' matches 'c', but the second letter is 'a', which does not match 'b'.
</pre>

<p><strong>Example 4:</strong></p>

<pre><strong>Input:</strong> s = "adceb", p = "*a*b"
<strong>Output:</strong> true
<strong>Explanation:</strong>&nbsp;The first '*' matches the empty sequence, while the second '*' matches the substring "dce".
</pre>

<p><strong>Example 5:</strong></p>

<pre><strong>Input:</strong> s = "acdcb", p = "a*c?b"
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= s.length, p.length &lt;= 2000</code></li>
	<li><code>s</code> contains only lowercase English letters.</li>
	<li><code>p</code> contains only lowercase English letters, <code>'?'</code> or <code>'*'</code>.</li>
</ul>
</div>

---




```cpp
class Solution {
public:
    bool match(string& s, string& p, int i, int j, vector<vector<int>>& v){
        if(i==s.size()&&j==p.size())
            return true;
        else if(i==s.size()) 
            return (p[j]=='*'&& match(s,p,i,j+1,v));
        else if(j==p.size())
            return false;
        
        if(v[i][j]!=-1) return v[i][j];
        
        if(p[j]=='*')
            return v[i][j]= (match(s,p,i,j+1,v)||match(s,p,i+1,j,v));
        
        if(p[j]=='?'||s[i]==p[j])
            return v[i][j] = match(s,p,i+1,j+1,v);
        
        return false;
    }
    
    bool isMatch(string s, string p) {
    vector<vector<int>> v(s.size(), vector<int>(p.size(), -1));  
       return match(s,p,0,0,v);
    }
};
```
