---
title: 876 Middle Of The Linked List
summary: 876 Middle Of The Linked List LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/876-middle-of-the-linked-list", "/blog/posts/876-middle-of-the-linked-list", "/876-middle-of-the-linked-list"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 876-middle-of-the-linked-list solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:876 Middle Of The Linked List/problem-solving.webp
    alt: 876 Middle Of The Linked List
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        slow = head
        fast = head
        
        while fast and fast.next:
            fast = fast.next.next
            slow = slow.next
        
        return slow
```
