---
title: 2444 Count Subarrays With Fixed Bounds
summary: 2444 Count Subarrays With Fixed Bounds LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "2444-count-subarrays-with-fixed-bounds LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:2444 Count Subarrays With Fixed Bounds - Solution Explained/problem-solving.webp
    alt: 2444 Count Subarrays With Fixed Bounds
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/count-subarrays-with-fixed-bounds/">2444. Count Subarrays With Fixed Bounds</a></h2><h3>Hard</h3><hr><div><p>You are given an integer array <code>nums</code> and two integers <code>minK</code> and <code>maxK</code>.</p>

<p>A <strong>fixed-bound subarray</strong> of <code>nums</code> is a subarray that satisfies the following conditions:</p>

<ul>
	<li>The <strong>minimum</strong> value in the subarray is equal to <code>minK</code>.</li>
	<li>The <strong>maximum</strong> value in the subarray is equal to <code>maxK</code>.</li>
</ul>

<p>Return <em>the <strong>number</strong> of fixed-bound subarrays</em>.</p>

<p>A <strong>subarray</strong> is a <strong>contiguous</strong> part of an array.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,3,5,2,7,5], minK = 1, maxK = 5
<strong>Output:</strong> 2
<strong>Explanation:</strong> The fixed-bound subarrays are [1,3,5] and [1,3,5,2].
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [1,1,1,1], minK = 1, maxK = 1
<strong>Output:</strong> 10
<strong>Explanation:</strong> Every subarray of nums is a fixed-bound subarray. There are 10 possible subarrays.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i], minK, maxK &lt;= 10<sup>6</sup></code></li>
</ul>
</div>

---




```python
class Solution:
    def countSubarrays(self, nums: List[int], minK: int, maxK: int) -> int:
        ans = 0
        r = 0 # right of window
        l = 0 # left of window
        n = len(nums)
        recentMin = -1 # most recent instance of the max
        recentMax = -1 # most recent instance of the min
        while r < n:
            while r<n: # sliding to the right
                num = nums[r]
                if not minK<=num<=maxK: # if this number is too big or small we can no longer use this window
                    break
                # now update the recent min and max if needed
                if num == minK:
                    recentMin = r
                if num == maxK:
                    recentMax = r
                r += 1
                if recentMin != -1 and recentMax != -1:
                    ans += (min(recentMin,recentMax)-l)+1 # we can make as many new subarrays as the earliest occurrence of recentMin or recentMax minus the starting position of our window
            # reset everything
            r+=1
            l = r
            recentMin = -1
            recentMax = -1
            
        return ans

```
