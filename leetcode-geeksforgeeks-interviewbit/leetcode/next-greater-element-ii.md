---
title: Next Greater Element Ii
summary: Next Greater Element Ii LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/next-greater-element-ii", "/blog/posts/next-greater-element-ii", "/next-greater-element-ii"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, next-greater-element-ii solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Next Greater Element Ii/problem-solving.webp
    alt: Next Greater Element Ii
    hiddenInList: true
    hiddenInSingle: false
---


<h2>503. Next Greater Element II</h2><h3>Medium</h3><hr><div><p>Given a circular integer array <code>nums</code> (i.e., the next element of <code>nums[nums.length - 1]</code> is <code>nums[0]</code>), return <em>the <strong>next greater number</strong> for every element in</em> <code>nums</code>.</p>

<p>The <strong>next greater number</strong> of a number <code>x</code> is the first greater number to its traversing-order next in the array, which means you could search circularly to find its next greater number. If it doesn't exist, return <code>-1</code> for this number.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,1]
<strong>Output:</strong> [2,-1,2]
Explanation: The first 1's next greater number is 2; 
The number 2 can't find next greater number. 
The second 1's next greater number needs to search circularly, which is also 2.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,3,4,3]
<strong>Output:</strong> [2,3,4,-1,4]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
</ul>
</div>

---




```cpp
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int> s;
        vector<int> ans(n);
        for(int i=2*n;i>=0;i--){
            while(!s.empty() && s.top()<=nums[i%n])
                s.pop();
            if(i<n){
                if(s.empty())
                    ans[i]=-1;
                else
                    ans[i]=s.top();
            }
            s.push(nums[i%n]);
            
        }
        return ans;
    }
};
```
