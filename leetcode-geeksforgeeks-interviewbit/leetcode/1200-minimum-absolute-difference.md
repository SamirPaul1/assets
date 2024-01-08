---
title: 1200 Minimum Absolute Difference
summary: 1200 Minimum Absolute Difference LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/1200-minimum-absolute-difference", "/blog/posts/1200-minimum-absolute-difference", "/1200-minimum-absolute-difference"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 1200-minimum-absolute-difference solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:1200 Minimum Absolute Difference/problem-solving.webp
    alt: 1200 Minimum Absolute Difference
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/minimum-absolute-difference/">1200. Minimum Absolute Difference</a></h2><h3>Easy</h3><hr><div><p>Given an array of <strong>distinct</strong> integers <code>arr</code>, find all pairs of elements with the minimum absolute difference of any two elements.</p>

<p>Return a list of pairs in ascending order(with respect to pairs), each pair <code>[a, b]</code> follows</p>

<ul>
	<li><code>a, b</code> are from <code>arr</code></li>
	<li><code>a &lt; b</code></li>
	<li><code>b - a</code> equals to the minimum absolute difference of any two elements in <code>arr</code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> arr = [4,2,1,3]
<strong>Output:</strong> [[1,2],[2,3],[3,4]]
<strong>Explanation: </strong>The minimum absolute difference is 1. List all pairs with difference equal to 1 in ascending order.</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> arr = [1,3,6,10,15]
<strong>Output:</strong> [[1,3]]
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> arr = [3,8,-10,23,19,-4,-14,27]
<strong>Output:</strong> [[-14,-10],[19,23],[23,27]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= arr.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-10<sup>6</sup> &lt;= arr[i] &lt;= 10<sup>6</sup></code></li>
</ul>
</div>

---




```python
class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        res = []
        arr.sort()
        mini = 2**31

        for i in range(1, len(arr)):
            mini = min(mini, arr[i] - arr[i-1])
        
        for i in range(1, len(arr)):
            if arr[i] - arr[i-1] == mini:
                res.append([arr[i-1], arr[i]])
                
        return res
```
