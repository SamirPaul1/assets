---
title: 1971 Find If Path Exists In Graph
summary: 1971 Find If Path Exists In Graph LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "1971-find-if-path-exists-in-graph LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:1971 Find If Path Exists In Graph - Solution Explained/problem-solving.webp
    alt: 1971 Find If Path Exists In Graph
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def validPath(self, n: int, edges: List[List[int]], source: int, destination: int) -> bool:
        adjList = {i:[] for i in range(n)}
        for egd in edges:
            a = egd[0]
            b = egd[1]
            adjList[a].append(b)
            adjList[b].append(a)
        
        visited = {i:False for i in range(n)}
        q = [source]
        while q:
            n = len(q)
            for i in range(n):
                node = q.pop()
                if visited[node] == True: continue
                visited[node] = True
                q += adjList[node]
        
        return visited[destination]
```
