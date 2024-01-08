---
title: Reverse Linked List
summary: Reverse Linked List - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Reverse Linked List solution]
aliases: ["/posts/reverse-linked-list", "/blog/posts/reverse-linked-list", "/reverse-linked-list"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Reverse Linked List - Solution Explained/problem-solving.webp
    alt: Reverse Linked List
    hiddenInList: true
    hiddenInSingle: false
---

# Reverse Linked List

https://www.interviewbit.com/problems/reverse-linked-list/

Reverse a linked list. Do it in-place and in one-pass.

For example:

Given 1->2->3->4->5->NULL,

return 5->4->3->2->1->NULL.

## Solution

### Editorial
```cpp
ListNode *Solution::reverseList(ListNode *head) {
    if (head == NULL) return head;
    ListNode *cur = head, *nextNode, *prevNode;
    prevNode = NULL;

    while (cur != NULL) {
        nextNode = cur->next;
        cur->next = prevNode;
        prevNode = cur;
        cur = nextNode;
    }

    head = prevNode;
    return head;
}

```

### Mine
```cpp
ListNode* RecursiveReverse(ListNode* curr, ListNode* next, ListNode* prev){
    if (!curr)
        return prev;
    next = curr->next;
    curr->next = prev;
    RecursiveReverse(next, next, curr);
}

ListNode* Solution::reverseList(ListNode* A) {
    return RecursiveReverse(A, A->next, NULL);
}
```

