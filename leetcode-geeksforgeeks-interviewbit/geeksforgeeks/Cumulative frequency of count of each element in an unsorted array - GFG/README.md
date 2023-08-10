# Cumulative frequency of count of each element in an unsorted array
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array of elements. The task is to calculate the cumulative frequency of each element of the array.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> Arr[] = {1, 2, 2, 1, 3, 4}
<strong>Output :</strong> 2 4 5 6
<strong>Explanation:
</strong>Here we have an array arr[] = [1, 3, 2, 
                               1, 2, 4]
Output :1-&gt;2
&nbsp; &nbsp; &nbsp; &nbsp; 2-&gt;4
&nbsp; &nbsp; &nbsp; &nbsp; 3-&gt;5
&nbsp; &nbsp; &nbsp; &nbsp; 4-&gt;6
So, the return array will have [2, 4, 5, 6] 
as an output.

</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> Arr[] = {1, 2, 1, 2, 1, 2}
<strong>Output :</strong> 3 6
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function<strong> countfreq()</strong> that takes an array <strong>(arr)</strong>, sizeOfArray <strong>(n)</strong> and return the <strong>array of cumulative frequency values</strong>. The driver code takes care of the printing.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(NLOG(N)).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ A[i] ≤ 10<sup>5</sup></span></p>
</div>