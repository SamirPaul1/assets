---
title: 611 Valid Triangle Number
summary: 611 Valid Triangle Number LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/611-valid-triangle-number", "/blog/posts/611-valid-triangle-number", "/611-valid-triangle-number"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 611-valid-triangle-number solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:611 Valid Triangle Number/problem-solving.webp
    alt: 611 Valid Triangle Number
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/valid-triangle-number/">611. Valid Triangle Number</a></h2><h3>Medium</h3><hr><div><p>Given an integer array <code>nums</code>, return <em>the number of triplets chosen from the array that can make triangles if we take them as side lengths of a triangle</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [2,2,3,4]
<strong>Output:</strong> 3
<strong>Explanation:</strong> Valid combinations are: 
2,3,4 (using the first 2)
2,3,4 (using the second 2)
2,2,3
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [4,2,3,4]
<strong>Output:</strong> 4
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 1000</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 1000</code></li>
</ul>
</div>

---




```python
# https://leetcode.com/problems/valid-triangle-number/
# https://youtu.be/PqEiJDdt3S4
class Solution:
    def triangleNumber(self, nums: List[int]) -> int:
        nums.sort()
        res = 0
        
        for i in range(len(nums)-1, 1, -1):
            r = i - 1
            l = 0
            while l < r:
                if nums[l] + nums[r] > nums[i]:
                    res += (r - l)
                    r -= 1
                else:
                    l += 1
        
        return res

# Time: O(N^2)
# Space: O(1)

```
