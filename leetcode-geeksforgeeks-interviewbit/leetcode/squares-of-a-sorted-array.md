---
title: Squares Of A Sorted Array
summary: Squares Of A Sorted Array LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/squares-of-a-sorted-array", "/blog/posts/squares-of-a-sorted-array", "/squares-of-a-sorted-array"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, squares-of-a-sorted-array solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Squares Of A Sorted Array/problem-solving.webp
    alt: Squares Of A Sorted Array
    hiddenInList: true
    hiddenInSingle: false
---


<h2>977. Squares of a Sorted Array</h2><h3>Easy</h3><hr><div><p>Given an integer array <code>nums</code> sorted in <strong>non-decreasing</strong> order, return <em>an array of <strong>the squares of each number</strong> sorted in non-decreasing order</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [-4,-1,0,3,10]
<strong>Output:</strong> [0,1,9,16,100]
<strong>Explanation:</strong> After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [-7,-3,2,3,11]
<strong>Output:</strong> [4,9,9,49,121]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code><span>1 &lt;= nums.length &lt;= </span>10<sup>4</sup></code></li>
	<li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
	<li><code>nums</code> is sorted in <strong>non-decreasing</strong> order.</li>
</ul>

<p>&nbsp;</p>
<strong>Follow up:</strong> Squaring each element and sorting the new array is very trivial, could you find an <code>O(n)</code> solution using a different approach?</div>

---




```cpp
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int l=0, r=n-1;
        int pos=n-1;
        vector<int> ans(n);
        while(l<=r){
            if(abs(nums[l])<abs(nums[r]))
                ans[pos]=nums[r]*nums[r--];
            else
                ans[pos]=nums[l]*nums[l++];
            pos--;
        }
        return ans;
    }
};
```
