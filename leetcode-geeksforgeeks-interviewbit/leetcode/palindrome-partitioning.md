---
title: Palindrome Partitioning
summary: Palindrome Partitioning LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "palindrome-partitioning LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Palindrome Partitioning - Solution Explained/problem-solving.webp
    alt: Palindrome Partitioning
    hiddenInList: true
    hiddenInSingle: false
---


[Discussion Post (created on 6/2/2021 at 18:43)](https://leetcode.com/problems/palindrome-partitioning/discuss/1096101/C%2B%2B-or-Backtracking)  
<h2>131. Palindrome Partitioning</h2><h3>Medium</h3><hr><div><p>Given a string <code>s</code>, partition <code>s</code> such that every substring of the partition is a <strong>palindrome</strong>. Return all possible palindrome partitioning of <code>s</code>.</p>

<p>A <strong>palindrome</strong> string is a string that reads the same backward as forward.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> s = "aab"
<strong>Output:</strong> [["a","a","b"],["aa","b"]]
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> s = "a"
<strong>Output:</strong> [["a"]]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 16</code></li>
	<li><code>s</code> contains only lowercase English letters.</li>
</ul>
</div>

---




```cpp
class Solution {
public:
     bool isPalindrome(string s, int low, int high) {
        while (low < high) {
            if (s[low++] != s[high--]) return false;
        }
        return true;
    }
    
    void backtrack(vector<vector<string>> &ans, vector<string> &t, int p, string &s){
        if(p==s.size())
            ans.push_back(t);
        for(int i=p;i<s.size();i++){
           if(isPalindrome(s,p,i)){
               t.push_back(s.substr(p,i-p+1));
               backtrack(ans,t,i+1,s);
               t.pop_back();
           }
        }
        
    }
    
    
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> t;
        backtrack(ans,t,0,s);
        return ans;
    }
};
```
