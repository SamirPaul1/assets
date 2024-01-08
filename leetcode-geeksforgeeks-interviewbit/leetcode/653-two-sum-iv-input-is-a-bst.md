---
title: 653 Two Sum Iv Input Is A Bst
summary: 653 Two Sum Iv Input Is A Bst LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/653-two-sum-iv-input-is-a-bst", "/blog/posts/653-two-sum-iv-input-is-a-bst", "/653-two-sum-iv-input-is-a-bst"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 653-two-sum-iv-input-is-a-bst solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:653 Two Sum Iv Input Is A Bst/problem-solving.webp
    alt: 653 Two Sum Iv Input Is A Bst
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/two-sum-iv-input-is-a-bst/">653. Two Sum IV - Input is a BST</a></h2><h3>Easy</h3><hr><div><p>Given the <code>root</code> of a Binary Search Tree and a target number <code>k</code>, return <em><code>true</code> if there exist two elements in the BST such that their sum is equal to the given target</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/21/sum_tree_1.jpg" style="width: 400px; height: 229px;">
<pre><strong>Input:</strong> root = [5,3,6,2,4,null,7], k = 9
<strong>Output:</strong> true
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/21/sum_tree_2.jpg" style="width: 400px; height: 229px;">
<pre><strong>Input:</strong> root = [5,3,6,2,4,null,7], k = 28
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[1, 10<sup>4</sup>]</code>.</li>
	<li><code>-10<sup>4</sup>&nbsp;&lt;= Node.val &lt;= 10<sup>4</sup></code></li>
	<li><code>root</code> is guaranteed to be a <strong>valid</strong> binary search tree.</li>
	<li><code>-10<sup>5</sup>&nbsp;&lt;= k &lt;= 10<sup>5</sup></code></li>
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
    def findTarget(self, root: Optional[TreeNode], k: int) -> bool:
        visited = set()
        self.res = False
        
        def inorder(root):
            if not root: return
            inorder(root.left)
            rem = k - root.val
            if rem in visited: self.res = True
            visited.add(root.val)
            inorder(root.right)
        
        inorder(root)
        return self.res
```
