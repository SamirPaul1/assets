---
title: Letter Case Permutation
summary: Letter Case Permutation LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "letter-case-permutation LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Letter Case Permutation - Solution Explained/problem-solving.webp
    alt: Letter Case Permutation
    hiddenInList: true
    hiddenInSingle: false
---


[Discussion Post (created on 7/2/2021 at 16:51)](https://leetcode.com/problems/letter-case-permutation/discuss/1097950/C%2B%2B-or-100-fastest-or-Backtracking)  
<h2>784. Letter Case Permutation</h2><h3>Medium</h3><hr><div><p>Given a string S, we can transform every letter individually&nbsp;to be lowercase or uppercase to create another string.</p>

<p>Return <em>a list of all possible strings we could create</em>. You can return the output&nbsp;in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> S = "a1b2"
<strong>Output:</strong> ["a1b2","a1B2","A1b2","A1B2"]
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> S = "3z4"
<strong>Output:</strong> ["3z4","3Z4"]
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> S = "12345"
<strong>Output:</strong> ["12345"]
</pre>

<p><strong>Example 4:</strong></p>

<pre><strong>Input:</strong> S = "0"
<strong>Output:</strong> ["0"]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>S</code> will be a string with length between <code>1</code> and <code>12</code>.</li>
	<li><code>S</code> will consist only of letters or digits.</li>
</ul>
</div>

---




```cpp
class Solution {
public:
    void backtrack(string S, vector<string> &ans, int p){
        ans.push_back(S);
        if(p>=S.size())
        {  
            return;
        }
        
        for (int i=p;i<S.size();i++)
        {
            if (isalpha(S[i]))
            {
                S[i] ^= 32;
                backtrack(S,ans,i+1);
                S[i] ^= 32;
            }
        }
        
    }
    vector<string> letterCasePermutation(string S) {
       vector<string> ans;
       backtrack(S,ans,0);
       return ans;
    }
};

```
