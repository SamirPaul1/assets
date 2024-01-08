---
title: 0106 Construct Binary Tree From Inorder And Postorder Traversal
summary: 0106 Construct Binary Tree From Inorder And Postorder Traversal LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0106-construct-binary-tree-from-inorder-and-postorder-traversal", "/blog/posts/0106-construct-binary-tree-from-inorder-and-postorder-traversal", "/0106-construct-binary-tree-from-inorder-and-postorder-traversal"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0106-construct-binary-tree-from-inorder-and-postorder-traversal solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0106 Construct Binary Tree From Inorder And Postorder Traversal/problem-solving.webp
    alt: 0106 Construct Binary Tree From Inorder And Postorder Traversal
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/">106. Construct Binary Tree from Inorder and Postorder Traversal</a></h2><h3>Medium</h3><hr><div><p>Given two integer arrays <code>inorder</code> and <code>postorder</code> where <code>inorder</code> is the inorder traversal of a binary tree and <code>postorder</code> is the postorder traversal of the same tree, construct and return <em>the binary tree</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/19/tree.jpg" style="width: 277px; height: 302px;">
<pre><strong>Input:</strong> inorder = [9,3,15,20,7], postorder = [9,15,7,20,3]
<strong>Output:</strong> [3,9,20,null,null,15,7]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> inorder = [-1], postorder = [-1]
<strong>Output:</strong> [-1]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= inorder.length &lt;= 3000</code></li>
	<li><code>postorder.length == inorder.length</code></li>
	<li><code>-3000 &lt;= inorder[i], postorder[i] &lt;= 3000</code></li>
	<li><code>inorder</code> and <code>postorder</code> consist of <strong>unique</strong> values.</li>
	<li>Each value of <code>postorder</code> also appears in <code>inorder</code>.</li>
	<li><code>inorder</code> is <strong>guaranteed</strong> to be the inorder traversal of the tree.</li>
	<li><code>postorder</code> is <strong>guaranteed</strong> to be the postorder traversal of the tree.</li>
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
    def buildTree(self, inorder: List[int], postorder: List[int]) -> Optional[TreeNode]:
        inIndex = {v:i for i, v in enumerate(inorder)}
        def solve(l, r):
            if l > r: return None
            v = postorder.pop()
            i = inIndex[v]
            root = TreeNode(v)
            root.right = solve(i+1, r)
            root.left = solve(l, i-1)
            return root
        
        return solve(0, len(inorder)-1)
```
