---
title: 34 Find First And Last Position Of Element In Sorted Array
summary: 34 Find First And Last Position Of Element In Sorted Array LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/34-find-first-and-last-position-of-element-in-sorted-array", "/blog/posts/34-find-first-and-last-position-of-element-in-sorted-array", "/34-find-first-and-last-position-of-element-in-sorted-array"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 34-find-first-and-last-position-of-element-in-sorted-array solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:34 Find First And Last Position Of Element In Sorted Array/problem-solving.webp
    alt: 34 Find First And Last Position Of Element In Sorted Array
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/">34. Find First and Last Position of Element in Sorted Array</a></h2><h3>Medium</h3><hr><div><p>Given an array of integers <code>nums</code> sorted in non-decreasing order, find the starting and ending position of a given <code>target</code> value.</p>

<p>If <code>target</code> is not found in the array, return <code>[-1, -1]</code>.</p>

<p>You must&nbsp;write an algorithm with&nbsp;<code>O(log n)</code> runtime complexity.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [5,7,7,8,8,10], target = 8
<strong>Output:</strong> [3,4]
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [5,7,7,8,8,10], target = 6
<strong>Output:</strong> [-1,-1]
</pre><p><strong>Example 3:</strong></p>
<pre><strong>Input:</strong> nums = [], target = 0
<strong>Output:</strong> [-1,-1]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-10<sup>9</sup>&nbsp;&lt;= nums[i]&nbsp;&lt;= 10<sup>9</sup></code></li>
	<li><code>nums</code> is a non-decreasing array.</li>
	<li><code>-10<sup>9</sup>&nbsp;&lt;= target&nbsp;&lt;= 10<sup>9</sup></code></li>
</ul>
</div>

---




```python
class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        l = 0
        r = len(nums)-1
        res = [-1, -1]
        if not nums: return res
        # first position
        while l <= r:
            mid = (l+r)//2
            if target < nums[mid]:
                r = mid - 1
            elif target > nums[mid]:
                l = mid + 1
            else:
                if mid == 0 or nums[mid-1] != target: 
                    res[0] = mid
                    break
                r = mid - 1
                
        # last position
        l = 0
        r = len(nums)-1
        while l <= r:
            mid = (l+r)//2
            if target < nums[mid]:
                r = mid - 1
            elif target > nums[mid]:
                l = mid + 1
            else:
                if mid == len(nums)-1 or nums[mid+1] != target: 
                    res[1] = mid
                    break
                l = mid + 1
                
        
        return res
```
