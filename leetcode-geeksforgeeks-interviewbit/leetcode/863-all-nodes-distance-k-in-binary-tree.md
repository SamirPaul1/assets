---
title: 863 All Nodes Distance K In Binary Tree
summary: 863 All Nodes Distance K In Binary Tree LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/863-all-nodes-distance-k-in-binary-tree", "/blog/posts/863-all-nodes-distance-k-in-binary-tree", "/863-all-nodes-distance-k-in-binary-tree"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 863-all-nodes-distance-k-in-binary-tree solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:863 All Nodes Distance K In Binary Tree/problem-solving.webp
    alt: 863 All Nodes Distance K In Binary Tree
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/">863. All Nodes Distance K in Binary Tree</a></h2><h3>Medium</h3><hr><div><p>Given the <code>root</code> of a binary tree, the value of a target node <code>target</code>, and an integer <code>k</code>, return <em>an array of the values of all nodes that have a distance </em><code>k</code><em> from the target node.</em></p>

<p>You can return the answer in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/06/28/sketch0.png" style="width: 500px; height: 429px;">
<pre><strong>Input:</strong> root = [3,5,1,6,2,0,8,null,null,7,4], target = 5, k = 2
<strong>Output:</strong> [7,4,1]
Explanation: The nodes that are a distance 2 from the target node (with value 5) have values 7, 4, and 1.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> root = [1], target = 1, k = 3
<strong>Output:</strong> []
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[1, 500]</code>.</li>
	<li><code>0 &lt;= Node.val &lt;= 500</code></li>
	<li>All the values <code>Node.val</code> are <strong>unique</strong>.</li>
	<li><code>target</code> is the value of one of the nodes in the tree.</li>
	<li><code>0 &lt;= k &lt;= 1000</code></li>
</ul>
</div>

---




```python
class Solution:
    def distanceK(self, root: TreeNode, target: TreeNode, k: int) -> List[int]:
        parent = {}
        visited = {}
        def preorder(root, p):
            if not root: return
            parent[root] = p
            visited[root] = False
            p = root
            preorder(root.left, p)
            preorder(root.right, p)
        preorder(root, None)
        
        res = []
        def dfs(root, k):
            if not root or visited[root] == True: return
            if k == 0: res.append(root.val)
            visited[root] = True
            dfs(root.left, k-1)
            dfs(root.right, k-1)
            dfs(parent[root], k-1)
        
        dfs(target, k)
        return res
```
