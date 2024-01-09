---
title: Combinations
summary: Combinations LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "combinations LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Combinations - Solution Explained/problem-solving.webp
    alt: Combinations
    hiddenInList: true
    hiddenInSingle: false
---


[Discussion Post (created on 19/0/2021 at 21:17)](https://leetcode.com/problems/combinations/discuss/1024708/C%2B%2B-or-Backtracking)  
<h2>77. Combinations</h2><h3>Medium</h3><hr><div><p>Given two integers <em>n</em> and <em>k</em>, return all possible combinations of <em>k</em> numbers out of 1 ... <em>n</em>.</p>

<p>You may return the answer in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> n = 4, k = 2
<strong>Output:</strong>
[
  [2,4],
  [3,4],
  [2,3],
  [1,2],
  [1,3],
  [1,4],
]
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> n = 1, k = 1
<strong>Output:</strong> [[1]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 20</code></li>
	<li><code>1 &lt;= k &lt;= n</code></li>
</ul>
</div>

---




```cpp
class Solution {
public:
    
    void backtrack(vector<int> &t, vector<vector<int>> &ans, int st, int n, int k){
        if(t.size()==k)
        {
            ans.push_back(t);
            return;
        }
        
        for(int i=st;i<n;i++){
            t.push_back(i+1);
            backtrack(t,ans,i+1,n,k);
            t.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        if(n<k)
            return ans;
        vector<int> t;
        backtrack(t,ans,0,n,k);
        return ans;
    }
};
```
