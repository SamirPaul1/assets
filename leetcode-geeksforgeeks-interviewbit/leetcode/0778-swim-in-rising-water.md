---
title: 0778 swim in rising water
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0778-swim-in-rising-water solution
description: 0778 swim in rising water LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---




---




```python
import heapq

class Solution:
    def swimInWater(self, grid: List[List[int]]) -> int:
        row, col = len(grid), len(grid[0])
        minHeap = []
        visited = set()
        minHeap.append((grid[0][0], 0,0))
        while minHeap:
            t,i,j = heapq.heappop(minHeap)
            # print(t,i,j)
            if (i,j) in visited: continue
            visited.add((i,j))
            if (i,j) == (row-1, col-1): return t
            for dx, dy in ((-1,0), (1,0), (0,1), (0,-1)):
                r, c = i+dx, j+dy
                if 0<=r<row and 0<=c<col and (r,c) not in visited:
                    heapq.heappush(minHeap, (max(t,grid[r][c]), r, c))
        return t
                    
                    
```
