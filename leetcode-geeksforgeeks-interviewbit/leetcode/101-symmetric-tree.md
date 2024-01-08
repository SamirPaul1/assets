---
title: 101 Symmetric Tree
summary: 101 Symmetric Tree LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/101-symmetric-tree", "/blog/posts/101-symmetric-tree", "/101-symmetric-tree"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 101-symmetric-tree solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:101 Symmetric Tree/problem-solving.webp
    alt: 101 Symmetric Tree
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/symmetric-tree/">101. Symmetric Tree</a></h2><h3>Easy</h3><hr><div><p>Given the <code>root</code> of a binary tree, <em>check whether it is a mirror of itself</em> (i.e., symmetric around its center).</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/19/symtree1.jpg" style="width: 354px; height: 291px;">
<pre><strong>Input:</strong> root = [1,2,2,3,4,4,3]
<strong>Output:</strong> true
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/19/symtree2.jpg" style="width: 308px; height: 258px;">
<pre><strong>Input:</strong> root = [1,2,2,null,3,null,3]
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[1, 1000]</code>.</li>
	<li><code>-100 &lt;= Node.val &lt;= 100</code></li>
</ul>

<p>&nbsp;</p>
<strong>Follow up:</strong> Could you solve it both recursively and iteratively?</div>

---




```python
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        if not root: return True
        
        def solve(l, r):
            if not l and not r: return True
            elif not l or not r: return False
            return (l.val == r.val and
                    solve(l.left, r.right) and
                    solve(l.right, r.left))
        
        return solve(root.left, root.right)
```
