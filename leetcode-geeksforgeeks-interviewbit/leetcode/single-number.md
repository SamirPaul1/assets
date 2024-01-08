---
title: Single Number
summary: Single Number LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/single-number", "/blog/posts/single-number", "/single-number"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, single-number solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Single Number/problem-solving.webp
    alt: Single Number
    hiddenInList: true
    hiddenInSingle: false
---


<h2>136. Single Number</h2><h3>Easy</h3><hr><div><p>Given a <strong>non-empty</strong>&nbsp;array of integers <code>nums</code>, every element appears <em>twice</em> except for one. Find that single one.</p>

<p><strong>Follow up:</strong>&nbsp;Could you implement a solution with a linear runtime complexity and without using extra memory?</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [2,2,1]
<strong>Output:</strong> 1
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [4,1,2,1,2]
<strong>Output:</strong> 4
</pre><p><strong>Example 3:</strong></p>
<pre><strong>Input:</strong> nums = [1]
<strong>Output:</strong> 1
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code>-3 * 10<sup>4</sup> &lt;= nums[i] &lt;= 3 * 10<sup>4</sup></code></li>
	<li>Each element in the array appears twice except for one element which appears only once.</li>
</ul>
</div>

---




```cpp
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(auto i: nums)
            ans^=i;
        return ans;
    }
};
```
