---
title: 386 Lexicographical Numbers
summary: 386 Lexicographical Numbers LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "386-lexicographical-numbers LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:386 Lexicographical Numbers - Solution Explained/problem-solving.webp
    alt: 386 Lexicographical Numbers
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/lexicographical-numbers/">386. Lexicographical Numbers</a></h2><h3>Medium</h3><hr><div><p>Given an integer <code>n</code>, return all the numbers in the range <code>[1, n]</code> sorted in lexicographical order.</p>

<p>You must write an algorithm that runs in&nbsp;<code>O(n)</code>&nbsp;time and uses <code>O(1)</code> extra space.&nbsp;</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> n = 13
<strong>Output:</strong> [1,10,11,12,13,2,3,4,5,6,7,8,9]
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> n = 2
<strong>Output:</strong> [1,2]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 5 * 10<sup>4</sup></code></li>
</ul>
</div>

---




```python
# https://leetcode.com/problems/lexicographical-numbers/
''' 
Input: n = 13
Output: [1,10,11,12,13,2,3,4,5,6,7,8,9]

Basice idea: think about Trie. we append digits to the specific suffix until we reach the target number.
'''
class Solution:
    def lexicalOrder(self, n: int) -> List[int]:
        # recursively use Trie
        res = []
        if n < 10:
            return list(range(1, n+1))
        for i in range(1, 10):
            res += [i]
            res += self.helper(i, n)
        return res
    
    def helper(self, start, n):
        res = []
        for aux in range(10):
            newStart = start*10+aux
            if newStart > n:
                break
            res += [newStart]
            res += self.helper(newStart, n)
        return res
    
# Time: O(n)
# Space: O(1)
```
