---
title: 556 Next Greater Element Iii
summary: 556 Next Greater Element Iii LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/556-next-greater-element-iii", "/blog/posts/556-next-greater-element-iii", "/556-next-greater-element-iii"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 556-next-greater-element-iii solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:556 Next Greater Element Iii/problem-solving.webp
    alt: 556 Next Greater Element Iii
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/next-greater-element-iii/">556. Next Greater Element III</a></h2><h3>Medium</h3><hr><div><p>Given a positive integer <code>n</code>, find <em>the smallest integer which has exactly the same digits existing in the integer</em> <code>n</code> <em>and is greater in value than</em> <code>n</code>. If no such positive integer exists, return <code>-1</code>.</p>

<p><strong>Note</strong> that the returned integer should fit in <strong>32-bit integer</strong>, if there is a valid answer but it does not fit in <strong>32-bit integer</strong>, return <code>-1</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> n = 12
<strong>Output:</strong> 21
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> n = 21
<strong>Output:</strong> -1
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 2<sup>31</sup> - 1</code></li>
</ul>
</div>

---




```python
class Solution:
    def nextGreaterElement(self, n: int) -> int:
        arr = []
        p = n
        while n:
            arr.append(n%10)
            n = n // 10
        arr.reverse()
        
        l = -1
        r = -1
        
        for i in range(len(arr)-1, 0, -1):
            if arr[i-1] < arr[i]:
                l = i-1
                r = i
                break
        
        if l == -1: return -1
        
        for i in range(r, len(arr)):
            if arr[l] < arr[i]:
                r = i
        
        arr[l], arr[r] = arr[r], arr[l]
        
        l = l+1
        r = len(arr)-1
        while l < r:
            arr[l], arr[r] = arr[r], arr[l]
            l += 1
            r -= 1
        
        res = 0
        for i in arr:
            res *= 10
            res += i
        
        return res if res < 2**31 else -1
```
