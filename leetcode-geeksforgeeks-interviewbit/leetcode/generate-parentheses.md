---
title: generate parentheses
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, generate-parentheses solution
description: generate parentheses LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---


<h2>22. Generate Parentheses</h2><h3>Medium</h3><hr><div><p>Given <code>n</code> pairs of parentheses, write a function to <em>generate all combinations of well-formed parentheses</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> n = 3
<strong>Output:</strong> ["((()))","(()())","(())()","()(())","()()()"]
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> n = 1
<strong>Output:</strong> ["()"]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 8</code></li>
</ul>
</div>

---




```cpp
class Solution {
public:
    
    void backtrack(int open, int close, string s, vector<string> &ans, int n){
        if(s.size()==2*n){
            ans.push_back(s);
            return;
        }
        if(open<n){
            s.push_back('(');
            backtrack(open+1, close, s, ans, n);
            s.pop_back();
        }
        if(close<open){
            s.push_back(')');
            backtrack(open, close+1, s, ans, n);
            s.pop_back();
        }
    }
    
    vector<string> generateParenthesis(int n) {
        string s="";
        vector<string> ans;
        backtrack(0,0,s,ans,n);
        return ans;
    }
};
```
