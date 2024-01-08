---
title: Permutations
summary: Permutations LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/permutations", "/blog/posts/permutations", "/permutations"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, permutations solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Permutations/problem-solving.webp
    alt: Permutations
    hiddenInList: true
    hiddenInSingle: false
---


<h2>46. Permutations</h2><h3>Medium</h3><hr><div><p>Given an array <code>nums</code> of distinct integers, return <em>all the possible permutations</em>. You can return the answer in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [1,2,3]
<strong>Output:</strong> [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [0,1]
<strong>Output:</strong> [[0,1],[1,0]]
</pre><p><strong>Example 3:</strong></p>
<pre><strong>Input:</strong> nums = [1]
<strong>Output:</strong> [[1]]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 6</code></li>
	<li><code>-10 &lt;= nums[i] &lt;= 10</code></li>
	<li>All the integers of <code>nums</code> are <strong>unique</strong>.</li>
</ul>
</div>

---




```cpp
class Solution {
public:
    
    
   void backtrack(vector<vector<int>> &t,vector<int> &ans, vector<int>& nums){
       if(ans.size()==nums.size())
           t.push_back(ans);
       
      for(int i=0;i<nums.size();i++){
           if(find(ans.begin(),ans.end(),nums[i]) == ans.end()){
               ans.push_back(nums[i]);
               backtrack(t, ans, nums);
               ans.pop_back();
           }
       }
       
   }
    
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>> t;
       vector<int> ans;
       backtrack(t, ans, nums);
       return t;
    }
};

```
