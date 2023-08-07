# Generate IP Addresses
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a string <strong>S</strong>&nbsp;containing only digits, Your task is to complete the function <strong>genIp()&nbsp;</strong>which returns a vector containing all possible combinations&nbsp;of <strong>valid</strong> IPv4 IP addresses and takes only a string <strong>S</strong>&nbsp;as its only argument.<br>
<strong>Note: </strong>Order doesn't matter. A <strong>valid</strong> IP address must be in the form of A.B.C.D, where A, B, C, and D are numbers from 0-255. The numbers cannot be 0 prefixed unless they are 0.<br>
<br>
<br>
For string 11211 the IP address possible are&nbsp;<br>
1.1.2.11<br>
1.1.21.1<br>
1.12.1.1<br>
11.2.1.1</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>S = 1111
<strong>Output: </strong>1.1.1.1
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
S = 55
<strong>Output:</strong> -1</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong></span></p>

<p><span style="font-size:18px">Your task is to complete the function <strong>genIp()&nbsp;</strong>which returns a vector containing all possible combinations&nbsp;of valid IPv4 IP addresses&nbsp;or <strong>-1 if no such IP address could be generated</strong> through the input string <strong>S</strong>,&nbsp;the only argument to the function.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N * N * N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N * N * N * N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=N&lt;=16<br>
here, N = length of S.<br>
S only contains digits(i.e. 0-9)</span></p>
</div>