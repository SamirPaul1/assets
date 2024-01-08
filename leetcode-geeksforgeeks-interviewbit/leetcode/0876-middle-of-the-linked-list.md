---
title: 0876 Middle Of The Linked List
summary: 0876 Middle Of The Linked List LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0876-middle-of-the-linked-list", "/blog/posts/0876-middle-of-the-linked-list", "/0876-middle-of-the-linked-list"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0876-middle-of-the-linked-list solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0876 Middle Of The Linked List/problem-solving.webp
    alt: 0876 Middle Of The Linked List
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/middle-of-the-linked-list/">876. Middle of the Linked List</a></h2><h3>Easy</h3><hr><div><p>Given the <code>head</code> of a singly linked list, return <em>the middle node of the linked list</em>.</p>

<p>If there are two middle nodes, return <strong>the second middle</strong> node.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/07/23/lc-midlist1.jpg" style="width: 544px; height: 65px;">
<pre><strong>Input:</strong> head = [1,2,3,4,5]
<strong>Output:</strong> [3,4,5]
<strong>Explanation:</strong> The middle node of the list is node 3.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/07/23/lc-midlist2.jpg" style="width: 664px; height: 65px;">
<pre><strong>Input:</strong> head = [1,2,3,4,5,6]
<strong>Output:</strong> [4,5,6]
<strong>Explanation:</strong> Since the list has two middle nodes with values 3 and 4, we return the second one.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the list is in the range <code>[1, 100]</code>.</li>
	<li><code>1 &lt;= Node.val &lt;= 100</code></li>
</ul>
</div>

---




```python
# https://leetcode.com/problems/middle-of-the-linked-list/

# Method 1
class Solution:
    def middleNode(self, head):
        slow = head
        fast = head
        
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        
        return slow
    
    
# Method 2
class Solution:
    def middleNode(self, head):
        cur = head
        length = 0
        while cur:
            length += 1
            cur = cur.next
        mid = length//2
        cur = head
        for i in range(mid):
            cur = cur.next
            
        return cur
```
