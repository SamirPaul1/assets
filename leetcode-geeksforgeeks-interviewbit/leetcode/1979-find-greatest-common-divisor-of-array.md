---
title: 1979 Find Greatest Common Divisor Of Array
summary: 1979 Find Greatest Common Divisor Of Array LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "1979-find-greatest-common-divisor-of-array LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:1979 Find Greatest Common Divisor Of Array - Solution Explained/problem-solving.webp
    alt: 1979 Find Greatest Common Divisor Of Array
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/find-greatest-common-divisor-of-array/">1979. Find Greatest Common Divisor of Array</a></h2><h3>Easy</h3><hr><div><p>Given an integer array <code>nums</code>, return<strong> </strong><em>the <strong>greatest common divisor</strong> of the smallest number and largest number in </em><code>nums</code>.</p>

<p>The <strong>greatest common divisor</strong> of two numbers is the largest positive integer that evenly divides both numbers.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [2,5,6,9,10]
<strong>Output:</strong> 2
<strong>Explanation:</strong>
The smallest number in nums is 2.
The largest number in nums is 10.
The greatest common divisor of 2 and 10 is 2.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [7,5,6,8,3]
<strong>Output:</strong> 1
<strong>Explanation:</strong>
The smallest number in nums is 3.
The largest number in nums is 8.
The greatest common divisor of 3 and 8 is 1.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [3,3]
<strong>Output:</strong> 3
<strong>Explanation:</strong>
The smallest number in nums is 3.
The largest number in nums is 3.
The greatest common divisor of 3 and 3 is 3.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= nums.length &lt;= 1000</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 1000</code></li>
</ul>
</div>

---




```python
class Solution:
    
    def findGCD(self, nums: List[int]) -> int:
        a = max(nums)
        b = min(nums)
        
        dp = [[-1]*(a + 1) for i in range(a + 1)]
        def gcd(a, b):
            if a == 0 : return b
            if b == 0: return a
            if a == b: return a
            if dp[a][b] != -1: return dp[a][b]
            if a < b: 
                dp[a][b] = gcd(a, b-a)
            else:
                dp[a][b] = gcd(b, a-b)
            
            return dp[a][b]
        
        
        return gcd(a, b)
```
