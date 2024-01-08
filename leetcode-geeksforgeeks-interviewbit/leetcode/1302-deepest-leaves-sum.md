---
title: 1302 Deepest Leaves Sum
summary: 1302 Deepest Leaves Sum LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/1302-deepest-leaves-sum", "/blog/posts/1302-deepest-leaves-sum", "/1302-deepest-leaves-sum"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 1302-deepest-leaves-sum solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:1302 Deepest Leaves Sum/problem-solving.webp
    alt: 1302 Deepest Leaves Sum
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/deepest-leaves-sum/">1302. Deepest Leaves Sum</a></h2><h3>Medium</h3><hr><div>Given the <code>root</code> of a binary tree, return <em>the sum of values of its deepest leaves</em>.
<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/07/31/1483_ex1.png" style="width: 273px; height: 265px;">
<pre><strong>Input:</strong> root = [1,2,3,4,5,null,6,7,null,null,null,null,8]
<strong>Output:</strong> 15
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> root = [6,7,8,2,7,1,3,9,null,1,4,null,null,null,5]
<strong>Output:</strong> 19
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[1, 10<sup>4</sup>]</code>.</li>
	<li><code>1 &lt;= Node.val &lt;= 100</code></li>
</ul>
</div>

---




```python
class Solution:
    def deepestLeavesSum(self, root: Optional[TreeNode]) -> int:
        
        def depth(root):
            if not root: return 0
            return 1 + max(depth(root.left), depth(root.right))
        
        self.maxDepth = depth(root)
        self.res = 0
        
        def solve(root, d):
            if not root: return
            if d == self.maxDepth:
                self.res += root.val
            solve(root.left, d+1)
            solve(root.right, d+1)
        
        solve(root, 1)
        return self.res
```
