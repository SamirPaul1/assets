---
title: Find First And Last Position Of Element In Sorted Array
summary: Find First And Last Position Of Element In Sorted Array LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/find-first-and-last-position-of-element-in-sorted-array", "/blog/posts/find-first-and-last-position-of-element-in-sorted-array", "/find-first-and-last-position-of-element-in-sorted-array"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, find-first-and-last-position-of-element-in-sorted-array solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Find First And Last Position Of Element In Sorted Array/problem-solving.webp
    alt: Find First And Last Position Of Element In Sorted Array
    hiddenInList: true
    hiddenInSingle: false
---


<h2>34. Find First and Last Position of Element in Sorted Array</h2><h3>Medium</h3><hr><div><p>Given an array of integers <code>nums</code> sorted in ascending order, find the starting and ending position of a given <code>target</code> value.</p>

<p>If <code>target</code> is not found in the array, return <code>[-1, -1]</code>.</p>

<p><strong>Follow up:</strong>&nbsp;Could you write an algorithm with&nbsp;<code>O(log n)</code> runtime complexity?</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [5,7,7,8,8,10], target = 8
<strong>Output:</strong> [3,4]
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [5,7,7,8,8,10], target = 6
<strong>Output:</strong> [-1,-1]
</pre><p><strong>Example 3:</strong></p>
<pre><strong>Input:</strong> nums = [], target = 0
<strong>Output:</strong> [-1,-1]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-10<sup>9</sup>&nbsp;&lt;= nums[i]&nbsp;&lt;= 10<sup>9</sup></code></li>
	<li><code>nums</code> is a non-decreasing array.</li>
	<li><code>-10<sup>9</sup>&nbsp;&lt;= target&nbsp;&lt;= 10<sup>9</sup></code></li>
</ul>
</div>

---




```cpp
class Solution {
public:
    
    int lowerbound(vector<int>& nums, int target){
       int l=0,h=nums.size()-1;
       while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]<target)
                l=mid+1;
            else
                h=mid-1; 
       }
        return l;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> ans(2);
        ans[0]=-1;
        ans[1]=-1;
       int l=lowerbound(nums, target);
       int r=lowerbound(nums, target+1)-1;
       if(l<nums.size() && nums[l]==target){
            return {l,r};
        }
        return ans;
    }
};

```
