---
title: Subarray Sum Equals K
summary: Subarray Sum Equals K LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/subarray-sum-equals-k", "/blog/posts/subarray-sum-equals-k", "/subarray-sum-equals-k"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, subarray-sum-equals-k solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Subarray Sum Equals K/problem-solving.webp
    alt: Subarray Sum Equals K
    hiddenInList: true
    hiddenInSingle: false
---


<h2>560. Subarray Sum Equals K</h2><h3>Medium</h3><hr><div><p>Given an array of integers <code>nums</code> and an integer <code>k</code>, return <em>the total number of continuous subarrays whose sum equals to <code>k</code></em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [1,1,1], k = 2
<strong>Output:</strong> 2
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [1,2,3], k = 3
<strong>Output:</strong> 2
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 2 * 10<sup>4</sup></code></li>
	<li><code>-1000 &lt;= nums[i] &lt;= 1000</code></li>
	<li><code>-10<sup>7</sup> &lt;= k &lt;= 10<sup>7</sup></code></li>
</ul>
</div>

---




```cpp
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int> m;
        m[0]=1;
        int s=0,ans=0;
        for(int i=0;i<n;i++){
            s+=nums[i];
            if(m.find(s-k)!=m.end())
                ans+=m[s-k];
            m[s]++;
        }
        return ans;
    }
};

```
