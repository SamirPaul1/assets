---
title: 33 Search In Rotated Sorted Array
summary: 33 Search In Rotated Sorted Array LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/33-search-in-rotated-sorted-array", "/blog/posts/33-search-in-rotated-sorted-array", "/33-search-in-rotated-sorted-array"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 33-search-in-rotated-sorted-array solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:33 Search In Rotated Sorted Array/problem-solving.webp
    alt: 33 Search In Rotated Sorted Array
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/search-in-rotated-sorted-array/">33. Search in Rotated Sorted Array</a></h2><h3>Medium</h3><hr><div><p>There is an integer array <code>nums</code> sorted in ascending order (with <strong>distinct</strong> values).</p>

<p>Prior to being passed to your function, <code>nums</code> is <strong>possibly rotated</strong> at an unknown pivot index <code>k</code> (<code>1 &lt;= k &lt; nums.length</code>) such that the resulting array is <code>[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]</code> (<strong>0-indexed</strong>). For example, <code>[0,1,2,4,5,6,7]</code> might be rotated at pivot index <code>3</code> and become <code>[4,5,6,7,0,1,2]</code>.</p>

<p>Given the array <code>nums</code> <strong>after</strong> the possible rotation and an integer <code>target</code>, return <em>the index of </em><code>target</code><em> if it is in </em><code>nums</code><em>, or </em><code>-1</code><em> if it is not in </em><code>nums</code>.</p>

<p>You must write an algorithm with <code>O(log n)</code> runtime complexity.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [4,5,6,7,0,1,2], target = 0
<strong>Output:</strong> 4
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [4,5,6,7,0,1,2], target = 3
<strong>Output:</strong> -1
</pre><p><strong>Example 3:</strong></p>
<pre><strong>Input:</strong> nums = [1], target = 0
<strong>Output:</strong> -1
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 5000</code></li>
	<li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
	<li>All values of <code>nums</code> are <strong>unique</strong>.</li>
	<li><code>nums</code> is an ascending array that is possibly rotated.</li>
	<li><code>-10<sup>4</sup> &lt;= target &lt;= 10<sup>4</sup></code></li>
</ul>
</div>

---




```python
class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l = 0; r = len(nums)-1
        
        while l <= r:
            mid = (l + r) // 2
            
            if nums[mid] == target: return mid
            
            if nums[l] <= nums[mid]:       # Left subarray of mid is sorted
                if nums[l] <= target < nums[mid]:  # target present at Left subarray of mid 
                    r = mid - 1
                else:                      # target at right subarray of mid
                    l = mid + 1
                    
            else:                          # right subarray of mid is sorted
                if nums[mid] < target <= nums[r]:  # target is present at right subarray of mid
                    l = mid + 1            
                else:                      # target at left subarray of mid
                    r = mid - 1
        
        return -1  # target is not present in nums
```
