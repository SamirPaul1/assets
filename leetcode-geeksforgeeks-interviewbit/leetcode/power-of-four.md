---
title: Power Of Four
summary: Power Of Four LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/power-of-four", "/blog/posts/power-of-four", "/power-of-four"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, power-of-four solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Power Of Four/problem-solving.webp
    alt: Power Of Four
    hiddenInList: true
    hiddenInSingle: false
---


[Discussion Post (created on 13/2/2021 at 18:26)](https://leetcode.com/problems/power-of-four/discuss/1107479/O(n)-or-100-fastest-C%2B%2B)  
<h2>342. Power of Four</h2><h3>Easy</h3><hr><div><p>Given an integer <code>n</code>, return <em><code>true</code> if it is a power of four. Otherwise, return <code>false</code></em>.</p>

<p>An integer <code>n</code> is a power of four, if there exists an integer <code>x</code> such that <code>n == 4<sup>x</sup></code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> n = 16
<strong>Output:</strong> true
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> n = 5
<strong>Output:</strong> false
</pre><p><strong>Example 3:</strong></p>
<pre><strong>Input:</strong> n = 1
<strong>Output:</strong> true
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>-2<sup>31</sup> &lt;= n &lt;= 2<sup>31</sup> - 1</code></li>
</ul>

<p>&nbsp;</p>
<strong>Follow up:</strong> Could you solve it without loops/recursion?</div>

---




```cpp
class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int i=0;i<32;i+=2){
            if(n==(1<<i))
                return true;
        }
        return false;
    }
};
```
