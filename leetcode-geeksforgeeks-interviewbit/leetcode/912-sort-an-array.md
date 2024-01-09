---
title: 912 Sort An Array
summary: 912 Sort An Array LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "912-sort-an-array LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:912 Sort An Array - Solution Explained/problem-solving.webp
    alt: 912 Sort An Array
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/sort-an-array/">912. Sort an Array</a></h2><h3>Medium</h3><hr><div><p>Given an array of integers <code>nums</code>, sort the array in ascending order.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [5,2,3,1]
<strong>Output:</strong> [1,2,3,5]
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [5,1,1,2,0,0]
<strong>Output:</strong> [0,0,1,1,2,5]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>-5 * 10<sup>4</sup> &lt;= nums[i] &lt;= 5 * 10<sup>4</sup></code></li>
</ul>
</div>

---




```python
class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:
        if len(nums) <= 1: return nums
        l = 0; r = len(nums)
        mid = l + (r - l) // 2
        left = self.sortArray(nums[:mid])
        right = self.sortArray(nums[mid:])
        return self.mergeSortedArrays(left, right)
    
    def mergeSortedArrays(self, a, b):
        if not a or not b: return b or a
        arr = []
        i = j = 0
        while i < len(a) and j < len(b):
            if a[i] <= b[j]:
                arr.append(a[i])
                i += 1
            else:
                arr.append(b[j])
                j += 1
        while i < len(a):
            arr.append(a[i])
            i += 1
        while j < len(b):
            arr.append(b[j])
            j += 1
        return arr
```
