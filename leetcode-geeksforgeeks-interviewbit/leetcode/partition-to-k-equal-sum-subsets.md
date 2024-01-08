---
title: Partition To K Equal Sum Subsets
summary: Partition To K Equal Sum Subsets LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/partition-to-k-equal-sum-subsets", "/blog/posts/partition-to-k-equal-sum-subsets", "/partition-to-k-equal-sum-subsets"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, partition-to-k-equal-sum-subsets solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Partition To K Equal Sum Subsets/problem-solving.webp
    alt: Partition To K Equal Sum Subsets
    hiddenInList: true
    hiddenInSingle: false
---


<h2>698. Partition to K Equal Sum Subsets</h2><h3>Medium</h3><hr><div><p>Given an array of integers <code>nums</code> and a positive integer <code>k</code>, find whether it's possible to divide this array into <code>k</code> non-empty subsets whose sums are all equal.</p>

<p>&nbsp;</p>

<p><b>Example 1:</b></p>

<pre><b>Input:</b> nums = [4, 3, 2, 3, 5, 2, 1], k = 4
<b>Output:</b> True
<b>Explanation:</b> It's possible to divide it into 4 subsets (5), (1, 4), (2,3), (2,3) with equal sums.
</pre>

<p>&nbsp;</p>

<p><b>Note:</b></p>

<ul>
	<li><code>1 &lt;= k &lt;= len(nums) &lt;= 16</code>.</li>
	<li><code>0 &lt; nums[i] &lt; 10000</code>.</li>
</ul>
</div>

---




```cpp
class Solution {
public:
    bool used[17];
    
    bool solve(int idx, int currsum, vector<int>& nums, int k, int onesum, int n){
        if(k==1)
            return true;
        if(currsum>onesum)
            return false;
        if(currsum==onesum)
            return solve(0, 0, nums, k-1, onesum, n);
        for(int i=idx; i<n;i++){
            if(!used[i])
            {
                used[i]=true;
                if(solve(idx+1, currsum+nums[i], nums, k, onesum, n))
                    return true;
                used[i]=false;
            }
        }
        return false;
    }
    
    
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i++){
           s+=nums[i]; 
        }
        if(k==0 || s%k!=0)
            return false;
        return solve(0, 0, nums, k, s/k, n);
    }
};

```
