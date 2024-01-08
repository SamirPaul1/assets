---
title: 188 Best Time To Buy And Sell Stock Iv
summary: 188 Best Time To Buy And Sell Stock Iv LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/188-best-time-to-buy-and-sell-stock-iv", "/blog/posts/188-best-time-to-buy-and-sell-stock-iv", "/188-best-time-to-buy-and-sell-stock-iv"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 188-best-time-to-buy-and-sell-stock-iv solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:188 Best Time To Buy And Sell Stock Iv/problem-solving.webp
    alt: 188 Best Time To Buy And Sell Stock Iv
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/">188. Best Time to Buy and Sell Stock IV</a></h2><h3>Hard</h3><hr><div><p>You are given an integer array <code>prices</code> where <code>prices[i]</code> is the price of a given stock on the <code>i<sup>th</sup></code> day, and an integer <code>k</code>.</p>

<p>Find the maximum profit you can achieve. You may complete at most <code>k</code> transactions.</p>

<p><strong>Note:</strong> You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> k = 2, prices = [2,4,1]
<strong>Output:</strong> 2
<strong>Explanation:</strong> Buy on day 1 (price = 2) and sell on day 2 (price = 4), profit = 4-2 = 2.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> k = 2, prices = [3,2,6,5,0,3]
<strong>Output:</strong> 7
<strong>Explanation:</strong> Buy on day 2 (price = 2) and sell on day 3 (price = 6), profit = 6-2 = 4. Then buy on day 5 (price = 0) and sell on day 6 (price = 3), profit = 3-0 = 3.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= k &lt;= 100</code></li>
	<li><code>0 &lt;= prices.length &lt;= 1000</code></li>
	<li><code>0 &lt;= prices[i] &lt;= 1000</code></li>
</ul>
</div>

---




```python
# ---------------------  Dynamic Programming => OPTIMAL All TestCases Passed ----------
class Solution:
    def maxProfit(self, k, prices):
        n = len(prices)
        if n <= 1 or k== 0: return 0
        
        dp = [[0]*n for i in range(k+1)]
        
        for t in range(1, k+1):    # number transactions allowed
            prevMax = float("-inf")  # to store the max profit for (t-1) transactions on previous days 
            for d in range(1, n):  # current day
                prevMax = max(prevMax, dp[t-1][d-1] - prices[d-1])
                dp[t][d] = max(prevMax + prices[d], dp[t][d-1])
                
        return dp[-1][-1]
        
# Time Complexity: O(n*k)
# Space Complexity: O(n*k)
```
