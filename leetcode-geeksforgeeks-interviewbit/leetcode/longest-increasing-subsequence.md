---
title: longest increasing subsequence
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, longest-increasing-subsequence solution
description: longest increasing subsequence LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---


<h2>300. Longest Increasing Subsequence</h2><h3>Medium</h3><hr><div><p>Given an integer array <code>nums</code>, return the length of the longest strictly increasing subsequence.</p>

<p>A <strong>subsequence</strong> is a sequence that can be derived from an array by deleting some or no elements without changing the order of the remaining elements. For example, <code>[3,6,2,7]</code> is a subsequence of the array <code>[0,3,1,6,2,2,7]</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [10,9,2,5,3,7,101,18]
<strong>Output:</strong> 4
<strong>Explanation:</strong> The longest increasing subsequence is [2,3,7,101], therefore the length is 4.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [0,1,0,3,2,3]
<strong>Output:</strong> 4
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [7,7,7,7,7,7,7]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 2500</code></li>
	<li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
</ul>

<p>&nbsp;</p>
<p><b>Follow up:</b></p>

<ul>
	<li>Could you come up with the <code>O(n<sup>2</sup>)</code> solution?</li>
	<li>Could you improve it to <code>O(n log(n))</code> time complexity?</li>
</ul>
</div>

---




```cpp
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int dp[n];
        for(int i=0;i<n;i++)
            dp[i]=1;
        if(n==1)
            return 1;
        for(int i=1;i<n;i++){
            for(int j=0;j<=i;j++){
                if(nums[j]<nums[i] && dp[i]<dp[j]+1)
                    dp[i]=dp[j]+1;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
            ans=max(ans,dp[i]);
        return ans;
    }
};
```
