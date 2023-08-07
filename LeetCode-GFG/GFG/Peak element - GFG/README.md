# Peak element
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">An element is called a peak element if its value&nbsp;is not smaller than the value of&nbsp;its adjacent elements(if they exists).<br>
Given an array <strong>arr[]</strong> of size&nbsp;<strong>N</strong>,&nbsp;<strong>Return the index of any one of its&nbsp;peak elements</strong>.<br>
<strong>Note:&nbsp;</strong>The generated output will always be&nbsp;1 if the index that you&nbsp;return is correct. Otherwise output will be 0.&nbsp;</span></p>

<p><br>
<strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input: 
</span></strong><span style="font-size:18px">N = 3
arr[] = {1,2,3}
</span><strong><span style="font-size:18px">Possible Answer: </span></strong><span style="font-size:18px">2
<strong>Generated Output:</strong> 1
<strong>Explanation:</strong> index 2 is 3.
It is the peak element as it is 
greater than its neighbour 2.
If 2 is returned then the generated output will be 1 else 0.</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">N = 2
arr[] = {3,4}
</span><strong><span style="font-size:18px">Possible Answer: </span></strong><span style="font-size:18px">1
<strong>Output: </strong>1<strong>
Explanation: </strong>4 (at index 1) is the 
peak element as it is greater than 
its only neighbour element 3.
</span><span style="font-size:18px">If 1 is returned then the generated output will be 1 else 0.</span>
</pre>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You don't have to read&nbsp;input or print anything. Complete the function <strong>peakElement</strong>() which takes the array arr[] and its size N as input parameters and return the&nbsp;index of any one of its peak elements.<br>
<br>
Can you solve the problem in expected time complexity?</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(log N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ A[] ≤ 10<sup>6</sup></span></p>
</div>