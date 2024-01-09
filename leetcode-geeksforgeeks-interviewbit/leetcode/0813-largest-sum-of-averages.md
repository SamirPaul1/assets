---
title: 0813 Largest Sum Of Averages
summary: 0813 Largest Sum Of Averages LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "0813-largest-sum-of-averages LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:0813 Largest Sum Of Averages - Solution Explained/problem-solving.webp
    alt: 0813 Largest Sum Of Averages
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/largest-sum-of-averages/">813. Largest Sum of Averages</a></h2><h3>Medium</h3><hr><div><p>You are given an integer array <code>nums</code> and an integer <code>k</code>. You can partition the array into <strong>at most</strong> <code>k</code> non-empty adjacent subarrays. The <strong>score</strong> of a partition is the sum of the averages of each subarray.</p>

<p>Note that the partition must use every integer in <code>nums</code>, and that the score is not necessarily an integer.</p>

<p>Return <em>the maximum <strong>score</strong> you can achieve of all the possible partitions</em>. Answers within <code>10<sup>-6</sup></code> of the actual answer will be accepted.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [9,1,2,3,9], k = 3
<strong>Output:</strong> 20.00000
<strong>Explanation:</strong> 
The best choice is to partition nums into [9], [1, 2, 3], [9]. The answer is 9 + (1 + 2 + 3) / 3 + 9 = 20.
We could have also partitioned nums into [9, 1], [2], [3, 9], for example.
That partition would lead to a score of 5 + 2 + 6 = 13, which is worse.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,3,4,5,6,7], k = 4
<strong>Output:</strong> 20.50000
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
	<li><code>1 &lt;= k &lt;= nums.length</code></li>
</ul>
</div>

---




```python
class Solution:
    def largestSumOfAverages(self, nums: List[int], k: int) -> float:
        dp = [[-1] * (k+1) for i in range(len(nums))]
        
        def dfs(i, k):
            if i >= len(nums) or k < 0: return 0
            if k == 0: return -2**31
            if dp[i][k] != -1: return dp[i][k]
            ans = 0
            s = 0
            for j in range(i, len(nums)):
                s += nums[j]
                ans = max(ans, s/(j-i+1) + dfs(j+1, k-1))
            dp[i][k] = ans
            return ans
        
        return dfs(0, k)
    
    
# Time: O(N * K)
# Space: O(N * K)
```
