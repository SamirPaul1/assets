---
title: 823 Binary Trees With Factors
summary: 823 Binary Trees With Factors LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/823-binary-trees-with-factors", "/blog/posts/823-binary-trees-with-factors", "/823-binary-trees-with-factors"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 823-binary-trees-with-factors solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:823 Binary Trees With Factors/problem-solving.webp
    alt: 823 Binary Trees With Factors
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/binary-trees-with-factors/">823. Binary Trees With Factors</a></h2><h3>Medium</h3><hr><div><p>Given an array of unique integers, <code>arr</code>, where each integer <code>arr[i]</code> is strictly greater than <code>1</code>.</p>

<p>We make a binary tree using these integers, and each number may be used for any number of times. Each non-leaf node's value should be equal to the product of the values of its children.</p>

<p>Return <em>the number of binary trees we can make</em>. The answer may be too large so return the answer <strong>modulo</strong> <code>10<sup>9</sup> + 7</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> arr = [2,4]
<strong>Output:</strong> 3
<strong>Explanation:</strong> We can make these trees: <code>[2], [4], [4, 2, 2]</code></pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> arr = [2,4,5,10]
<strong>Output:</strong> 7
<strong>Explanation:</strong> We can make these trees: <code>[2], [4], [5], [10], [4, 2, 2], [10, 2, 5], [10, 5, 2]</code>.</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= arr.length &lt;= 1000</code></li>
	<li><code>2 &lt;= arr[i] &lt;= 10<sup>9</sup></code></li>
	<li>All the values of <code>arr</code> are <strong>unique</strong>.</li>
</ul>
</div>

---




```python
'''
class Solution:
    def numFactoredBinaryTrees(self, arr: List[int]) -> int:
        arr.sort()
        countDict = {ch:1 for ch in arr}
        res = 0
        for i in range(len(arr)):
            l, r = 0, i-1
            tmp = countDict[arr[i]]
            while l <= r:
                p = arr[l] * arr[r]
                if p > arr[i]:
                    r -= 1
                elif p < arr[i]:
                    l += 1
                else:
                    if arr[l] != arr[r]: 
                        tmp += 2 * countDict[arr[l]] * countDict[arr[r]]
                    else:
                        tmp += countDict[arr[l]] * countDict[arr[r]]
                    l += 1
                    r -= 1
                    
            countDict[arr[i]] = tmp
            res += tmp
            res = res % (10**9 + 7)
        
        return res
    
# Time: O(N^2)
# Space: O(N)
'''


class Solution:
    def numFactoredBinaryTrees(self, arr: List[int]) -> int:
        arr.sort()
        MOD = 10**9 + 7
        dp = {}
        for i, ch in enumerate(arr):
            dp[ch] = 1
            for j in range(i):
                if ch % arr[j] == 0 and (ch // arr[j]) in dp:
                    dp[ch] += dp[arr[j]] * dp[ch // arr[j]]
                    dp[ch] %= MOD
        
        return sum(dp.values()) % MOD
    
# Time: O(N^2)
# Space: O(N)
```
