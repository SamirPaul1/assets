---
title: 0369 Plus One Linked List
summary: 0369 Plus One Linked List LeetCode Solution Explained
date: 2022-11-25
tags: [leetcode]
series: [leetcode]
keywords: ["0369 Plus One Linked List LeetCode Solution Explained in all languages", "0369 Plus One Linked List", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:0369 Plus One Linked List - Solution Explained/problem-solving.webp
    alt: 0369 Plus One Linked List
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [369. Plus One Linked List](https://leetcode.com/problems/plus-one-linked-list)


## Description

<p>Given a non-negative integer represented as a linked list of digits, <em>plus one to the integer</em>.</p>

<p>The digits are stored such that the most significant digit is at the <code>head</code> of the list.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> head = [1,2,3]
<strong>Output:</strong> [1,2,4]
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> head = [0]
<strong>Output:</strong> [1]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the linked list is in the range <code>[1, 100]</code>.</li>
	<li><code>0 &lt;= Node.val &lt;= 9</code></li>
	<li>The number represented by the linked list does not contain leading zeros except for the zero itself.&nbsp;</li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def plusOne(self, head: ListNode) -> ListNode:
        dummy = ListNode(0, head)
        target = dummy
        while head:
            if head.val != 9:
                target = head
            head = head.next
        target.val += 1
        target = target.next
        while target:
            target.val = 0
            target = target.next
        return dummy if dummy.val else dummy.next
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode plusOne(ListNode head) {
        ListNode dummy = new ListNode(0, head);
        ListNode target = dummy;
        while (head != null) {
            if (head.val != 9) {
                target = head;
            }
            head = head.next;
        }
        ++target.val;
        target = target.next;
        while (target != null) {
            target.val = 0;
            target = target.next;
        }
        return dummy.val == 1 ? dummy : dummy.next;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* plusOne(ListNode* head) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* target = dummy;
        while (head) {
            if (head->val != 9) target = head;
            head = head->next;
        }
        ++target->val;
        target = target->next;
        while (target) {
            target->val = 0;
            target = target->next;
        }
        return dummy->val == 1 ? dummy : dummy->next;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func plusOne(head *ListNode) *ListNode {
	dummy := &ListNode{0, head}
	target := dummy
	for head != nil {
		if head.Val != 9 {
			target = head
		}
		head = head.Next
	}
	target.Val++
	target = target.Next
	for target != nil {
		target.Val = 0
		target = target.Next
	}
	if dummy.Val == 1 {
		return dummy
	}
	return dummy.Next
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
