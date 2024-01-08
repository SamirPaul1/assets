---
title: 316 Remove Duplicate Letters
summary: 316 Remove Duplicate Letters LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/316-remove-duplicate-letters", "/blog/posts/316-remove-duplicate-letters", "/316-remove-duplicate-letters"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 316-remove-duplicate-letters solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:316 Remove Duplicate Letters/problem-solving.webp
    alt: 316 Remove Duplicate Letters
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/remove-duplicate-letters/">316. Remove Duplicate Letters</a></h2><h3>Medium</h3><hr><div><p>Given a string <code>s</code>, remove duplicate letters so that every letter appears once and only once. You must make sure your result is <strong>the smallest in lexicographical order</strong> among all possible results.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> s = "bcabc"
<strong>Output:</strong> "abc"
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> s = "cbacdcbc"
<strong>Output:</strong> "acdb"
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>4</sup></code></li>
	<li><code>s</code> consists of lowercase English letters.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Note:</strong> This question is the same as 1081: <a href="https://leetcode.com/problems/smallest-subsequence-of-distinct-characters/" target="_blank">https://leetcode.com/problems/smallest-subsequence-of-distinct-characters/</a></p>
</div>

---




```python
class Solution:
    def removeDuplicateLetters(self, s: str) -> str:
        visited = set()
        lastIndexDic = {ch:i for i, ch in enumerate(s)}
        stack = []
        
        for i, ch in enumerate(s):
            if ch not in visited:
                while stack and stack[-1] >= ch and lastIndexDic[stack[-1]] > i:
                    visited.remove(stack.pop())
                stack.append(ch)
                visited.add(ch)
        
        return "".join(stack)

# Time Complexity = O(N)
# Space Complexity = O(N)
```
