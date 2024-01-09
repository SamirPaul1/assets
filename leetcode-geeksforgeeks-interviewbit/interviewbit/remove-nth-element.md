---
title: Remove Nth Element
summary: Remove Nth Element - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: ["interviewbit", "interviewbit solution in Python3 C++ Java", "Remove Nth Element Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Remove Nth Element - Solution Explained/problem-solving.webp
    alt: Remove Nth Element
    hiddenInList: true
    hiddenInSingle: false
---

# Remove Nth Element

https://www.interviewbit.com/problems/remove-nth-element


## Solution

```cpp
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode *head = A, *a, *b, *prev = 0;

    for (a = head; a && B; a = a->next) {
        B--;
    }

    for (b = head; a && b; a = a->next) {
        prev = b;
        b = b->next;
    }

    if (prev && b) {
        prev->next = b->next;
    } else {
        head = head->next;
    }

    return head;
}

```