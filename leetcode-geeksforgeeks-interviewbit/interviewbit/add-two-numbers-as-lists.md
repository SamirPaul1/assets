---
title: Add Two Numbers As Lists
summary: Add Two Numbers As Lists - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Add Two Numbers As Lists solution]
aliases: ["/posts/add-two-numbers-as-lists", "/blog/posts/add-two-numbers-as-lists", "/add-two-numbers-as-lists"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Add Two Numbers As Lists - Solution Explained/problem-solving.webp
    alt: Add Two Numbers As Lists
    hiddenInList: true
    hiddenInSingle: false
---

# Add Two Numbers As Lists

https://www.interviewbit.com/problems/add-two-numbers-as-lists


## Solution

```cpp
ListNode* Solution::addTwoNumbers(ListNode* a, ListNode* b) {
    int carry = 0;
    ListNode * head = 0, * prev;
    while (a || b || carry) {
        int sum = (a ? a->val : 0) + (b ? b->val : 0) + carry;
        ListNode * node = new ListNode(sum % 10);
        carry = sum / 10;
        
        if (!head)
            head = prev = node;
        else {
            prev->next = node;
            prev = prev->next;
        }
        
        if (a)
            a = a->next;
        if (b)
            b = b->next;
    }
    return head;
}

```