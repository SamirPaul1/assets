---
title: 155 Min Stack
summary: 155 Min Stack LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/155-min-stack", "/blog/posts/155-min-stack", "/155-min-stack"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 155-min-stack solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:155 Min Stack/problem-solving.webp
    alt: 155 Min Stack
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/min-stack/">155. Min Stack</a></h2><h3>Easy</h3><hr><div><p>Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.</p>

<p>Implement the <code>MinStack</code> class:</p>

<ul>
	<li><code>MinStack()</code> initializes the stack object.</li>
	<li><code>void push(int val)</code> pushes the element <code>val</code> onto the stack.</li>
	<li><code>void pop()</code> removes the element on the top of the stack.</li>
	<li><code>int top()</code> gets the top element of the stack.</li>
	<li><code>int getMin()</code> retrieves the minimum element in the stack.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input</strong>
["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],[-2],[0],[-3],[],[],[],[]]

<strong>Output</strong>
[null,null,null,null,-3,null,0,-2]

<strong>Explanation</strong>
MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin(); // return -3
minStack.pop();
minStack.top();    // return 0
minStack.getMin(); // return -2
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>-2<sup>31</sup> &lt;= val &lt;= 2<sup>31</sup> - 1</code></li>
	<li>Methods <code>pop</code>, <code>top</code> and <code>getMin</code> operations will always be called on <strong>non-empty</strong> stacks.</li>
	<li>At most <code>3 * 10<sup>4</sup></code> calls will be made to <code>push</code>, <code>pop</code>, <code>top</code>, and <code>getMin</code>.</li>
</ul>
</div>

---




```python
class MinStack:

    def __init__(self):
        self.stack = []

    def push(self, val: int) -> None:
        mini = val
        if self.stack: mini = min(mini, self.stack[-1][1])        
        self.stack.append([val, mini])

    def pop(self) -> None:
        if not self.stack: return
        self.stack.pop()

    def top(self) -> int:
        if not self.stack: return
        return self.stack[-1][0]

    def getMin(self) -> int:
        if not self.stack: return
        return self.stack[-1][1]


```
