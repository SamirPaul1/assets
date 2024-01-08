---
title: 0386 Lexicographical Numbers
summary: 0386 Lexicographical Numbers LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0386-lexicographical-numbers", "/blog/posts/0386-lexicographical-numbers", "/0386-lexicographical-numbers"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0386-lexicographical-numbers solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0386 Lexicographical Numbers/problem-solving.webp
    alt: 0386 Lexicographical Numbers
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/lexicographical-numbers">386. Lexicographical Numbers</a></h2><h3>Medium</h3><hr><p>Given an integer <code>n</code>, return all the numbers in the range <code>[1, n]</code> sorted in lexicographical order.</p>

<p>You must write an algorithm that runs in&nbsp;<code>O(n)</code>&nbsp;time and uses <code>O(1)</code> extra space.&nbsp;</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> n = 13
<strong>Output:</strong> [1,10,11,12,13,2,3,4,5,6,7,8,9]
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> n = 2
<strong>Output:</strong> [1,2]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 5 * 10<sup>4</sup></code></li>
</ul>


---




```python
class Node:
    def __init__(self):
        self.children = {}
        self.val = 0

class Solution:
    def __init__(self):
        self.root = Node()
    
    def addNode(self, s):
        cur = self.root
        for c in s:
            if c not in cur.children:
                cur.children[c] = Node()
            cur = cur.children[c]
        cur.val = int(s)

    def lexicalOrder(self, n: int) -> List[int]:
        for i in range(1, n+1):
            self.addNode(str(i))
        res = []
        def dfs(root):
            for c in root.children:
                node = root.children[c]
                res.append(node.val)
                dfs(node)
        dfs(self.root)
        return res







```
