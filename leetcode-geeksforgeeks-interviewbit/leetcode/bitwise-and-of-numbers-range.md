---
title: Bitwise And Of Numbers Range
summary: Bitwise And Of Numbers Range LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/bitwise-and-of-numbers-range", "/blog/posts/bitwise-and-of-numbers-range", "/bitwise-and-of-numbers-range"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, bitwise-and-of-numbers-range solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Bitwise And Of Numbers Range/problem-solving.webp
    alt: Bitwise And Of Numbers Range
    hiddenInList: true
    hiddenInSingle: false
---


<h2>201. Bitwise AND of Numbers Range</h2><h3>Medium</h3><hr><div><p>Given two integers <code>left</code> and <code>right</code> that represent the range <code>[left, right]</code>, return <em>the bitwise AND of all numbers in this range, inclusive</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> left = 5, right = 7
<strong>Output:</strong> 4
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> left = 0, right = 0
<strong>Output:</strong> 0
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> left = 1, right = 2147483647
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= left &lt;= right &lt;= 2<sup>31</sup> - 1</code></li>
</ul>
</div>

---




```cpp
class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int ans=0;
        while(m!=n){
            m>>=1;
            n>>=1;
            ans++;
        }
        return m<<=ans;
    }
};
```
