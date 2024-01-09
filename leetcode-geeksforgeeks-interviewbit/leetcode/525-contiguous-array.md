---
title: 525 Contiguous Array
summary: 525 Contiguous Array LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "525-contiguous-array LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:525 Contiguous Array - Solution Explained/problem-solving.webp
    alt: 525 Contiguous Array
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/contiguous-array/">525. Contiguous Array</a></h2><h3>Medium</h3><hr><div><p>Given a binary array <code>nums</code>, return <em>the maximum length of a contiguous subarray with an equal number of </em><code>0</code><em> and </em><code>1</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [0,1]
<strong>Output:</strong> 2
<strong>Explanation:</strong> [0, 1] is the longest contiguous subarray with an equal number of 0 and 1.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [0,1,0]
<strong>Output:</strong> 2
<strong>Explanation:</strong> [0, 1] (or [1, 0]) is a longest contiguous subarray with equal number of 0 and 1.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>nums[i]</code> is either <code>0</code> or <code>1</code>.</li>
</ul>
</div>

---




```python
class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        sumDic = {0:-1}
        curSum = 0
        res = 0
        
        for i, ch in enumerate(nums):
            if ch == 1: curSum += 1
            else: curSum -= 1
            
            if curSum not in sumDic:
                sumDic[curSum] = i
            else:
                res = max(res, i - sumDic[curSum])
        
        return res
```
