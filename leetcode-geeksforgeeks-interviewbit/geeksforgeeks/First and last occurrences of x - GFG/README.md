# First and last occurrences of x
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a sorted array <strong>arr</strong> containing <strong>n</strong> elements with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element <strong>x</strong> in the given array.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n=9, x=5
arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
<strong>Output:</strong>  2 5
<strong>Explanation</strong>: First occurrence of 5 is at index 2 and last
&nbsp;            occurrence of 5 is at index 5. 
</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n=9, x=7
arr[] = { 1, 3, 5, 5, 5, 5, 7, 123, 125 }
<strong>Output:</strong>  6 6 

</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Since, this is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function <strong>find</strong>() that takes <strong>array arr, integer n and integer x</strong> as parameters and returns the required answer.<br>
<strong>Note:</strong> If the number <strong>x</strong> is not found in the array just return both index as -1.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(logN)<br>
<strong>Expected Auxiliary Space:</strong> O(1).</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>7</sup></span></p>

<p>&nbsp;</p>
</div>