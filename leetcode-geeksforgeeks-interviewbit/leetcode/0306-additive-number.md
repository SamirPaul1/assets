---
title: 0306 Additive Number
summary: 0306 Additive Number LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "0306-additive-number LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:0306 Additive Number - Solution Explained/problem-solving.webp
    alt: 0306 Additive Number
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/additive-number/">306. Additive Number</a></h2><h3>Medium</h3><hr><div><p>An <strong>additive number</strong> is a string whose digits can form an <strong>additive sequence</strong>.</p>

<p>A valid <strong>additive sequence</strong> should contain <strong>at least</strong> three numbers. Except for the first two numbers, each subsequent number in the sequence must be the sum of the preceding two.</p>

<p>Given a string containing only digits, return <code>true</code> if it is an <strong>additive number</strong> or <code>false</code> otherwise.</p>

<p><strong>Note:</strong> Numbers in the additive sequence <strong>cannot</strong> have leading zeros, so sequence <code>1, 2, 03</code> or <code>1, 02, 3</code> is invalid.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> "112358"
<strong>Output:</strong> true
<strong>Explanation:</strong> 
The digits can form an additive sequence: 1, 1, 2, 3, 5, 8. 
1 + 1 = 2, 1 + 2 = 3, 2 + 3 = 5, 3 + 5 = 8
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> "199100199"
<strong>Output:</strong> true
<strong>Explanation:</strong> 
The additive sequence is: 1, 99, 100, 199.&nbsp;
1 + 99 = 100, 99 + 100 = 199
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= num.length &lt;= 35</code></li>
	<li><code>num</code> consists only of digits.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> How would you handle overflow for very large input integers?</p>
</div>

---




```python
class Solution:
    def isAdditiveNumber(self, num):
        n = len(num)
        for i in range(1, n//2+1):
            for j in range(1, (n-i)//2+1):
                first, second, remaining = num[:i], num[i:i+j], num[i+j:]
                if ((len(first) > 1 and first[0] == '0') or
                    (len(second) > 1 and second[0] == '0')):
                    continue
                while remaining:
                    addFirstSecond = str(int(first) + int(second))
                    if addFirstSecond == remaining: return True
                    elif remaining.startswith(addFirstSecond):
                        first, second, remaining = (second, addFirstSecond,
                                                    remaining[len(addFirstSecond):])
                    else:
                        break
        
        return False
```
