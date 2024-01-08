---
title: 128 Longest Consecutive Sequence
summary: 128 Longest Consecutive Sequence LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/128-longest-consecutive-sequence", "/blog/posts/128-longest-consecutive-sequence", "/128-longest-consecutive-sequence"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 128-longest-consecutive-sequence solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:128 Longest Consecutive Sequence/problem-solving.webp
    alt: 128 Longest Consecutive Sequence
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/longest-consecutive-sequence/">128. Longest Consecutive Sequence</a></h2><h3>Medium</h3><hr><div><p>Given an unsorted array of integers <code>nums</code>, return <em>the length of the longest consecutive elements sequence.</em></p>

<p>You must write an algorithm that runs in&nbsp;<code>O(n)</code>&nbsp;time.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [100,4,200,1,3,2]
<strong>Output:</strong> 4
<strong>Explanation:</strong> The longest consecutive elements sequence is <code>[1, 2, 3, 4]</code>. Therefore its length is 4.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [0,3,7,2,5,8,4,6,0,1]
<strong>Output:</strong> 9
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
</ul>
</div>

---




```python
class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums: return 0
        res = 1
        tmp = 1
        elements = set(nums)
        
        for num in nums:
            if (num - 1) in elements:
                continue
            else:
                tmp = 1
                while (num + 1) in elements:
                    tmp += 1
                    num += 1
                res = max(res, tmp)
        
        return res
```
