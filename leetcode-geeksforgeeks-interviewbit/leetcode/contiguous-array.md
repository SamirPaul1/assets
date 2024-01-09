---
title: Contiguous Array
summary: Contiguous Array LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "contiguous-array LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Contiguous Array - Solution Explained/problem-solving.webp
    alt: Contiguous Array
    hiddenInList: true
    hiddenInSingle: false
---


<h2>525. Contiguous Array</h2><h3>Medium</h3><hr><div><p>Given a binary array, find the maximum length of a contiguous subarray with equal number of 0 and 1. </p>


<p><b>Example 1:</b><br>
</p><pre><b>Input:</b> [0,1]
<b>Output:</b> 2
<b>Explanation:</b> [0, 1] is the longest contiguous subarray with equal number of 0 and 1.
</pre>
<p></p>

<p><b>Example 2:</b><br>
</p><pre><b>Input:</b> [0,1,0]
<b>Output:</b> 2
<b>Explanation:</b> [0, 1] (or [1, 0]) is a longest contiguous subarray with equal number of 0 and 1.
</pre>
<p></p>

<p><b>Note:</b>
The length of the given binary array will not exceed 50,000.
</p></div>

---




```cpp
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> m;
        int s=0;
        int l=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                s+=-1;
            else
                s+=1;
            if(s==0)
                l=i+1;
            if(m.find(s)!=m.end())
                l=max(i-m[s], l);
            else
                m[s]=i;
        }
        return l;
    }
};
```
