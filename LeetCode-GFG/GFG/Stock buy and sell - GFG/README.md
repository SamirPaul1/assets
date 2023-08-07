# Stock buy and sell
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">The cost of stock on each day is given in an array <strong>A</strong>[] of size <strong>N</strong>. Find all the segments of days on which you buy and sell the stock so that in between those days your profit is maximum.<br>
<br>
<strong>Note:</strong></span>&nbsp;<span style="font-size:18px">Since there can be multiple solutions</span>, <span style="font-size:18px">the driver code will print 1 if your answer is correct, otherwise, it will return 0. In case there's no profit the driver code will print the string "<strong>No Profit</strong>" for a correct solution.<br>
<br>
<strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 7
A[] = {100,180,260,310,40,535,695}
<strong>Output:</strong>
1
<strong>Explanation:
</strong>One possible solution is (0 3) (4 6)
We can buy stock on day 0,
and sell it on 3rd day, which will 
give us maximum profit. Now, we buy 
stock on day 4 and sell it on day 6.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5
A[] = {4,2,2,2,4}
<strong>Output:</strong>
1
<strong>Explanation:
</strong>There are multiple possible solutions.
one of them is (3 4)<strong>
</strong>We can buy stock on day 3,
and sell it on 4th day, which will 
give us maximum profit.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function <strong>stockBuySell()</strong> which takes an array A[] and N as input parameters and finds the days of buying and selling stock. The function must return a 2D list of integers containing all the buy-sell pairs i.e. first value of pair will represent the day on which you buy&nbsp;the stock and second value represent the day on which you sell that stock. If there is No Profit, return an empty list. </span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
2 ≤&nbsp;N ≤&nbsp;10<sup>6</sup><br>
0 ≤&nbsp;A[i] ≤&nbsp;10<sup>6</sup></span></p>
</div>