---
title: 23 Merge K Sorted Lists
summary: 23 Merge K Sorted Lists LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "23-merge-k-sorted-lists LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:23 Merge K Sorted Lists - Solution Explained/problem-solving.webp
    alt: 23 Merge K Sorted Lists
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/merge-k-sorted-lists/">23. Merge k Sorted Lists</a></h2><h3>Hard</h3><hr><div><p>You are given an array of <code>k</code> linked-lists <code>lists</code>, each linked-list is sorted in ascending order.</p>

<p><em>Merge all the linked-lists into one sorted linked-list and return it.</em></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> lists = [[1,4,5],[1,3,4],[2,6]]
<strong>Output:</strong> [1,1,2,3,4,4,5,6]
<strong>Explanation:</strong> The linked-lists are:
[
  1-&gt;4-&gt;5,
  1-&gt;3-&gt;4,
  2-&gt;6
]
merging them into one sorted list:
1-&gt;1-&gt;2-&gt;3-&gt;4-&gt;4-&gt;5-&gt;6
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> lists = []
<strong>Output:</strong> []
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> lists = [[]]
<strong>Output:</strong> []
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>k == lists.length</code></li>
	<li><code>0 &lt;= k &lt;= 10^4</code></li>
	<li><code>0 &lt;= lists[i].length &lt;= 500</code></li>
	<li><code>-10^4 &lt;= lists[i][j] &lt;= 10^4</code></li>
	<li><code>lists[i]</code> is sorted in <strong>ascending order</strong>.</li>
	<li>The sum of <code>lists[i].length</code> won't exceed <code>10^4</code>.</li>
</ul>
</div>

---




```python
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        while len(lists) > 1:
            a = lists.pop()
            b = lists.pop()
            
            c = self.merge2SortedList(a, b)
            
            lists.append(c)
        
        return lists[0] if lists else None
        
    
    def merge2SortedList(self, l1, l2):
        if not l1 or not l2: return l2 or l1
        
        if l1.val <= l2.val: a = l1; b = l2
        else: a = l2; b = l1
        
        res = a
        
        while a or b:
            if not b: a.next = b; break
            if not a.next: a.next = b; break
            
            if a.next.val > b.val:
                tmp = a.next
                a.next = b
                b = tmp
            
            a = a.next
        
        return res
    
    
# Time: O(k * len(max(lists)))
# Space: O(len(max(lists)))
```
