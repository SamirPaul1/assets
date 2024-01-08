---
title: Jump Game
summary: Jump Game LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/jump-game", "/blog/posts/jump-game", "/jump-game"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, jump-game solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Jump Game/problem-solving.webp
    alt: Jump Game
    hiddenInList: true
    hiddenInSingle: false
---


<h2>55. Jump Game</h2><h3>Medium</h3><hr><div><p>Given an array of non-negative integers <code>nums</code>, you are initially positioned at the <strong>first index</strong> of the array.</p>

<p>Each element in the array represents your maximum jump length at that position.</p>

<p>Determine if you are able to reach the last index.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [2,3,1,1,4]
<strong>Output:</strong> true
<strong>Explanation:</strong> Jump 1 step from index 0 to 1, then 3 steps to the last index.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [3,2,1,0,4]
<strong>Output:</strong> false
<strong>Explanation:</strong> You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code>0 &lt;= nums[i] &lt;= 10<sup>5</sup></code></li>
</ul>
</div>

---




```cpp
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int l=0;
        for(int i=0;i<=l;i++){
            l=max(l,i+nums[i]);
            if(l>=nums.size()-1)
                return true;
        }
        return false;
    }
};

```
