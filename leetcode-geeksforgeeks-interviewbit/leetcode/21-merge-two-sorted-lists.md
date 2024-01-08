---
title: 21 Merge Two Sorted Lists
summary: 21 Merge Two Sorted Lists LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/21-merge-two-sorted-lists", "/blog/posts/21-merge-two-sorted-lists", "/21-merge-two-sorted-lists"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 21-merge-two-sorted-lists solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:21 Merge Two Sorted Lists/problem-solving.webp
    alt: 21 Merge Two Sorted Lists
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/merge-two-sorted-lists/">21. Merge Two Sorted Lists</a></h2><h3>Easy</h3><hr><div><p>You are given the heads of two sorted linked lists <code>list1</code> and <code>list2</code>.</p>

<p>Merge the two lists in a one <strong>sorted</strong> list. The list should be made by splicing together the nodes of the first two lists.</p>

<p>Return <em>the head of the merged linked list</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/03/merge_ex1.jpg" style="width: 662px; height: 302px;">
<pre><strong>Input:</strong> list1 = [1,2,4], list2 = [1,3,4]
<strong>Output:</strong> [1,1,2,3,4,4]
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> list1 = [], list2 = []
<strong>Output:</strong> []
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> list1 = [], list2 = [0]
<strong>Output:</strong> [0]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in both lists is in the range <code>[0, 50]</code>.</li>
	<li><code>-100 &lt;= Node.val &lt;= 100</code></li>
	<li>Both <code>list1</code> and <code>list2</code> are sorted in <strong>non-decreasing</strong> order.</li>
</ul>
</div>

---




```python
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        if not list1 or not list2: return list2 or list1
        
        if list1.val <= list2.val: a = list1; b = list2
        else: a = list2; b = list1
        
        res = a
        
        while a or b:
            if not b: break
            if not a.next: a.next = b; break
            if a.next.val > b.val:
                tmp = a.next
                a.next = b
                b = tmp
            a = a.next
        
        return res
```
