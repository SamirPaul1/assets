---
title: 136 Single Number
summary: 136 Single Number LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/136-single-number", "/blog/posts/136-single-number", "/136-single-number"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 136-single-number solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:136 Single Number/problem-solving.webp
    alt: 136 Single Number
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/single-number/">136. Single Number</a></h2><h3>Easy</h3><hr><div><p>Given a <strong>non-empty</strong>&nbsp;array of integers <code>nums</code>, every element appears <em>twice</em> except for one. Find that single one.</p>

<p>You must&nbsp;implement a solution with a linear runtime complexity and use&nbsp;only constant&nbsp;extra space.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [2,2,1]
<strong>Output:</strong> 1
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [4,1,2,1,2]
<strong>Output:</strong> 4
</pre><p><strong>Example 3:</strong></p>
<pre><strong>Input:</strong> nums = [1]
<strong>Output:</strong> 1
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code>-3 * 10<sup>4</sup> &lt;= nums[i] &lt;= 3 * 10<sup>4</sup></code></li>
	<li>Each element in the array appears twice except for one element which appears only once.</li>
</ul>
</div>

---




```python
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        res = nums[0]
        
        for i in range(1, len(nums)):
            res = res ^ nums[i]
        
        return res
```
