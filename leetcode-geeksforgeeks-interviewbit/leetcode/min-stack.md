---
title: Min Stack
summary: Min Stack LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/min-stack", "/blog/posts/min-stack", "/min-stack"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, min-stack solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Min Stack/problem-solving.webp
    alt: Min Stack
    hiddenInList: true
    hiddenInSingle: false
---


<h2>155. Min Stack</h2><h3>Easy</h3><hr><div><p>Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.</p>

<p>Implement the <code>MinStack</code> class:</p>

<ul>
	<li><code>MinStack()</code> initializes the stack object.</li>
	<li><code>void push(val)</code> pushes the element <code>val</code> onto the stack.</li>
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




```cpp
class MinStack {
public:
    /** initialize your data structure here. */
    long long int minele=INT_MAX;
    stack<long long int> s;
    
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push(0);
            minele=val;
        }
        else{
            s.push((long long int)val-minele);
            if(val<minele)
                minele=val;
        }
            
    }
    
    void pop() {
        long long int k=s.top();
        if(k<0){
            minele=minele-k;
        }
        s.pop();
    }
    
    int top() {
        long long int k=s.top();
        if(k<0){
            return minele;
        }
        else{
            return minele+k;
        }
    }
    
    int getMin() {
        return minele;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
```
