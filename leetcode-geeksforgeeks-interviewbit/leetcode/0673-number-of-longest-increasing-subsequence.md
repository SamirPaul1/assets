---
title: 0673 Number Of Longest Increasing Subsequence
summary: 0673 Number Of Longest Increasing Subsequence LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "0673-number-of-longest-increasing-subsequence LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:0673 Number Of Longest Increasing Subsequence - Solution Explained/problem-solving.webp
    alt: 0673 Number Of Longest Increasing Subsequence
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/number-of-longest-increasing-subsequence/">673. Number of Longest Increasing Subsequence</a></h2><h3>Medium</h3><hr><div><p>Given an integer array&nbsp;<code>nums</code>, return <em>the number of longest increasing subsequences.</em></p>

<p><strong>Notice</strong> that the sequence has to be <strong>strictly</strong> increasing.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,3,5,4,7]
<strong>Output:</strong> 2
<strong>Explanation:</strong> The two longest increasing subsequences are [1, 3, 4, 7] and [1, 3, 5, 7].
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [2,2,2,2,2]
<strong>Output:</strong> 5
<strong>Explanation:</strong> The length of the longest increasing subsequence is 1, and there are 5 increasing subsequences of length 1, so output 5.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 2000</code></li>
	<li><code>-10<sup>6</sup> &lt;= nums[i] &lt;= 10<sup>6</sup></code></li>
</ul>
</div>

---




```python
# https://leetcode.com/problems/number-of-longest-increasing-subsequence/
# https://youtu.be/Tuc-rjJbsXU

class Solution:
    def findNumberOfLIS(self, nums: List[int]) -> int:
        dp = [1]*len(nums)  # length of LIS
        count = [1]*len(nums)   # count of LIS
        
        for r in range(len(nums)):
            for l in range(r):
                if nums[l] < nums[r] and dp[l] + 1 > dp[r]:
                    dp[r] = dp[l] + 1
                    count[r] = count[l]
                elif nums[l] < nums[r] and dp[l] + 1 == dp[r]:
                    count[r] += count[l]
        
        maxi = max(dp)
        res = 0
        for i in range(len(nums)):
            if dp[i] == maxi:
                res += count[i]
        # print(nums)
        # print(dp)
        # print(count)
        return res
```
