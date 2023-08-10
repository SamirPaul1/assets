---
title: maximum subarray
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, maximum-subarray solution
description: maximum subarray LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---


<h2>53. Maximum Subarray</h2><h3>Easy</h3><hr><div><p>Given an integer array <code>nums</code>, find the contiguous subarray (containing at least one number) which has the largest sum and return <em>its sum</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [-2,1,-3,4,-1,2,1,-5,4]
<strong>Output:</strong> 6
<strong>Explanation:</strong> [4,-1,2,1] has the largest sum = 6.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [1]
<strong>Output:</strong> 1
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [5,4,-1,7,8]
<strong>Output:</strong> 23
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code>-10<sup>5</sup> &lt;= nums[i] &lt;= 10<sup>5</sup></code></li>
</ul>

<p>&nbsp;</p>
<strong>Follow up:</strong> If you have figured out the <code>O(n)</code> solution, try coding another solution using the <strong>divide and conquer</strong> approach, which is more subtle.</div>

---




```cpp
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int neg=0;
        int maxi=INT_MIN, maxsf=0;
        for(int i=0;i<n;i++){
            maxsf+=nums[i];
            //if(nums[i]<0)
            //    neg++;
            
            maxi=max(maxi,maxsf);
            if(maxsf<0){
                maxsf=0;
            }
        }
        return maxi;
    }
};
```
