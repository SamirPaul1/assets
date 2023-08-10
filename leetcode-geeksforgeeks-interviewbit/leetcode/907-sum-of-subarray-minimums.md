---
title: 907 sum of subarray minimums
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 907-sum-of-subarray-minimums solution
description: 907 sum of subarray minimums LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---


<h2><a href="https://leetcode.com/problems/sum-of-subarray-minimums/">907. Sum of Subarray Minimums</a></h2><h3>Medium</h3><hr><div><p>Given an array of integers arr, find the sum of <code>min(b)</code>, where <code>b</code> ranges over every (contiguous) subarray of <code>arr</code>. Since the answer may be large, return the answer <strong>modulo</strong> <code>10<sup>9</sup> + 7</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> arr = [3,1,2,4]
<strong>Output:</strong> 17
<strong>Explanation:</strong> 
Subarrays are [3], [1], [2], [4], [3,1], [1,2], [2,4], [3,1,2], [1,2,4], [3,1,2,4]. 
Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1.
Sum is 17.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> arr = [11,81,94,43,3]
<strong>Output:</strong> 444
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= arr.length &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code>1 &lt;= arr[i] &lt;= 3 * 10<sup>4</sup></code></li>
</ul>
</div>

---




```python
class Solution:
    def sumSubarrayMins(self, arr: List[int]) -> int:
        ''' Brute Force
        n = len(arr)
        res = 0
        
        for i in range(n):
            mini = arr[i]
            for j in range(i, n):
                mini = min(mini, arr[j])
                res += mini
        
        return res % (10**9 + 7)
    
# Time: O(n^2)
# Space: O(1)
'''
        # Optimal approach => similar to Rain Water Trap problem
        # make left boundary => it defines number of left subarrays in which the current element is minimum
        lb = []; stack = [] # (cur, curCount)
        for cur in arr:
            curCount = 1
            while stack and stack[-1][0] > cur:
                peak = stack.pop()
                curCount += peak[1]
            stack.append((cur, curCount))
            lb.append(curCount)
        
        # make right boundary => it defiens number of right subarrays in which the current element if minimum
        rb = []
        stack = []
        for cur in arr[::-1]:
            curCount = 1
            while stack and stack[-1][0] >= cur:
                peak = stack.pop()
                curCount += peak[1]
            stack.append((cur, curCount))
            rb.append(curCount)
        rb.reverse()
        res = 0
        for i in range(len(arr)):
            res += arr[i] * lb[i] * rb[i]
        
        return res % (10**9 + 7)
```
