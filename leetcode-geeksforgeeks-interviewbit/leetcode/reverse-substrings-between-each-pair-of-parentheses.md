---
title: Reverse Substrings Between Each Pair Of Parentheses
summary: Reverse Substrings Between Each Pair Of Parentheses LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "reverse-substrings-between-each-pair-of-parentheses LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Reverse Substrings Between Each Pair Of Parentheses - Solution Explained/problem-solving.webp
    alt: Reverse Substrings Between Each Pair Of Parentheses
    hiddenInList: true
    hiddenInSingle: false
---


<h2>1190. Reverse Substrings Between Each Pair of Parentheses</h2><h3>Medium</h3><hr><div><p>You are given a string <code>s</code> that consists of lower case English letters and brackets.&nbsp;</p>

<p>Reverse the strings&nbsp;in each&nbsp;pair of matching parentheses, starting&nbsp;from the innermost one.</p>

<p>Your result should <strong>not</strong> contain any brackets.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> s = "(abcd)"
<strong>Output:</strong> "dcba"
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> s = "(u(love)i)"
<strong>Output:</strong> "iloveu"
<strong>Explanation:</strong>&nbsp;The substring "love" is reversed first, then the whole string is reversed.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> s = "(ed(et(oc))el)"
<strong>Output:</strong> "leetcode"
<strong>Explanation:</strong>&nbsp;First, we reverse the substring "oc", then "etco", and finally, the whole string.
</pre>

<p><strong>Example 4:</strong></p>

<pre><strong>Input:</strong> s = "a(bcdefghijkl(mno)p)q"
<strong>Output:</strong> "apmnolkjihgfedcbq"
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= s.length &lt;= 2000</code></li>
	<li><code>s</code> only contains lower case English characters and parentheses.</li>
	<li>It's guaranteed that all parentheses are balanced.</li>
</ul>
</div>

---




```cpp
class Solution {
public:
    string reverseParentheses(string s) {
        int n=s.size();
        int o=0, c=n-1;
        for(int i=0;i<n;i++){
            if(s[i]=='(')
               o=i;
            if(s[i]==')'){
               c=i;
               string ss=s.substr(o+1, c-o-1);
               reverse(ss.begin(), ss.end());
               string t=s.substr(0,o)+ss+s.substr(c+1);
               return reverseParentheses(t);
            }
                
        }
        return s;
    }
};
```
