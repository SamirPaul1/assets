---
title: remove invalid parentheses
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, remove-invalid-parentheses solution
description: remove invalid parentheses LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---


<h2>301. Remove Invalid Parentheses</h2><h3>Hard</h3><hr><div><p>Remove the minimum number of invalid parentheses in order to make the input string valid. Return all possible results.</p>

<p><strong>Note:</strong>&nbsp;The input string may contain letters other than the parentheses <code>(</code> and <code>)</code>.</p>

<p><b>Example 1:</b></p>

<pre><b>Input:</b> "()())()"
<b>Output:</b> ["()()()", "(())()"]
</pre>

<p><b>Example 2:</b></p>

<pre><b>Input:</b> "(a)())()"
<b>Output:</b> ["(a)()()", "(a())()"]
</pre>

<p><b>Example 3:</b></p>

<pre><b>Input:</b> ")("
<b>Output: </b>[""]
</pre></div>

---




```cpp
class Solution {
public:
    vector<string> removeInvalidParentheses(string s) {
        int cntL = 0, cntR = 0;
        
        for (const char& c: s) {           
            if (c == '(') cntL++; 
            if (c == ')') {
                if (cntL > 0) cntL--;
                else cntR++;
            }
        }
        
        vector<string> res; 
        
        helper(s, 0, cntL, cntR, res);
        
        return res;
    }
     void helper(string s, int start, int cntL, int cntR, vector<string>& res) {
        if (cntL == 0 && cntR == 0) {
            if (isValid(s)) res.push_back(s);
        }
        
        for (int i = start; i < s.size(); i++) {
            if (i > start && s[i] == s[i - 1]) continue;
            if (s[i] == '(' && cntL > 0) {
                string ss = s.substr(0, i) + s.substr(i + 1);
                helper(ss, i, cntL - 1, cntR, res);
            }
            if (s[i] == ')' && cntR > 0) {
                string ss = s.substr(0, i) + s.substr(i + 1);
                helper(ss, i, cntL, cntR - 1, res);
            }
        }
    }
    
    bool isValid(string s) {
        int count = 0;
        
        for (const char& c: s) {
            if (c == '(') count++;
            if (c == ')') {
                if (count == 0) return false;
                else count--;
            }
        }
        
        return count == 0;
    }
};
```
