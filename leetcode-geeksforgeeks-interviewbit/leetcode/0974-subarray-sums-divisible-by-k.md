---
title: 0974 Subarray Sums Divisible By K
summary: 0974 Subarray Sums Divisible By K LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0974-subarray-sums-divisible-by-k", "/blog/posts/0974-subarray-sums-divisible-by-k", "/0974-subarray-sums-divisible-by-k"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0974-subarray-sums-divisible-by-k solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0974 Subarray Sums Divisible By K/problem-solving.webp
    alt: 0974 Subarray Sums Divisible By K
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/subarray-sums-divisible-by-k/">974. Subarray Sums Divisible by K</a></h2><h3>Medium</h3><hr><div><p>Given an integer array <code>nums</code> and an integer <code>k</code>, return <em>the number of non-empty <strong>subarrays</strong> that have a sum divisible by </em><code>k</code>.</p>

<p>A <strong>subarray</strong> is a <strong>contiguous</strong> part of an array.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [4,5,0,-2,-3,1], k = 5
<strong>Output:</strong> 7
<strong>Explanation:</strong> There are 7 subarrays with a sum divisible by k = 5:
[4, 5, 0, -2, -3, 1], [5], [5, 0], [5, 0, -2, -3], [0], [0, -2, -3], [-2, -3]
</pre>

<p><strong class="example">Example 2:</strong></p>

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
        rem_cnt = {}
        rem_cnt[0] = 1
        s = res = 0
        for num in nums:
            s += num
            rem = s % k
            if rem in rem_cnt: 
                res += rem_cnt[rem]
                rem_cnt[rem] += 1
            else:
                rem_cnt[rem] = 1
        
        return res
```
