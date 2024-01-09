---
title: 767 Reorganize String
summary: 767 Reorganize String LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "767-reorganize-string LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:767 Reorganize String - Solution Explained/problem-solving.webp
    alt: 767 Reorganize String
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/reorganize-string/">767. Reorganize String</a></h2><h3>Medium</h3><hr><div><p>Given a string <code>s</code>, rearrange the characters of <code>s</code> so that any two adjacent characters are not the same.</p>

<p>Return <em>any possible rearrangement of</em> <code>s</code> <em>or return</em> <code>""</code> <em>if not possible</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> s = "aab"
<strong>Output:</strong> "aba"
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> s = "aaab"
<strong>Output:</strong> ""
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 500</code></li>
	<li><code>s</code> consists of lowercase English letters.</li>
</ul>
</div>

---




```python
import heapq
class Solution:
    def reorganizeString(self, s: str) -> str:
        dic = {}
        for i in s:
            if i not in dic: dic[i] = 1
            else: dic[i] += 1
        
        maxheap = []
        for i in dic:
            maxheap.append([-dic[i], i])
        heapq.heapify(maxheap)
        
        res = ""
        while len(maxheap) > 1:
            s1 = heapq.heappop(maxheap)
            s2 = heapq.heappop(maxheap)
            
            res += s1[1]
            s1[0] += 1
            res += s2[1]
            s2[0] += 1
            
            if s1[0] <= -1: heapq.heappush(maxheap, s1)
            if s2[0] <= -1: heapq.heappush(maxheap, s2)
        
        if maxheap:
            s1 = heapq.heappop(maxheap)
            if s1[0] < -1: return ""
            else: res += s1[1]
        
        return res
```
