---
title: 0142 Linked List Cycle Ii
summary: 0142 Linked List Cycle Ii LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "0142-linked-list-cycle-ii LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:0142 Linked List Cycle Ii - Solution Explained/problem-solving.webp
    alt: 0142 Linked List Cycle Ii
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        slow, fast = head, head
        isCycle = False
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
            if slow == fast: 
                isCycle = True
                break
        
        if not isCycle: return None
        while slow:
            if head == slow: return head
            head = head.next
            slow = slow.next
        
```
