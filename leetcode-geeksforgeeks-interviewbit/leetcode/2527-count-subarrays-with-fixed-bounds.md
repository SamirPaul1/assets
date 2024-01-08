---
title: 2527 Count Subarrays With Fixed Bounds
summary: 2527 Count Subarrays With Fixed Bounds LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/2527-count-subarrays-with-fixed-bounds", "/blog/posts/2527-count-subarrays-with-fixed-bounds", "/2527-count-subarrays-with-fixed-bounds"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 2527-count-subarrays-with-fixed-bounds solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:2527 Count Subarrays With Fixed Bounds/problem-solving.webp
    alt: 2527 Count Subarrays With Fixed Bounds
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/count-subarrays-with-fixed-bounds">2527. Count Subarrays With Fixed Bounds</a></h2><h3>Hard</h3><hr><p>You are given an integer array <code>nums</code> and two integers <code>minK</code> and <code>maxK</code>.</p>

<p>A <strong>fixed-bound subarray</strong> of <code>nums</code> is a subarray that satisfies the following conditions:</p>

<ul>
	<li>The <strong>minimum</strong> value in the subarray is equal to <code>minK</code>.</li>
	<li>The <strong>maximum</strong> value in the subarray is equal to <code>maxK</code>.</li>
</ul>

<p>Return <em>the <strong>number</strong> of fixed-bound subarrays</em>.</p>

<p>A <strong>subarray</strong> is a <strong>contiguous</strong> part of an array.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,3,5,2,7,5], minK = 1, maxK = 5
<strong>Output:</strong> 2
<strong>Explanation:</strong> The fixed-bound subarrays are [1,3,5] and [1,3,5,2].
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,1,1,1], minK = 1, maxK = 1
<strong>Output:</strong> 10
<strong>Explanation:</strong> Every subarray of nums is a fixed-bound subarray. There are 10 possible subarrays.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i], minK, maxK &lt;= 10<sup>6</sup></code></li>
</ul>


---




```python
class Solution:
    def countSubarrays(self, nums: List[int], minK: int, maxK: int) -> int:
        l = r = res = 0
        recentMin = recentMax = -1
        while r < len(nums):
            while r < len(nums) and minK <= nums[r] <= maxK:
                if nums[r] == minK:
                    recentMin = r
                if nums[r] == maxK:
                    recentMax = r
                if recentMin != -1 and recentMax != -1:
                    res += min(recentMin, recentMax) - l + 1
                r += 1
            recentMin = recentMax = -1
            l = r+1
            r += 1
        
        return res
```
