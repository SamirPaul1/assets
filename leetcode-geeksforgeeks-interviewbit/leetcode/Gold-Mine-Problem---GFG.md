---
title: Gold Mine Problem   Gfg
summary: Gold Mine Problem   Gfg LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/Gold-Mine-Problem---GFG", "/blog/posts/Gold-Mine-Problem---GFG", "/Gold-Mine-Problem---GFG"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, Gold Mine Problem - GFG solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Gold Mine Problem   Gfg/problem-solving.webp
    alt: Gold Mine Problem   Gfg
    hiddenInList: true
    hiddenInSingle: false
---


# Gold Mine Problem
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a gold mine called&nbsp;<strong>M</strong>&nbsp;of (<strong>n x&nbsp;m)</strong> dimensions. Each field in this mine contains a positive integer which is the amount of gold in tons. Initially the miner can start from any row in the first column. From&nbsp;a given cell, the miner can move </span></p>

<ol>
	<li><span style="font-size:18px">to the cell diagonally up towards the right&nbsp;</span></li>
	<li><span style="font-size:18px">to the right</span></li>
	<li><span style="font-size:18px">to the cell&nbsp;diagonally down towards the right</span></li>
</ol>

<p><span style="font-size:18px">Find out maximum amount of gold which he can collect.</span></p>

<p><br>
<strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> n = 3, m = 3
M = [[1, 3, 3],
     [2, 1, 4],
     [0, 6, 4]];
<strong>Output:</strong> 12
<strong>Explaination:</strong> 


---




```python
# User function Template for Python3

class Solution:
    def maxGold(self, n, m, M):
        # code here
        if n == 1: return sum(M[0])
        for c in range(1, m):
            for r in range(n):
                if r == 0:
                    M[r][c] += max(M[r][c-1], M[r+1][c-1])
                elif r == n-1:
                    M[r][c] += max(M[r][c-1], M[r-1][c-1])
                else:
                    M[r][c] += max(M[r-1][c-1], M[r][c-1], M[r+1][c-1])
        res = 0
        for r in range(n):
            res = max(res, M[r][-1])
        return res
        

#{ 
 # Driver Code Starts
# Initial Template for Python3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n, m = [int(x) for x in input().split()]
        tarr = [int(x) for x in input().split()]
        M = []
        j = 0
        for i in range (n):
            M.append(tarr[j:j + m])
            j = j+m
        
        ob = Solution()
        print(ob.maxGold(n, m, M))
# } Driver Code Ends
```
