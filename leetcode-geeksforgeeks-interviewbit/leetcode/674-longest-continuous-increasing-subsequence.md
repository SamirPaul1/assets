---
title: 674 Longest Continuous Increasing Subsequence
summary: 674 Longest Continuous Increasing Subsequence LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/674-longest-continuous-increasing-subsequence", "/blog/posts/674-longest-continuous-increasing-subsequence", "/674-longest-continuous-increasing-subsequence"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 674-longest-continuous-increasing-subsequence solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:674 Longest Continuous Increasing Subsequence/problem-solving.webp
    alt: 674 Longest Continuous Increasing Subsequence
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/longest-continuous-increasing-subsequence/">674. Longest Continuous Increasing Subsequence</a></h2><h3>Easy</h3><hr><div><p>Given an unsorted array of integers <code>nums</code>, return <em>the length of the longest <strong>continuous increasing subsequence</strong> (i.e. subarray)</em>. The subsequence must be <strong>strictly</strong> increasing.</p>

<p>A <strong>continuous increasing subsequence</strong> is defined by two indices <code>l</code> and <code>r</code> (<code>l &lt; r</code>) such that it is <code>[nums[l], nums[l + 1], ..., nums[r - 1], nums[r]]</code> and for each <code>l &lt;= i &lt; r</code>, <code>nums[i] &lt; nums[i + 1]</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,3,5,4,7]
<strong>Output:</strong> 3
<strong>Explanation:</strong> The longest continuous increasing subsequence is [1,3,5] with length 3.
Even though [1,3,5,7] is an increasing subsequence, it is not continuous as elements 5 and 7 are separated by element
4.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [2,2,2,2,2]
<strong>Output:</strong> 1
<strong>Explanation:</strong> The longest continuous increasing subsequence is [2] with length 1. Note that it must be strictly
increasing.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
</ul>
</div>

---




```python
class Solution:
    def findLengthOfLCIS(self, nums: List[int]) -> int:
        res = tmp = 1
        for i in range(1, len(nums)):
            if nums[i] > nums[i-1]:
                tmp += 1
                res = max(res, tmp)
            else:
                tmp = 1
            
        return res
```
