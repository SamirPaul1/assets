---
title: Best Time To Buy And Sell Stock Iv
summary: Best Time To Buy And Sell Stock Iv LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/best-time-to-buy-and-sell-stock-iv", "/blog/posts/best-time-to-buy-and-sell-stock-iv", "/best-time-to-buy-and-sell-stock-iv"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, best-time-to-buy-and-sell-stock-iv solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Best Time To Buy And Sell Stock Iv/problem-solving.webp
    alt: Best Time To Buy And Sell Stock Iv
    hiddenInList: true
    hiddenInSingle: false
---


<h2>188. Best Time to Buy and Sell Stock IV</h2><h3>Hard</h3><hr><div><p>You are given&nbsp;an integer array <code>prices</code> where <code>prices[i]</code>&nbsp;is the price of a given stock on the <code>i<sup>th</sup></code> day.</p>

<p>Design an algorithm to find the maximum profit. You may complete at most <code>k</code> transactions.</p>

<p><strong>Notice</strong> that you may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).</p>

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




```cpp
class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
   int n = prices.size();
       if(n==0)
            return 0;
       int profit[k+1][n];
       memset(profit,0,sizeof(profit)); 
       for (int i = 1; i <=k; i++){ 
        int prev = INT_MIN; 
        for (int j = 1; j < n; j++){ 
            prev = max(prev,profit[i - 1][j - 1] - prices[j - 1]); 
            profit[i][j] = max(profit[i][j - 1],prices[j] + prev); 
        } 
    } 
    return profit[k][n - 1];
    }
};

```
