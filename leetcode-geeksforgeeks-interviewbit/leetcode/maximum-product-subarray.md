---
title: Maximum Product Subarray
summary: Maximum Product Subarray LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "maximum-product-subarray LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Maximum Product Subarray - Solution Explained/problem-solving.webp
    alt: Maximum Product Subarray
    hiddenInList: true
    hiddenInSingle: false
---


<h2>152. Maximum Product Subarray</h2><h3>Medium</h3><hr><div><p>Given an integer array <code>nums</code>, find a contiguous non-empty subarray within the array that has the largest product, and return <em>the product</em>.</p>

<p>It is <strong>guaranteed</strong> that the answer will fit in a <strong>32-bit</strong> integer.</p>

<p>A <strong>subarray</strong> is a contiguous subsequence of the array.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [2,3,-2,4]
<strong>Output:</strong> 6
<strong>Explanation:</strong> [2,3] has the largest product 6.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [-2,0,-1]
<strong>Output:</strong> 0
<strong>Explanation:</strong> The result cannot be 2, because [-2,-1] is not a subarray.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 2 * 10<sup>4</sup></code></li>
	<li><code>-10 &lt;= nums[i] &lt;= 10</code></li>
	<li>The product of any prefix or suffix of <code>nums</code> is <strong>guaranteed</strong> to fit in a <strong>32-bit</strong> integer.</li>
</ul>
</div>

---




```cpp
class Solution {
public:
    int maxProduct(vector<int>& a) {
        int n=a.size();
        int maxsf=a[0], minsf=a[0], ans=a[0];
        for(int i=1;i<n;i++){
            int temp=maxsf;
            maxsf=max(a[i], max(maxsf*a[i], minsf*a[i]));
            minsf=min(a[i], min(temp*a[i], minsf*a[i]));
            ans=max(ans, maxsf);
        }
        return ans;
    }
};
```
