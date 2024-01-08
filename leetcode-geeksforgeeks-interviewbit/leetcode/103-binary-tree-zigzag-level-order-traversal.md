---
title: 103 Binary Tree Zigzag Level Order Traversal
summary: 103 Binary Tree Zigzag Level Order Traversal LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/103-binary-tree-zigzag-level-order-traversal", "/blog/posts/103-binary-tree-zigzag-level-order-traversal", "/103-binary-tree-zigzag-level-order-traversal"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 103-binary-tree-zigzag-level-order-traversal solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:103 Binary Tree Zigzag Level Order Traversal/problem-solving.webp
    alt: 103 Binary Tree Zigzag Level Order Traversal
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/">103. Binary Tree Zigzag Level Order Traversal</a></h2><h3>Medium</h3><hr><div><p>Given the <code>root</code> of a binary tree, return <em>the zigzag level order traversal of its nodes' values</em>. (i.e., from left to right, then right to left for the next level and alternate between).</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/19/tree1.jpg" style="width: 277px; height: 302px;">
<pre><strong>Input:</strong> root = [3,9,20,null,null,15,7]
<strong>Output:</strong> [[3],[20,9],[15,7]]
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> root = [1]
<strong>Output:</strong> [[1]]
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> root = []
<strong>Output:</strong> []
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[0, 2000]</code>.</li>
	<li><code>-100 &lt;= Node.val &lt;= 100</code></li>
</ul>
</div>

---




```python
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def zigzagLevelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root: return 
        q = collections.deque()
        q.append(root)
        res = []
        flag = 1
        
        while q:
            n = len(q)
            arr = []
            for i in range(n):
                node = q.popleft()
                arr.append(node.val)
                if node.left: q.append(node.left)
                if node.right: q.append(node.right)
            res.append(arr) if flag == 1 else res.append(arr[::-1])
            flag *= -1
        
        return res
```
