---
title: Maximum Gap
summary: Maximum Gap LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/maximum-gap", "/blog/posts/maximum-gap", "/maximum-gap"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, maximum-gap solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Maximum Gap/problem-solving.webp
    alt: Maximum Gap
    hiddenInList: true
    hiddenInSingle: false
---


<h2>164. Maximum Gap</h2><h3>Hard</h3><hr><div><p>Given an integer array <code>nums</code>, return <em>the maximum difference between two successive elements in its sorted form</em>. If the array contains less than two elements, return <code>0</code>.</p>

<p>You must write an algorithm that runs in linear time and uses linear extra space.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [3,6,9,1]
<strong>Output:</strong> 3
<strong>Explanation:</strong> The sorted form of the array is [1,3,6,9], either (3,6) or (6,9) has the maximum difference 3.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [10]
<strong>Output:</strong> 0
<strong>Explanation:</strong> The array contains less than 2 elements, therefore return 0.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code>0 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
</ul>
</div>

---




```cpp
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        map<int,int> m;
        for(auto v: nums)
            m[v]++;
        vector<int> a;
        int ans=0;
        for(auto it: m){
            while(it.second--){
                a.push_back(it.first);
            }
        }
        for(int i=0;i<nums.size()-1;i++){
            ans=max(ans, abs(a[i]-a[i+1]));
        }
        return ans;
    }
};
```
