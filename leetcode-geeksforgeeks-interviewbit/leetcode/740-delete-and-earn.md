---
title: 740 Delete And Earn
summary: 740 Delete And Earn LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/740-delete-and-earn", "/blog/posts/740-delete-and-earn", "/740-delete-and-earn"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 740-delete-and-earn solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:740 Delete And Earn/problem-solving.webp
    alt: 740 Delete And Earn
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/delete-and-earn/">740. Delete and Earn</a></h2><h3>Medium</h3><hr><div><p>You are given an integer array <code>nums</code>. You want to maximize the number of points you get by performing the following operation any number of times:</p>

<ul>
	<li>Pick any <code>nums[i]</code> and delete it to earn <code>nums[i]</code> points. Afterwards, you must delete <b>every</b> element equal to <code>nums[i] - 1</code> and <strong>every</strong> element equal to <code>nums[i] + 1</code>.</li>
</ul>

<p>Return <em>the <strong>maximum number of points</strong> you can earn by applying the above operation some number of times</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [3,4,2]
<strong>Output:</strong> 6
<strong>Explanation:</strong> You can perform the following operations:
- Delete 4 to earn 4 points. Consequently, 3 is also deleted. nums = [2].
- Delete 2 to earn 2 points. nums = [].
You earn a total of 6 points.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [2,2,3,3,3,4]
<strong>Output:</strong> 9
<strong>Explanation:</strong> You can perform the following operations:
- Delete a 3 to earn 3 points. All 2's and 4's are also deleted. nums = [3,3].
- Delete a 3 again to earn 3 points. nums = [3].
- Delete a 3 once more to earn 3 points. nums = [].
You earn a total of 9 points.</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 2 * 10<sup>4</sup></code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
</ul>
</div>

---




```python
class Solution:
    def deleteAndEarn(self, nums: List[int]) -> int:
        if not nums: return 0
        
        arr = [0]*(max(nums)+1)
        
        for i in nums:
            arr[i] += i
        
        dp = [0]*(len(arr))
        
        for i in range(len(arr)):
            if i == 0:
                dp[i] =  0
            elif i == 1:
                dp[i] = max(arr[i], dp[i-1])
            else:
                dp[i] = max(arr[i] + dp[i-2], dp[i-1])
        
        return dp[-1]
```
