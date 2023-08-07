---
title: 962 maximum width ramp
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 962-maximum-width-ramp solution
description: 962 maximum width ramp LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---


<h2><a href="https://leetcode.com/problems/maximum-width-ramp/">962. Maximum Width Ramp</a></h2><h3>Medium</h3><hr><div><p>A <strong>ramp</strong> in an integer array <code>nums</code> is a pair <code>(i, j)</code> for which <code>i &lt; j</code> and <code>nums[i] &lt;= nums[j]</code>. The <strong>width</strong> of such a ramp is <code>j - i</code>.</p>

<p>Given an integer array <code>nums</code>, return <em>the maximum width of a <strong>ramp</strong> in </em><code>nums</code>. If there is no <strong>ramp</strong> in <code>nums</code>, return <code>0</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [6,0,8,2,1,5]
<strong>Output:</strong> 4
<strong>Explanation:</strong> The maximum width ramp is achieved at (i, j) = (1, 5): nums[1] = 0 and nums[5] = 5.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [9,8,1,0,1,9,4,0,4,1]
<strong>Output:</strong> 7
<strong>Explanation:</strong> The maximum width ramp is achieved at (i, j) = (2, 9): nums[2] = 1 and nums[9] = 1.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= nums.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>0 &lt;= nums[i] &lt;= 5 * 10<sup>4</sup></code></li>
</ul>
</div>

---




```python
class Solution:
    def maxWidthRamp(self, nums: List[int]) -> int:
        '''
        # Brute Force   # Time: O(N^2)
        res = 0
        for i in range(len(nums)):
            for j in range(i+1):
                if nums[i] >= nums[j]:
                    res = max(res, i-j)
                    break
                    
        return res
        '''
        
        
        '''
        # Method 1   # Time: O(N log(N))
        # Keep a decreasing stack.For each number, binary search the first smaller number in the stack. When the number is smaller the the last, push it into the stack.
        stack = []
        res = 0
        for i in range(len(nums)-1, -1, -1):
            if not stack or nums[stack[-1][1]] < nums[i]:
                stack.append([nums[i], i])
            else:
                j = stack[bisect.bisect(stack, [nums[i], i])][1]
                res = max(res, j - i)
        
        return res
        '''
        
        
        # Method 2   # Time: O(N)
        # make a stack in decreasing order
        stack = []
        res = 0
        for i in range(len(nums)):
            if not stack or nums[stack[-1]] > nums[i]:
                stack.append(i)
        
        # Now traverse from end and check. 
        # as we want max length so firstly popped element will give max length
        for i in range(len(nums)-1, -1, -1):
            while stack and nums[stack[-1]] <= nums[i]:
                res = max(res, i - stack.pop())
        
        return res
```
