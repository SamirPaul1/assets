---
title: Reorder List
summary: Reorder List LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "reorder-list LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Reorder List - Solution Explained/problem-solving.webp
    alt: Reorder List
    hiddenInList: true
    hiddenInSingle: false
---


[Discussion Post (created on 21/0/2021 at 17:1)](https://leetcode.com/problems/reorder-list/discuss/1027696/O(n)-space-or-C%2B%2B)  
<h2>143. Reorder List</h2><h3>Medium</h3><hr><div><p>Given a singly linked list <em>L</em>: <em>L</em><sub>0</sub>→<em>L</em><sub>1</sub>→…→<em>L</em><sub><em>n</em>-1</sub>→<em>L</em><sub>n</sub>,<br>
reorder it to: <em>L</em><sub>0</sub>→<em>L</em><sub><em>n</em></sub>→<em>L</em><sub>1</sub>→<em>L</em><sub><em>n</em>-1</sub>→<em>L</em><sub>2</sub>→<em>L</em><sub><em>n</em>-2</sub>→…</p>

<p>You may <strong>not</strong> modify the values in the list's nodes, only nodes itself may be changed.</p>

<p><strong>Example 1:</strong></p>

<pre>Given 1-&gt;2-&gt;3-&gt;4, reorder it to 1-&gt;4-&gt;2-&gt;3.</pre>

<p><strong>Example 2:</strong></p>

<pre>Given 1-&gt;2-&gt;3-&gt;4-&gt;5, reorder it to 1-&gt;5-&gt;2-&gt;4-&gt;3.
</pre>
</div>

---




```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        vector<ListNode*> v;
        ListNode* t=head;
        while(t!=NULL){
           v.push_back(t);
           t=t->next;
        }
        
        int l=0,r=v.size()-1;
        ListNode* k=new ListNode();
        while(l<=r){
            ListNode* left=v[l];
            ListNode* right=v[r];
            left->next=right;
            k->next=left;
            k=right;
            l++;
            r--;
        }
        k->next=NULL;
    }
};

```
