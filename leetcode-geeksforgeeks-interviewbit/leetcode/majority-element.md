---
title: Majority Element
summary: Majority Element LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/majority-element", "/blog/posts/majority-element", "/majority-element"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, majority-element solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Majority Element/problem-solving.webp
    alt: Majority Element
    hiddenInList: true
    hiddenInSingle: false
---


<h2>169. Majority Element</h2><h3>Easy</h3><hr><div><p>Given an array <code>nums</code> of size <code>n</code>, return <em>the majority element</em>.</p>

<p>The majority element is the element that appears more than <code>⌊n / 2⌋</code> times. You may assume that the majority element always exists in the array.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [3,2,3]
<strong>Output:</strong> 3
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [2,2,1,1,1,2,2]
<strong>Output:</strong> 2
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == nums.length</code></li>
	<li><code>1 &lt;= n &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>-2<sup>31</sup> &lt;= nums[i] &lt;= 2<sup>31</sup> - 1</code></li>
</ul>

<p>&nbsp;</p>
<strong>Follow-up:</strong> Could you solve the problem in linear time and in <code>O(1)</code> space?</div>

---




```cpp
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=0;
        vector<int> v(32);
        int n=nums.size();
        for(int i=0;i<n;i++){
           for(int j=0;j<32;j++){
               if((1<<j) & nums[i])
                   v[j]++;
           }   
        }
        for(int j=0;j<32;j++){
           if(v[j]>(n/2))
               ans+=(1<<j);
        }
        return ans;
    }
};
```
