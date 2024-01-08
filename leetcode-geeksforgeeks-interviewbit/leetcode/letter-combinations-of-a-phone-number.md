---
title: Letter Combinations Of A Phone Number
summary: Letter Combinations Of A Phone Number LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/letter-combinations-of-a-phone-number", "/blog/posts/letter-combinations-of-a-phone-number", "/letter-combinations-of-a-phone-number"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, letter-combinations-of-a-phone-number solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Letter Combinations Of A Phone Number/problem-solving.webp
    alt: Letter Combinations Of A Phone Number
    hiddenInList: true
    hiddenInSingle: false
---


<h2>  Letter Combinations of a Phone Number</h2><hr><div><p>Given a string containing digits from <code>2-9</code> inclusive, return all possible letter combinations that the number could represent. Return the answer in <strong>any order</strong>.</p>

<p>A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.</p>

<p><img src="https://upload.wikimedia.org/wikipedia/commons/thumb/7/73/Telephone-keypad2.svg/200px-Telephone-keypad2.svg.png" style="width: 200px; height: 162px;"></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> digits = "23"
<strong>Output:</strong> ["ad","ae","af","bd","be","bf","cd","ce","cf"]
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> digits = ""
<strong>Output:</strong> []
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> digits = "2"
<strong>Output:</strong> ["a","b","c"]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= digits.length &lt;= 4</code></li>
	<li><code>digits[i]</code> is a digit in the range <code>['2', '9']</code>.</li>
</ul>
</div>

---




```cpp
class Solution {
public:
    vector<string> ans;
    unordered_map<char, string> m;
    
    
    void backtrack(int p, string s, string d){
        if(s.size()==d.size()){
            ans.push_back(s);
            return;
        }
        for(int i=p;i<d.size();i++){
            char c=d[i];
            for(int j=0;j<m[c].size();j++){
                char ch=m[c][j];
                s.push_back(ch);
                backtrack(i+1, s, d);
                s.pop_back();
            }
        }
    }
    
    vector<string> letterCombinations(string digits) {
        string s="";
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        if(digits.size()==0)
            return ans;
        backtrack(0, s, digits);
        return ans;
    }
};
```


```python
class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        digitToChar = {
            "2": "abc",
            "3": "def",
            "4": "ghi",
            "5": "jkl",
            "6": "mno",
            "7": "pqrs",
            "8": "tuv",
            "9": "wxyz",
        }
        
        res = []
        
        def dfs(i, curStr):
            if len(curStr) == len(digits):
                res.append(curStr)
                return
            
            for ch in digitToChar[digits[i]]:
                dfs(i+1, curStr + ch)
            
        dfs(0, "")
        return res if len(digits) != 0 else []

    
# Time: O(n 4^n)
# Space: O(n)
```
