---
title: 0377 Combination Sum Iv
summary: 0377 Combination Sum Iv LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0377-combination-sum-iv", "/blog/posts/0377-combination-sum-iv", "/0377-combination-sum-iv"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0377-combination-sum-iv solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0377 Combination Sum Iv/problem-solving.webp
    alt: 0377 Combination Sum Iv
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/combination-sum-iv/">377. Combination Sum IV</a></h2><h3>Medium</h3><hr><div><p>Given an array of <strong>distinct</strong> integers <code>nums</code> and a target integer <code>target</code>, return <em>the number of possible combinations that add up to</em>&nbsp;<code>target</code>.</p>

<p>The test cases are generated so that the answer can fit in a <strong>32-bit</strong> integer.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,3], target = 4
<strong>Output:</strong> 7
<strong>Explanation:</strong>
The possible combination ways are:
(1, 1, 1, 1)
(1, 1, 2)
(1, 2, 1)
(1, 3)
(2, 1, 1)
(2, 2)
(3, 1)
Note that different sequences are counted as different combinations.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [9], target = 3
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 200</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 1000</code></li>
	<li>All the elements of <code>nums</code> are <strong>unique</strong>.</li>
	<li><code>1 &lt;= target &lt;= 1000</code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> What if negative numbers are allowed in the given array? How does it change the problem? What limitation we need to add to the question to allow negative numbers?</p>
</div>

---




```python
class Solution:
    def combinationSum4(self, nums: List[int], target: int) -> int:
        memo = {}
        def solve(nums, target):
            if target < 0: return 0
            if target == 0: return 1
            if target in memo: return memo[target]
            ans = 0
            for i in range(len(nums)):
                ans += solve(nums, target - nums[i])
            memo[target] = ans
            return ans
        
        return solve(nums, target)
```
