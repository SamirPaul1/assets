---
title: Remove Duplicates From Sorted List Ii
summary: Remove Duplicates From Sorted List Ii - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: ["interviewbit", "interviewbit solution in Python3 C++ Java", "Remove Duplicates From Sorted List Ii Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Remove Duplicates From Sorted List Ii - Solution Explained/problem-solving.webp
    alt: Remove Duplicates From Sorted List Ii
    hiddenInList: true
    hiddenInSingle: false
---

# Remove Duplicates From Sorted List II

https://www.interviewbit.com/problems/remove-duplicates-from-sorted-list-ii


## Solution

```cpp
ListNode *Solution::deleteDuplicates(ListNode *A) {
    ListNode *head = A, *curr = A, *prev = 0;

    ListNode tmp(0);
    tmp.next = head;
    prev = &tmp;

    while (curr) {
        while (curr->next && curr->val == curr->next->val)
            curr = curr->next;

        if (prev->next == curr)
            prev = prev->next;
        else
            prev->next = curr->next;

        curr = curr->next;
    }

    return tmp.next;
}
```