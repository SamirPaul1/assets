---
title: 974 subarray sums divisible by k
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 974-subarray-sums-divisible-by-k solution
description: 974 subarray sums divisible by k LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---


<h2><a href="https://leetcode.com/problems/subarray-sums-divisible-by-k/">974. Subarray Sums Divisible by K</a></h2><h3>Medium</h3><hr><div><p>Given an integer array <code>nums</code> and an integer <code>k</code>, return <em>the number of non-empty <strong>subarrays</strong> that have a sum divisible by </em><code>k</code>.</p>

<p>A <strong>subarray</strong> is a <strong>contiguous</strong> part of an array.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [4,5,0,-2,-3,1], k = 5
<strong>Output:</strong> 7
<strong>Explanation:</strong> There are 7 subarrays with a sum divisible by k = 5:
[4, 5, 0, -2, -3, 1], [5], [5, 0], [5, 0, -2, -3], [0], [0, -2, -3], [-2, -3]
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [5], k = 9
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
	<li><code>2 &lt;= k &lt;= 10<sup>4</sup></code></li>
</ul>
</div>

---




```python
class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        remainderCount = {i:0 for i in range(k)}
        remainderCount[0] = 1
        curRemainder = 0
        res = 0
        
        for i in nums:
            curRemainder += i
            if curRemainder < 0: curRemainder += k
            curRemainder = curRemainder % k
            if remainderCount[curRemainder] >= 1:
                res += remainderCount[curRemainder]
                remainderCount[curRemainder] += 1
            else:
                remainderCount[curRemainder] = 1
                
        return res
```
