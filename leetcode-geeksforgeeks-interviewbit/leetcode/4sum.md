---
title: 4Sum
summary: 4Sum LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/4sum", "/blog/posts/4sum", "/4sum"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 4sum solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:4Sum/problem-solving.webp
    alt: 4Sum
    hiddenInList: true
    hiddenInSingle: false
---


<h2>18. 4Sum</h2><h3>Medium</h3><hr><div><p>Given an array <code>nums</code> of <code>n</code> integers, return <em>an array of all the <strong>unique</strong> quadruplets</em> <code>[nums[a], nums[b], nums[c], nums[d]]</code> such that:</p>

<ul>
	<li><code>0 &lt;= a, b, c, d&nbsp;&lt; n</code></li>
	<li><code>a</code>, <code>b</code>, <code>c</code>, and <code>d</code> are <strong>distinct</strong>.</li>
	<li><code>nums[a] + nums[b] + nums[c] + nums[d] == target</code></li>
</ul>

<p>You may return the answer in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,0,-1,0,-2,2], target = 0
<strong>Output:</strong> [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [2,2,2,2,2], target = 8
<strong>Output:</strong> [[2,2,2,2]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 200</code></li>
	<li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= target &lt;= 10<sup>9</sup></code></li>
</ul>
</div>

---




```cpp
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int t) {
       int n=a.size();
        sort(a.begin(), a.end());
        vector<vector<int>> ans;
        if(n<4)
            return ans;
        for(int i=0;i<n-3;i++){
            while(i>0 && a[i]==a[i-1])
                i++;
            for(int j=i+1;j<n-2;j++){
                while(j>i+1 && a[j]==a[j-1])
                    j++;
                long long sum=t-a[i]-a[j];
                int l=j+1, r=n-1;
                while(l<r){
                    int s1=a[l]+a[r];
                    if(s1>sum)
                        r--;
                    else if(s1<sum)
                        l++;
                    else{
                        ans.push_back({a[i], a[j], a[l], a[r]});
                        l++;
                        r--;
                        while(a[l]==a[l-1] && l<r)
                            l++;
                        while(a[r]==a[r+1] && l<r)
                            r--;
                    }
                }
            }
        }
        return ans;
    }
};
```
