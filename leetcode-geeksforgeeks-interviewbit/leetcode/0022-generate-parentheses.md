---
title: 0022 Generate Parentheses
summary: 0022 Generate Parentheses LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0022-generate-parentheses", "/blog/posts/0022-generate-parentheses", "/0022-generate-parentheses"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0022-generate-parentheses solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0022 Generate Parentheses/problem-solving.webp
    alt: 0022 Generate Parentheses
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/generate-parentheses/">22. Generate Parentheses</a></h2><h3>Medium</h3><hr><div><p>Given <code>n</code> pairs of parentheses, write a function to <em>generate all combinations of well-formed parentheses</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> n = 3
<strong>Output:</strong> ["((()))","(()())","(())()","()(())","()()()"]
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> n = 1
<strong>Output:</strong> ["()"]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 8</code></li>
</ul>
</div>

---




```python
class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res = []
        def dfs(o, c, tmp):
            if c > o: return
            if o == c == n:
                res.append(tmp)
                return
            if o > c:
                dfs(o, c+1, tmp + ')')
            if o < n: 
                dfs(o+1, c, tmp + '(')
        
        dfs(0, 0, "")
        return res
```
