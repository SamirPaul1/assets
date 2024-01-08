---
title: 559 Maximum Depth Of N Ary Tree
summary: 559 Maximum Depth Of N Ary Tree LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/559-maximum-depth-of-n-ary-tree", "/blog/posts/559-maximum-depth-of-n-ary-tree", "/559-maximum-depth-of-n-ary-tree"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 559-maximum-depth-of-n-ary-tree solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:559 Maximum Depth Of N Ary Tree/problem-solving.webp
    alt: 559 Maximum Depth Of N Ary Tree
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/maximum-depth-of-n-ary-tree/">559. Maximum Depth of N-ary Tree</a></h2><h3>Easy</h3><hr><div><p>Given a n-ary tree, find its maximum depth.</p>

<p>The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.</p>

<p><em>Nary-Tree input serialization is represented in their level order traversal, each group of children is separated by the null value (See examples).</em></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<p><img src="https://assets.leetcode.com/uploads/2018/10/12/narytreeexample.png" style="width: 100%; max-width: 300px;"></p>

<pre><strong>Input:</strong> root = [1,null,3,2,4,null,5,6]
<strong>Output:</strong> 3
</pre>

<p><strong>Example 2:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2019/11/08/sample_4_964.png" style="width: 296px; height: 241px;"></p>

<pre><strong>Input:</strong> root = [1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]
<strong>Output:</strong> 5
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The total number of nodes is in the range <code>[0, 10<sup>4</sup>]</code>.</li>
	<li>The depth of the n-ary tree is less than or equal to <code>1000</code>.</li>
</ul>
</div>

---




```python
"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def maxDepth(self, root: 'Node') -> int:
        if not root: return 0
        tmp = 0
        for child in root.children:
            tmp = max(tmp, self.maxDepth(child))
        return 1 + tmp
```
