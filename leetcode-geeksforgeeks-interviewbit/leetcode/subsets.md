---
title: Subsets
summary: Subsets LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/subsets", "/blog/posts/subsets", "/subsets"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, subsets solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Subsets/problem-solving.webp
    alt: Subsets
    hiddenInList: true
    hiddenInSingle: false
---


<h2>78. Subsets</h2><h3>Medium</h3><hr><div><p>Given an integer array <code>nums</code> of <strong>unique</strong> elements, return <em>all possible subsets (the power set)</em>.</p>

<p>The solution set <strong>must not</strong> contain duplicate subsets. Return the solution in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,3]
<strong>Output:</strong> [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [0]
<strong>Output:</strong> [[],[0]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10</code></li>
	<li><code>-10 &lt;= nums[i] &lt;= 10</code></li>
	<li>All the numbers of&nbsp;<code>nums</code> are <strong>unique</strong>.</li>
</ul>
</div>

---




```cpp
class Solution {
public:
    
    void backtrack(int p, vector<int> &v, vector<int>& nums, vector<vector<int>> &ans){
       ans.push_back(v);
       for(int i=p;i<nums.size();i++){
            v.push_back(nums[i]);
            backtrack(i+1,v,nums,ans);
            v.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>> ans;
       vector<int> curr;
       backtrack(0,curr,nums,ans);
       return ans;
    }
};
```
