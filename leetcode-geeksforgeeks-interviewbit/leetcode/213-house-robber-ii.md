---
title: 213 House Robber Ii
summary: 213 House Robber Ii LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/213-house-robber-ii", "/blog/posts/213-house-robber-ii", "/213-house-robber-ii"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 213-house-robber-ii solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:213 House Robber Ii/problem-solving.webp
    alt: 213 House Robber Ii
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/house-robber-ii/">213. House Robber II</a></h2><h3>Medium</h3><hr><div><p>You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. All houses at this place are <strong>arranged in a circle.</strong> That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a security system connected, and&nbsp;<b>it will automatically contact the police if two adjacent houses were broken into on the same night</b>.</p>

<p>Given an integer array <code>nums</code> representing the amount of money of each house, return <em>the maximum amount of money you can rob tonight <strong>without alerting the police</strong></em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [2,3,2]
<strong>Output:</strong> 3
<strong>Explanation:</strong> You cannot rob house 1 (money = 2) and then rob house 3 (money = 2), because they are adjacent houses.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,3,1]
<strong>Output:</strong> 4
<strong>Explanation:</strong> Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,3]
<strong>Output:</strong> 3
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 1000</code></li>
</ul>
</div>

---




```python
class Solution:
    def rob(self, nums):
        # in Circle 1st house is neighbor of last house
        if len(nums) < 2: return max(nums)
        
        def houseRobber1(nums):
            n = len(nums)
            if n < 2: return max(nums)
            dp = [0] * (n+1)
            dp[1] = nums[0]
            for i in range(2, n+1):
                dp[i] = max(dp[i-1], dp[i-2] + nums[i-1])
            return dp[-1]
        
        res1 = houseRobber1(nums[1:])           # house robber1 excluding 1st house
        res2 = houseRobber1(nums[:len(nums)-1]) # house robber1 excluding Last house
        
        return max(res1, res2)
```
