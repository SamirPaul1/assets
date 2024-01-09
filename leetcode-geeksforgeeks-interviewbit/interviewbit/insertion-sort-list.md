---
title: Insertion Sort List
summary: Insertion Sort List - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: ["interviewbit", "interviewbit solution in Python3 C++ Java", "Insertion Sort List Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Insertion Sort List - Solution Explained/problem-solving.webp
    alt: Insertion Sort List
    hiddenInList: true
    hiddenInSingle: false
---

# Insertion Sort List

https://www.interviewbit.com/problems/insertion-sort-list



## Hint 1

If you know about the insertion sort, then the key step here is swapping two adjacent nodes.

## Hint 2

This is very much a simulation problem.

The only trick is how do you move a node from ith position to jth position. 
How do you move the pointers to do so ? Would having a temporary node help ?


## Solution

```cpp

ListNode *Solution::insertionSortList(ListNode *head) {
    if (!head || !head->next)
        return head;
    ListNode *sorted = 0;

    while (head) {
        ListNode *curr = head;
        head = head->next;

        if (!sorted || sorted->val >= curr->val) {
            curr->next = sorted;
            sorted = curr;
        } else {
            ListNode *temp = sorted;
            while (temp) {
                ListNode *s = temp;
                temp = temp->next;

                if (!s->next || s->next->val > curr->val) {
                    curr->next = s->next;
                    s->next = curr;
                    break;
                }
            }
        }
    }
    return sorted;
}
```