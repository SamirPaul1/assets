---
title: 1980 Find Unique Binary String
summary: 1980 Find Unique Binary String LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/1980-find-unique-binary-string", "/blog/posts/1980-find-unique-binary-string", "/1980-find-unique-binary-string"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 1980-find-unique-binary-string solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:1980 Find Unique Binary String/problem-solving.webp
    alt: 1980 Find Unique Binary String
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/find-unique-binary-string/">1980. Find Unique Binary String</a></h2><h3>Medium</h3><hr><div><p>Given an array of strings <code>nums</code> containing <code>n</code> <strong>unique</strong> binary strings each of length <code>n</code>, return <em>a binary string of length </em><code>n</code><em> that <strong>does not appear</strong> in </em><code>nums</code><em>. If there are multiple answers, you may return <strong>any</strong> of them</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = ["01","10"]
<strong>Output:</strong> "11"
<strong>Explanation:</strong> "11" does not appear in nums. "00" would also be correct.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = ["00","01"]
<strong>Output:</strong> "11"
<strong>Explanation:</strong> "11" does not appear in nums. "10" would also be correct.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> nums = ["111","011","001"]
<strong>Output:</strong> "101"
<strong>Explanation:</strong> "101" does not appear in nums. "000", "010", "100", and "110" would also be correct.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == nums.length</code></li>
	<li><code>1 &lt;= n &lt;= 16</code></li>
	<li><code>nums[i].length == n</code></li>
	<li><code>nums[i] </code>is either <code>'0'</code> or <code>'1'</code>.</li>
	<li>All the strings of <code>nums</code> are <strong>unique</strong>.</li>
</ul>
</div>

---




```python
class Solution:
    def findDifferentBinaryString(self, nums: List[str]) -> str:
        n = len(nums[0])
        numset = set([int(i, 2) for i in nums])
        for i in range(2**n):
            if i not in numset: 
                res = bin(i)[2:]
                return '0' * (n - len(res)) + res
```
