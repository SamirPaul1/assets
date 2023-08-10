---
title: 0560 subarray sum equals k
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0560-subarray-sum-equals-k solution
description: 0560 subarray sum equals k LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---


<h2><a href="https://leetcode.com/problems/subarray-sum-equals-k/">560. Subarray Sum Equals K</a></h2><h3>Medium</h3><hr><div><p>Given an array of integers <code>nums</code> and an integer <code>k</code>, return <em>the total number of subarrays whose sum equals to</em> <code>k</code>.</p>

<p>A subarray is a contiguous <strong>non-empty</strong> sequence of elements within an array.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [1,1,1], k = 2
<strong>Output:</strong> 2
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [1,2,3], k = 3
<strong>Output:</strong> 2
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 2 * 10<sup>4</sup></code></li>
	<li><code>-1000 &lt;= nums[i] &lt;= 1000</code></li>
	<li><code>-10<sup>7</sup> &lt;= k &lt;= 10<sup>7</sup></code></li>
</ul>
</div>

---




```python
class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        s = res = 0
        cnt = {0:1}
        for num in nums:
            s += num
            if s-k in cnt:
                res += cnt[s-k]
            if s in cnt: cnt[s] += 1
            else: cnt[s] = 1
        
        return res
```
