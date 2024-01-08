---
title: 1866 Number Of Ways To Rearrange Sticks With K Sticks Visible
summary: 1866 Number Of Ways To Rearrange Sticks With K Sticks Visible LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/1866-number-of-ways-to-rearrange-sticks-with-k-sticks-visible", "/blog/posts/1866-number-of-ways-to-rearrange-sticks-with-k-sticks-visible", "/1866-number-of-ways-to-rearrange-sticks-with-k-sticks-visible"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 1866-number-of-ways-to-rearrange-sticks-with-k-sticks-visible solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:1866 Number Of Ways To Rearrange Sticks With K Sticks Visible/problem-solving.webp
    alt: 1866 Number Of Ways To Rearrange Sticks With K Sticks Visible
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
# https://leetcode.com/problems/number-of-ways-to-rearrange-sticks-with-k-sticks-visible/
# https://youtu.be/O761YBjGxGA

class Solution:
    def rearrangeSticks(self, n: int, k: int) -> int:
        dp = {}
        
        def dfs(N, K):
            if N == K: return 1
            if N == 0 or K == 0: return 0
            if (N,K) in dp: return dp[(N,K)]
            dp[(N,K)] = (dfs(N-1, K-1) + (N-1) * dfs(N-1, K)) % 1000000007
            return dp[(N,K)]
        
        return dfs(n, k)
    
    
# Time: O(n * k)
# Space: O(n * k)
```
