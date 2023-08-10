---
title: sum of square numbers
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, sum-of-square-numbers solution
description: sum of square numbers LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---


<h2>633. Sum of Square Numbers</h2><h3>Medium</h3><hr><div><p>Given a non-negative integer <code>c</code>, decide whether there're two integers <code>a</code> and <code>b</code> such that <code>a<sup>2</sup> + b<sup>2</sup> = c</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> c = 5
<strong>Output:</strong> true
<strong>Explanation:</strong> 1 * 1 + 2 * 2 = 5
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> c = 3
<strong>Output:</strong> false
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> c = 4
<strong>Output:</strong> true
</pre>

<p><strong>Example 4:</strong></p>

<pre><strong>Input:</strong> c = 2
<strong>Output:</strong> true
</pre>

<p><strong>Example 5:</strong></p>

<pre><strong>Input:</strong> c = 1
<strong>Output:</strong> true
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= c &lt;= 2<sup>31</sup> - 1</code></li>
</ul>
</div>

---




```cpp
class Solution {
public:
    
    bool bs(long long s, long long e, int n){
        if(s>e)
            return false;
        long long mid=s+(e-s)/2;
        if(mid*mid==n)
            return true;
        if(mid*mid>n)
            return bs(s,mid-1, n);
        return bs(mid+1, e, n);
    }
    
    bool judgeSquareSum(int c) {
        for(long long a=0;a*a<=c;a++){
            int b=c-a*a;
            if(bs(0, b, b))
                return true;
        }
        return false;
    }
};
```
