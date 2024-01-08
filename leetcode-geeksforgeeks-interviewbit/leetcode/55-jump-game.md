---
title: 55 Jump Game
summary: 55 Jump Game LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/55-jump-game", "/blog/posts/55-jump-game", "/55-jump-game"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 55-jump-game solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:55 Jump Game/problem-solving.webp
    alt: 55 Jump Game
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/jump-game/">55. Jump Game</a></h2><h3>Medium</h3><hr><div><p>You are given an integer array <code>nums</code>. You are initially positioned at the array's <strong>first index</strong>, and each element in the array represents your maximum jump length at that position.</p>

<p>Return <code>true</code><em> if you can reach the last index, or </em><code>false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [2,3,1,1,4]
<strong>Output:</strong> true
<strong>Explanation:</strong> Jump 1 step from index 0 to 1, then 3 steps to the last index.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [3,2,1,0,4]
<strong>Output:</strong> false
<strong>Explanation:</strong> You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code>0 &lt;= nums[i] &lt;= 10<sup>5</sup></code></li>
</ul>
</div>

---




```python
class Solution:
    def canJump(self, nums: List[int]) -> bool:
        maxReachable = nums[0]
        i = 0
        
        while i < len(nums) and i <= maxReachable:
            maxReachable = max(maxReachable, i + nums[i])
            if maxReachable >= len(nums)-1: return True
            i += 1
        
        return False
```
