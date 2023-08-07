---
title: 1971 find if path exists in graph
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 1971-find-if-path-exists-in-graph solution
description: 1971 find if path exists in graph LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
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
