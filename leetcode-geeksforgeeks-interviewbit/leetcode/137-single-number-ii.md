---
title: 137 Single Number Ii
summary: 137 Single Number Ii LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/137-single-number-ii", "/blog/posts/137-single-number-ii", "/137-single-number-ii"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 137-single-number-ii solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:137 Single Number Ii/problem-solving.webp
    alt: 137 Single Number Ii
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/single-number-ii/">137. Single Number II</a></h2><h3>Medium</h3><hr><div><p>Given an integer array <code>nums</code> where&nbsp;every element appears <strong>three times</strong> except for one, which appears <strong>exactly once</strong>. <em>Find the single element and return it</em>.</p>

<p>You must&nbsp;implement a solution with a linear runtime complexity and use&nbsp;only constant&nbsp;extra space.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [2,2,3,2]
<strong>Output:</strong> 3
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [0,1,0,1,0,1,99]
<strong>Output:</strong> 99
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code>-2<sup>31</sup> &lt;= nums[i] &lt;= 2<sup>31</sup> - 1</code></li>
	<li>Each element in <code>nums</code> appears exactly <strong>three times</strong> except for one element which appears <strong>once</strong>.</li>
</ul>
</div>

---




```python
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        ones = 0; twos = 0
        
        for num in nums:
            ones = (ones ^ num) & (~ twos)
            twos = (twos ^ num) & (~ ones)
        
        return ones
```
