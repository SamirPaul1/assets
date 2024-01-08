---
title: 2316 Count Unreachable Pairs Of Nodes In An Undirected Graph
summary: 2316 Count Unreachable Pairs Of Nodes In An Undirected Graph LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/2316-count-unreachable-pairs-of-nodes-in-an-undirected-graph", "/blog/posts/2316-count-unreachable-pairs-of-nodes-in-an-undirected-graph", "/2316-count-unreachable-pairs-of-nodes-in-an-undirected-graph"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 2316-count-unreachable-pairs-of-nodes-in-an-undirected-graph solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:2316 Count Unreachable Pairs Of Nodes In An Undirected Graph/problem-solving.webp
    alt: 2316 Count Unreachable Pairs Of Nodes In An Undirected Graph
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/count-unreachable-pairs-of-nodes-in-an-undirected-graph/">2316. Count Unreachable Pairs of Nodes in an Undirected Graph</a></h2><h3>Medium</h3><hr><div><p>You are given an integer <code>n</code>. There is an <strong>undirected</strong> graph with <code>n</code> nodes, numbered from <code>0</code> to <code>n - 1</code>. You are given a 2D integer array <code>edges</code> where <code>edges[i] = [a<sub>i</sub>, b<sub>i</sub>]</code> denotes that there exists an <strong>undirected</strong> edge connecting nodes <code>a<sub>i</sub></code> and <code>b<sub>i</sub></code>.</p>

<p>Return <em>the <strong>number of pairs</strong> of different nodes that are <strong>unreachable</strong> from each other</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/05/05/tc-3.png" style="width: 267px; height: 169px;">
<pre><strong>Input:</strong> n = 3, edges = [[0,1],[0,2],[1,2]]
<strong>Output:</strong> 0
<strong>Explanation:</strong> There are no pairs of nodes that are unreachable from each other. Therefore, we return 0.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/05/05/tc-2.png" style="width: 295px; height: 269px;">
<pre><strong>Input:</strong> n = 7, edges = [[0,2],[0,5],[2,4],[1,6],[5,4]]
<strong>Output:</strong> 14
<strong>Explanation:</strong> There are 14 pairs of nodes that are unreachable from each other:
[[0,1],[0,3],[0,6],[1,2],[1,3],[1,4],[1,5],[2,3],[2,6],[3,4],[3,5],[3,6],[4,6],[5,6]].
Therefore, we return 14.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= edges.length &lt;= 2 * 10<sup>5</sup></code></li>
	<li><code>edges[i].length == 2</code></li>
	<li><code>0 &lt;= a<sub>i</sub>, b<sub>i</sub> &lt; n</code></li>
	<li><code>a<sub>i</sub> != b<sub>i</sub></code></li>
	<li>There are no repeated edges.</li>
</ul>
</div>

---




```python
class Solution:
    def countPairs(self, n: int, edges: List[List[int]]) -> int:
        adj = {i:[] for i in range(n)}
        for a,b in edges:
            adj[a].append(b)
            adj[b].append(a)
        visited = set()
        unreachable = []
        for a in range(n):
            if a in visited: continue
            q = collections.deque([a])
            length = 0
            while q:
                a = q.popleft()
                if a in visited: continue
                visited.add(a)
                length += 1
                for b in adj[a]:
                    if b in visited: continue
                    q.append(b)
            unreachable.append(length)
        
        s = 0
        res = 0
        for i in unreachable:
            res += s * i
            s += i
        return res
        
    
    
# [1, 2, 4]
```
