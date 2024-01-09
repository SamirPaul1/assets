---
title: Single Element In A Sorted Array
summary: Single Element In A Sorted Array LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "single-element-in-a-sorted-array LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Single Element In A Sorted Array - Solution Explained/problem-solving.webp
    alt: Single Element In A Sorted Array
    hiddenInList: true
    hiddenInSingle: false
---


<h2>540. Single Element in a Sorted Array</h2><h3>Medium</h3><hr><div><p>You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly&nbsp;once. Find this single element that appears only once.</p>

<p><b>Follow up:</b> Your solution should run in O(log n) time and O(1) space.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [1,1,2,3,3,4,4,8,8]
<strong>Output:</strong> 2
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [3,3,7,7,10,11,11]
<strong>Output:</strong> 10
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10^5</code></li>
	<li><code>0 &lt;= nums[i]&nbsp;&lt;= 10^5</code></li>
</ul>
</div>

---




```cpp
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        int l=0, r=n-2;
        int ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==nums[mid^1])  
                l=mid+1;
            else
                r=mid-1;
        }
        return nums[l];
    }
};
```
