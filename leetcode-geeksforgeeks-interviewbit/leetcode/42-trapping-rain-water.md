---
title: 42 Trapping Rain Water
summary: 42 Trapping Rain Water LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/42-trapping-rain-water", "/blog/posts/42-trapping-rain-water", "/42-trapping-rain-water"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 42-trapping-rain-water solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:42 Trapping Rain Water/problem-solving.webp
    alt: 42 Trapping Rain Water
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/trapping-rain-water/">42. Trapping Rain Water</a></h2><h3>Hard</h3><hr><div><p>Given <code>n</code> non-negative integers representing an elevation map where the width of each bar is <code>1</code>, compute how much water it can trap after raining.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img src="https://assets.leetcode.com/uploads/2018/10/22/rainwatertrap.png" style="width: 412px; height: 161px;">
<pre><strong>Input:</strong> height = [0,1,0,2,1,0,1,3,2,1,2,1]
<strong>Output:</strong> 6
<strong>Explanation:</strong> The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> height = [4,2,0,3,2,5]
<strong>Output:</strong> 9
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == height.length</code></li>
	<li><code>1 &lt;= n &lt;= 2 * 10<sup>4</sup></code></li>
	<li><code>0 &lt;= height[i] &lt;= 10<sup>5</sup></code></li>
</ul>
</div>

---




```python
class Solution:
    def trap(self, height: List[int]) -> int:
        l = 0; r = len(height)-1
        res = 0
        lMax = height[0]
        rMax = height[r]
        
        while l < r:
            lMax = max(lMax, height[l])
            rMax = max(rMax, height[r])
            
            if height[l] < height[r]:
                res += min(lMax, rMax) - height[l]
                l += 1
            else:
                res += min(lMax, rMax) - height[r]
                r -= 1
        
        return res
```
