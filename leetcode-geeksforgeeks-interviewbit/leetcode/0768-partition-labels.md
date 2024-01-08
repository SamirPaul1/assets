---
title: 0768 Partition Labels
summary: 0768 Partition Labels LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0768-partition-labels", "/blog/posts/0768-partition-labels", "/0768-partition-labels"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0768-partition-labels solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0768 Partition Labels/problem-solving.webp
    alt: 0768 Partition Labels
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/partition-labels">768. Partition Labels</a></h2><h3>Medium</h3><hr><p>You are given a string <code>s</code>. We want to partition the string into as many parts as possible so that each letter appears in at most one part.</p>

<p>Note that the partition is done so that after concatenating all the parts in order, the resultant string should be <code>s</code>.</p>

<p>Return <em>a list of integers representing the size of these parts</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;ababcbacadefegdehijhklij&quot;
<strong>Output:</strong> [9,7,8]
<strong>Explanation:</strong>
The partition is &quot;ababcbaca&quot;, &quot;defegde&quot;, &quot;hijhklij&quot;.
This is a partition so that each letter appears in at most one part.
A partition like &quot;ababcbacadefegde&quot;, &quot;hijhklij&quot; is incorrect, because it splits s into less parts.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;eccbbbbdec&quot;
<strong>Output:</strong> [10]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 500</code></li>
	<li><code>s</code> consists of lowercase English letters.</li>
</ul>


---




```python
class Solution:
    def partitionLabels(self, s: str) -> List[int]:
        l, rmax = 0, 0
        res = []
        lastInd = {ch:i for i, ch in enumerate(s)}
        for r in range(len(s)):
            rmax = max(rmax, lastInd[s[r]])
            if rmax == r:
                res.append(r-l+1)
                l = r+1
        return res
```
