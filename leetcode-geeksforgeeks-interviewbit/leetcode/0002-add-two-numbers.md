---
title: 0002 Add Two Numbers
summary: 0002 Add Two Numbers LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0002-add-two-numbers", "/blog/posts/0002-add-two-numbers", "/0002-add-two-numbers"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0002-add-two-numbers solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0002 Add Two Numbers/problem-solving.webp
    alt: 0002 Add Two Numbers
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/add-two-numbers/">2. Add Two Numbers</a></h2><h3>Medium</h3><hr><div><p>You are given two <strong>non-empty</strong> linked lists representing two non-negative integers. The digits are stored in <strong>reverse order</strong>, and each of their nodes contains a single digit. Add the two numbers and return the sum&nbsp;as a linked list.</p>

<p>You may assume the two numbers do not contain any leading zero, except the number 0 itself.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/02/addtwonumber1.jpg" style="width: 483px; height: 342px;">
<pre><strong>Input:</strong> l1 = [2,4,3], l2 = [5,6,4]
<strong>Output:</strong> [7,0,8]
<strong>Explanation:</strong> 342 + 465 = 807.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> l1 = [0], l2 = [0]
<strong>Output:</strong> [0]
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
<strong>Output:</strong> [8,9,9,9,0,0,0,1]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in each linked list is in the range <code>[1, 100]</code>.</li>
	<li><code>0 &lt;= Node.val &lt;= 9</code></li>
	<li>It is guaranteed that the list represents a number that does not have leading zeros.</li>
</ul>
</div>

---




```python
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def addTwoNumbers(self, l1, l2):
        n1 = self.getLen(l1); n2 = self.getLen(l2)
        if n1 >= n2:
            return self.solve(l1, l2)
        return self.solve(l2, l1)
    
    
    
    
    def solve(self, l1, l2):
        head = prev = l1
        carry = 0
        while l1:
            v = l1.val + carry
            v += l2.val if l2 else 0
            carry = v // 10
            v = v % 10
            l1.val = v
            prev = l1
            l1 = l1.next
            if l2: l2 = l2.next
        if carry:
            prev.next = ListNode(carry)
        return head
        
        
    def getLen(self, head):
        n = 0
        while head:
            n += 1
            head = head.next
        return n
```
