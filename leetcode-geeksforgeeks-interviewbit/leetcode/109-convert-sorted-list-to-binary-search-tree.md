---
title: 109 Convert Sorted List To Binary Search Tree
summary: 109 Convert Sorted List To Binary Search Tree LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/109-convert-sorted-list-to-binary-search-tree", "/blog/posts/109-convert-sorted-list-to-binary-search-tree", "/109-convert-sorted-list-to-binary-search-tree"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 109-convert-sorted-list-to-binary-search-tree solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:109 Convert Sorted List To Binary Search Tree/problem-solving.webp
    alt: 109 Convert Sorted List To Binary Search Tree
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/">109. Convert Sorted List to Binary Search Tree</a></h2><h3>Medium</h3><hr><div><p>Given the <code>head</code> of a singly linked list where elements are <strong>sorted in ascending order</strong>, convert it to a height balanced BST.</p>

<p>For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of <em>every</em> node never differ by more than 1.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/17/linked.jpg" style="width: 500px; height: 388px;">
<pre><strong>Input:</strong> head = [-10,-3,0,5,9]
<strong>Output:</strong> [0,-3,9,-10,null,5]
<strong>Explanation:</strong> One possible answer is [0,-3,9,-10,null,5], which represents the shown height balanced BST.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> head = []
<strong>Output:</strong> []
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in <code>head</code> is in the range <code>[0, 2 * 10<sup>4</sup>]</code>.</li>
	<li><code>-10<sup>5</sup> &lt;= Node.val &lt;= 10<sup>5</sup></code></li>
</ul>
</div>

---




```python
class Solution:
    def sortedListToBST(self, head: Optional[ListNode]) -> Optional[TreeNode]:
        if not head: return None
        if not head.next: return TreeNode(head.val)
        arr = []
        while head:
            arr.append(head.val)
            head = head.next
        
        def binarySearch(l, r):
            if l > r: return None
            mid = (l+r) // 2
            root = TreeNode(arr[mid])
            root.left = binarySearch(l, mid-1)
            root.right = binarySearch(mid+1, r)
            return root
        
        return binarySearch(0, len(arr)-1)
```
