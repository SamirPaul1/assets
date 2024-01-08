---
title: 0169 Majority Element
summary: 0169 Majority Element LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0169-majority-element", "/blog/posts/0169-majority-element", "/0169-majority-element"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0169-majority-element solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0169 Majority Element/problem-solving.webp
    alt: 0169 Majority Element
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/majority-element/">169. Majority Element</a></h2><h3>Easy</h3><hr><div><p>Given an array <code>nums</code> of size <code>n</code>, return <em>the majority element</em>.</p>

<p>The majority element is the element that appears more than <code>⌊n / 2⌋</code> times. You may assume that the majority element always exists in the array.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [3,2,3]
<strong>Output:</strong> 3
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [2,2,1,1,1,2,2]
<strong>Output:</strong> 2
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == nums.length</code></li>
	<li><code>1 &lt;= n &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
</ul>

<p>&nbsp;</p>
<strong>Follow-up:</strong> Could you solve the problem in linear time and in <code>O(1)</code> space?</div>

---




```python
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        me = '#'
        mc = 1
        
        for num in nums:
            if me != num:
                mc -= 1
            else:
                mc += 1
            if mc == 0:
                me = num
                mc = 1
        
        return me
```
