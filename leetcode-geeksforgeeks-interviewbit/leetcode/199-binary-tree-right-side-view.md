---
title: 199 Binary Tree Right Side View
summary: 199 Binary Tree Right Side View LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/199-binary-tree-right-side-view", "/blog/posts/199-binary-tree-right-side-view", "/199-binary-tree-right-side-view"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 199-binary-tree-right-side-view solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:199 Binary Tree Right Side View/problem-solving.webp
    alt: 199 Binary Tree Right Side View
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/binary-tree-right-side-view/">199. Binary Tree Right Side View</a></h2><h3>Medium</h3><hr><div><p>Given the <code>root</code> of a binary tree, imagine yourself standing on the <strong>right side</strong> of it, return <em>the values of the nodes you can see ordered from top to bottom</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/14/tree.jpg" style="width: 401px; height: 301px;">
<pre><strong>Input:</strong> root = [1,2,3,null,5,null,4]
<strong>Output:</strong> [1,3,4]
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> root = [1,null,3]
<strong>Output:</strong> [1,3]
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> root = []
<strong>Output:</strong> []
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[0, 100]</code>.</li>
	<li><code>-100 &lt;= Node.val &lt;= 100</code></li>
</ul>
</div>

---




```python
class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        if not root: return
        res = []
        
        q = [root]
        while q:
            n = len(q)
            for i in range(n):
                node = q.pop(0)
                if i == n-1:
                    res.append(node.val)
                if node.left: q.append(node.left)
                if node.right: q.append(node.right)
        
        return res
```
