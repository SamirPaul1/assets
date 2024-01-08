---
title: Divide Array In Sets Of K Consecutive Numbers
summary: Divide Array In Sets Of K Consecutive Numbers LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/divide-array-in-sets-of-k-consecutive-numbers", "/blog/posts/divide-array-in-sets-of-k-consecutive-numbers", "/divide-array-in-sets-of-k-consecutive-numbers"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, divide-array-in-sets-of-k-consecutive-numbers solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Divide Array In Sets Of K Consecutive Numbers/problem-solving.webp
    alt: Divide Array In Sets Of K Consecutive Numbers
    hiddenInList: true
    hiddenInSingle: false
---


<h2>1296. Divide Array in Sets of K Consecutive Numbers</h2><h3>Medium</h3><hr><div><p>Given an array of integers <code>nums</code> and a positive integer <code>k</code>, find whether it's possible to divide this array into sets of <code>k</code> consecutive numbers<br>
Return <code>True</code> if it is possible.<strong> </strong>Otherwise, return <code>False</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,3,3,4,4,5,6], k = 4
<strong>Output:</strong> true
<strong>Explanation:</strong> Array can be divided into [1,2,3,4] and [3,4,5,6].
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [3,2,1,2,3,4,3,4,5,9,10,11], k = 3
<strong>Output:</strong> true
<strong>Explanation:</strong> Array can be divided into [1,2,3] , [2,3,4] , [3,4,5] and [9,10,11].
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [3,3,2,2,1,1], k = 3
<strong>Output:</strong> true
</pre>

<p><strong>Example 4:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,3,4], k = 3
<strong>Output:</strong> false
<strong>Explanation:</strong> Each array should be divided in subarrays of size 3.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= k &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
</ul>

<p>&nbsp;</p>
<strong>Note:</strong> This question is the same as&nbsp;846:&nbsp;<a href="https://leetcode.com/problems/hand-of-straights/" target="_blank">https://leetcode.com/problems/hand-of-straights/</a></div>

---




```cpp
class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n=nums.size();
        if(n%k!=0)
            return false;
        map<int,int> m;
        for(auto i: nums)
            m[i]++;
        for(auto i: m){
            if(i.second){
                int x=i.second;
                for(int j=1;j<k;j++){
                    if(m[i.first+j]<x)
                        return false;
                    else
                        m[i.first+j]-=x;
                }
            }
        }
        return true;
    }
};
```
