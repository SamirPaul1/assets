---
title: Detect And Remove Loop From A Linked List
summary: Detect And Remove Loop From A Linked List - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Detect And Remove Loop From A Linked List solution]
aliases: ["/posts/detect-and-remove-loop-from-a-linked-list", "/blog/posts/detect-and-remove-loop-from-a-linked-list", "/detect-and-remove-loop-from-a-linked-list"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Detect And Remove Loop From A Linked List - Solution Explained/problem-solving.webp
    alt: Detect And Remove Loop From A Linked List
    hiddenInList: true
    hiddenInSingle: false
---

# Detect and Remove Loop from a linked list

https://www.interviewbit.com/problems/detect-and-remove-loop-from-a-linked-list/

Given a linked list which contains some loop.

You need to find the node, which creates a loop, and break it by making the node point to NULL.

### INPUT
```
3 -> 2 -> 4 -> 5 -> 6
          ^         |
          |         |    
          - - - - - -
```
### OUTPUT
```
3 -> 2 -> 4 -> 5 -> 6 -> NULL
```

## Solution
### Editorial
```cpp
ListNode* Solution::solve(ListNode* A) {
    
    if(A==NULL || A->next==NULL)
    return A;
    
    ListNode* slow=A;
    ListNode* fast=A;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        
        if(slow==fast)
        break;
    }
    
    slow=A;
    while(slow!=fast)
    {
        
        if(slow==fast)
        break;
        
        else{
        slow=slow->next;
        fast=fast->next;
        }
    }
    
    ListNode* temp=slow;
    while(temp)
    {
        if(temp->next==slow)
        {
            temp->next=NULL;
            break;
        }
     else
     {
         temp=temp->next;
     }
        
    }
    return A;
}
```

### Fastest
```cpp
ListNode* Solution::solve(ListNode* A) {
    if(A==NULL) return NULL;
    if(A->next == NULL) return A;
    if(A->next == A)
    {
        A->next = NULL;
        return A;
    }
    ListNode* slow = A;
    ListNode* fast = A;
    bool cycle = false;
    while(fast!=NULL)
    {
        fast = fast->next;
        if(fast==NULL) return A;
        fast = fast->next;
        slow = slow->next;
        if(fast==slow) 
        {
            cycle = true;
            break;
        }
    }
    if(!cycle) return A;
    ListNode* curr = A;
    while(true)
    {
        slow = slow->next;
        curr = curr->next;
        if(curr==slow) break;
    }
    //cout<<slow->val<<"||";
    curr = A;
    int co = 0;
    while(true)
    {
        if(curr->next == slow) 
        {
            ++co;
        }
        if(co==2) break;
        curr = curr->next;
    }
    curr->next = NULL;
    return A;
}
```

### Lightweight
```cpp
ListNode* Solution::solve(ListNode* A) {
    ListNode* slow=A;
    ListNode* fast=A;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) break;
    }
    slow=A;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    ListNode* ok=slow;
    while(slow->next!=ok){
        slow=slow->next;
    }
    slow->next=NULL;
    return A;
}
```




