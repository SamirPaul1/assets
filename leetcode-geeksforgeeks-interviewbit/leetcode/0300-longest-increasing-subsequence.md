---
title: 0300 Longest Increasing Subsequence
summary: 0300 Longest Increasing Subsequence LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0300-longest-increasing-subsequence", "/blog/posts/0300-longest-increasing-subsequence", "/0300-longest-increasing-subsequence"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0300-longest-increasing-subsequence solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0300 Longest Increasing Subsequence/problem-solving.webp
    alt: 0300 Longest Increasing Subsequence
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/longest-increasing-subsequence/">300. Longest Increasing Subsequence</a></h2><h3>Medium</h3><hr><div><p>Given an integer array <code>nums</code>, return <em>the length of the longest <strong>strictly increasing </strong></em><span data-keyword="subsequence-array"><em><strong>subsequence</strong></em></span>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [10,9,2,5,3,7,101,18]
<strong>Output:</strong> 4
<strong>Explanation:</strong> The longest increasing subsequence is [2,3,7,101], therefore the length is 4.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [0,1,0,3,2,3]
<strong>Output:</strong> 4
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [7,7,7,7,7,7,7]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 2500</code></li>
	<li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
</ul>

<p>&nbsp;</p>
<p><b>Follow up:</b>&nbsp;Can you come up with an algorithm that runs in&nbsp;<code>O(n log(n))</code> time complexity?</p>
</div>

---




```python
class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        dp = [0]*(len(nums)+1)
        for i in range(len(nums)):
            tmp = 0
            for j in range(i):
                if nums[j] < nums[i]:
                    tmp = max(tmp, dp[j])
            dp[i] = tmp+1
        
        return max(dp)
```
