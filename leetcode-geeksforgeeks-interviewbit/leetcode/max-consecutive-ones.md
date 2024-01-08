---
title: Max Consecutive Ones
summary: Max Consecutive Ones LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/max-consecutive-ones", "/blog/posts/max-consecutive-ones", "/max-consecutive-ones"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, max-consecutive-ones solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Max Consecutive Ones/problem-solving.webp
    alt: Max Consecutive Ones
    hiddenInList: true
    hiddenInSingle: false
---


<h2>485. Max Consecutive Ones</h2><h3>Easy</h3><hr><div><p>Given a binary array <code>nums</code>, return <em>the maximum number of consecutive </em><code>1</code><em>'s in the array</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,1,0,1,1,1]
<strong>Output:</strong> 3
<strong>Explanation:</strong> The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [1,0,1,1,0,1]
<strong>Output:</strong> 2
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>nums[i]</code> is either <code>0</code> or <code>1</code>.</li>
</ul>
</div>

---




```cpp
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0, maxi=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1)
                maxi++;
            else{
                ans=max(ans,maxi);
                maxi=0;
            }
        }
        ans=max(ans,maxi);
        return ans;
    }
};
```
