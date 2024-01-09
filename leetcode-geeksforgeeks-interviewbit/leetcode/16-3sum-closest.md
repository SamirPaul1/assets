---
title: 16 3Sum Closest
summary: 16 3Sum Closest LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "16-3sum-closest LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:16 3Sum Closest - Solution Explained/problem-solving.webp
    alt: 16 3Sum Closest
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/3sum-closest/">16. 3Sum Closest</a></h2><h3>Medium</h3><hr><div><p>Given an integer array <code>nums</code> of length <code>n</code> and an integer <code>target</code>, find three integers in <code>nums</code> such that the sum is closest to <code>target</code>.</p>

<p>Return <em>the sum of the three integers</em>.</p>

<p>You may assume that each input would have exactly one solution.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [-1,2,1,-4], target = 1
<strong>Output:</strong> 2
<strong>Explanation:</strong> The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [0,0,0], target = 1
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>3 &lt;= nums.length &lt;= 1000</code></li>
	<li><code>-1000 &lt;= nums[i] &lt;= 1000</code></li>
	<li><code>-10<sup>4</sup> &lt;= target &lt;= 10<sup>4</sup></code></li>
</ul>
</div>

---




```python
class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        ans = None
        prevDiff = float("inf")
        for i in range(len(nums)):
            if i > 0 and nums[i] == nums[i - 1]: continue # if two consecutive elelments are same then for the first same nums[i] < l < r one res if added. so no need to add same repeted res.
            l, r = i + 1, len(nums) - 1
            while l < r:
                threeSum = nums[i] + nums[l] + nums[r]
                if abs(target - threeSum) < prevDiff: 
                    ans = threeSum
                    prevDiff = abs(target - threeSum)
                if threeSum < target: l += 1
                elif threeSum > target: r -= 1
                else: return threeSum
        
        return ans
                
```
