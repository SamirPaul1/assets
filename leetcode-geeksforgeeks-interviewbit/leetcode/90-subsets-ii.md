---
title: 90 Subsets Ii
summary: 90 Subsets Ii LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/90-subsets-ii", "/blog/posts/90-subsets-ii", "/90-subsets-ii"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 90-subsets-ii solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:90 Subsets Ii/problem-solving.webp
    alt: 90 Subsets Ii
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/subsets-ii/">90. Subsets II</a></h2><h3>Medium</h3><hr><div><p>Given an integer array <code>nums</code> that may contain duplicates, return <em>all possible subsets (the power set)</em>.</p>

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




```python
class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        res = []
        nums.sort()
        
        def dfs(i, path):
            if i >= len(nums):
                res.append(path)
                return 
            dfs(i+1, path + [nums[i]])
            while i+1 < len(nums) and nums[i] == nums[i+1]:
                i += 1
            dfs(i+1, path)
        
        dfs(0, [])
        return res
```
