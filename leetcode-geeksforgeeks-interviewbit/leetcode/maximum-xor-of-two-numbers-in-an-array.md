---
title: Maximum Xor Of Two Numbers In An Array
summary: Maximum Xor Of Two Numbers In An Array LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/maximum-xor-of-two-numbers-in-an-array", "/blog/posts/maximum-xor-of-two-numbers-in-an-array", "/maximum-xor-of-two-numbers-in-an-array"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, maximum-xor-of-two-numbers-in-an-array solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Maximum Xor Of Two Numbers In An Array/problem-solving.webp
    alt: Maximum Xor Of Two Numbers In An Array
    hiddenInList: true
    hiddenInSingle: false
---


<h2>421. Maximum XOR of Two Numbers in an Array</h2><h3>Medium</h3><hr><div><p>Given an integer array <code>nums</code>, return <em>the maximum result of <code>nums[i] XOR nums[j]</code></em>, where <code>0 ≤ i ≤ j &lt; n</code>.</p>

<p><strong>Follow up:</strong> Could you do this in <code>O(n)</code> runtime?</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [3,10,5,25,2,8]
<strong>Output:</strong> 28
<strong>Explanation:</strong> The maximum result is 5 XOR 25 = 28.</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [0]
<strong>Output:</strong> 0
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [2,4]
<strong>Output:</strong> 6
</pre>

<p><strong>Example 4:</strong></p>

<pre><strong>Input:</strong> nums = [8,10,2]
<strong>Output:</strong> 10
</pre>

<p><strong>Example 5:</strong></p>

<pre><strong>Input:</strong> nums = [14,70,53,83,49,91,36,80,92,51,66,70]
<strong>Output:</strong> 127
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 2 * 10<sup>4</sup></code></li>
	<li><code>0 &lt;= nums[i] &lt;= 2<sup>31</sup> - 1</code></li>
</ul>
</div>

---




```cpp
class Solution {
public:
    public:
    class TreeNode {
    public:
        TreeNode* next[2];
        TreeNode () {next[0] = NULL; next[1] = NULL;};
    };
    TreeNode* buildTree(vector<int>& nums) {
        TreeNode* root = new TreeNode(), *cur;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            cur = root;
            for (int j = 31; j >= 0; j--) {
                int index = ((num >> j) & 1);
                if (cur->next[index] ==  NULL)
                    cur->next[index] = new TreeNode();
                cur = cur->next[index];
            }
        }
        return root;
    }
    
    int helper(TreeNode* cur, int num) {
        int res = 0;
        for (int i = 31; i >= 0; i--) {
            int index = ((num >> i) & 1) ? 0 : 1;
            if (cur->next[index]) {
                res <<= 1;
                res |= 1;
                cur = cur->next[index];
            } else {
                res <<= 1;
                res |= 0;
                cur = cur->next[index ? 0 : 1];
            }
        }
        return res;
    }
    
    int findMaximumXOR(vector<int>& nums) {
        int res = 0;
        TreeNode* root = buildTree(nums);
        
        for (auto i : nums) {
            res = max(res, helper(root, i));
        }
        
        return res;
    }
};
```
