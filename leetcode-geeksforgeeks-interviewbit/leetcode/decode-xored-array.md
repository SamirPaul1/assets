---
title: Decode Xored Array
summary: Decode Xored Array LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/decode-xored-array", "/blog/posts/decode-xored-array", "/decode-xored-array"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, decode-xored-array solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Decode Xored Array/problem-solving.webp
    alt: Decode Xored Array
    hiddenInList: true
    hiddenInSingle: false
---


[Discussion Post (created on 13/2/2021 at 13:18)](https://leetcode.com/problems/decode-xored-array/discuss/1107184/C%2B%2B-or-O(n))  
<h2>1720. Decode XORed Array</h2><h3>Easy</h3><hr><div><p>There is a <strong>hidden</strong> integer array <code>arr</code> that consists of <code>n</code> non-negative integers.</p>

<p>It was encoded into another integer array <code>encoded</code> of length <code>n - 1</code>, such that <code>encoded[i] = arr[i] XOR arr[i + 1]</code>. For example, if <code>arr = [1,0,2,1]</code>, then <code>encoded = [1,2,3]</code>.</p>

<p>You are given the <code>encoded</code> array. You are also given an integer <code>first</code>, that is the first element of <code>arr</code>, i.e. <code>arr[0]</code>.</p>

<p>Return <em>the original array</em> <code>arr</code>. It can be proved that the answer exists and is unique.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> encoded = [1,2,3], first = 1
<strong>Output:</strong> [1,0,2,1]
<strong>Explanation:</strong> If arr = [1,0,2,1], then first = 1 and encoded = [1 XOR 0, 0 XOR 2, 2 XOR 1] = [1,2,3]
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> encoded = [6,2,7,3], first = 4
<strong>Output:</strong> [4,2,0,7,4]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= n &lt;= 10<sup>4</sup></code></li>
	<li><code>encoded.length == n - 1</code></li>
	<li><code>0 &lt;= encoded[i] &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= first &lt;= 10<sup>5</sup></code></li>
</ul>
</div>

---




```cpp
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n=encoded.size();
        vector<int> ans(n+1);
        ans[0]=first;
        int k=first;
        for(int i=0;i<n;i++){
            ans[i+1]=k^encoded[i];
            k=ans[i+1];
        }
        return ans;
    }
};
```
