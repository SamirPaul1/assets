---
title: Subarrays With K Different Integers
summary: Subarrays With K Different Integers LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/subarrays-with-k-different-integers", "/blog/posts/subarrays-with-k-different-integers", "/subarrays-with-k-different-integers"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, subarrays-with-k-different-integers solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Subarrays With K Different Integers/problem-solving.webp
    alt: Subarrays With K Different Integers
    hiddenInList: true
    hiddenInSingle: false
---


<h2>992. Subarrays with K Different Integers</h2><h3>Hard</h3><hr><div><p>Given an array <code>A</code> of positive integers, call a (contiguous, not necessarily distinct) subarray of <code>A</code> <em>good</em> if the number of different integers in that subarray is exactly <code>K</code>.</p>

<p>(For example, <code>[1,2,3,1,2]</code> has <code>3</code> different integers: <code>1</code>, <code>2</code>, and <code>3</code>.)</p>

<p>Return the number of good subarrays of <code>A</code>.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input: </strong>A = <span id="example-input-1-1">[1,2,1,2,3]</span>, K = <span id="example-input-1-2">2</span>
<strong>Output: </strong><span id="example-output-1">7</span>
<strong>Explanation: </strong>Subarrays formed with exactly 2 different integers: [1,2], [2,1], [1,2], [2,3], [1,2,1], [2,1,2], [1,2,1,2].
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input: </strong>A = <span id="example-input-2-1">[1,2,1,3,4]</span>, K = <span id="example-input-2-2">3</span>
<strong>Output: </strong><span id="example-output-2">3</span>
<strong>Explanation: </strong>Subarrays formed with exactly 3 different integers: [1,2,1,3], [2,1,3], [1,3,4].
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code>1 &lt;= A.length &lt;= 20000</code></li>
	<li><code>1 &lt;= A[i] &lt;= A.length</code></li>
	<li><code>1 &lt;= K &lt;= A.length</code></li>
</ol></div>

---




```cpp
class Solution {
public:
    
    int solve(vector<int>& A, int K){
        unordered_map<int,int> m;
        int i=0;
        int ans=0;
        for(int j=0;j<A.size();j++){
            if (!m[A[j]]++)
                K--;
            while (K<0) {
                if (!--m[A[i]])
                    K++;
                i++;
            }
            ans+=j-i+1;
        }
        return ans;
    }
    
    int subarraysWithKDistinct(vector<int>& A, int K) {
        return solve(A,K) - solve(A,K-1);
    }
};
```
