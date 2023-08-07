---
title: subsets ii
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, subsets-ii solution
description: subsets ii LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---


[Discussion Post (created on 19/0/2021 at 16:46)](https://leetcode.com/problems/subsets-ii/discuss/1024441/Easy-C%2B%2B)  
<h2>90. Subsets II</h2><h3>Medium</h3><hr><div><p>Given an integer array <code>nums</code> that may contain duplicates, return <em>all possible subsets (the power set)</em>.</p>

<p>The solution set <strong>must not</strong> contain duplicate subsets. Return the solution in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [1,2,2]
<strong>Output:</strong> [[],[1],[1,2],[1,2,2],[2],[2,2]]
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [0]
<strong>Output:</strong> [[],[0]]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10</code></li>
	<li><code>-10 &lt;= nums[i] &lt;= 10</code></li>
</ul>
</div>

---




```cpp
class Solution {
public:
    
    void backtrack(int p, vector<int>& nums, vector<int> &v, vector<vector<int>> &ans){
        for(int i=p;i<nums.size();i++){
            if((i>p) && nums[i]==nums[i-1]){
                continue;
            }
            v.push_back(nums[i]);
            ans.push_back(v);
            backtrack(i+1,nums,v,ans);
            v.pop_back();
        }
    }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> curr;
        ans.push_back(curr);
        backtrack(0,nums,curr,ans);
        return ans;
    }
};
```
