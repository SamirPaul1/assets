---
title: Consecutive 1'S Not Allowed   Gfg
summary: Consecutive 1'S Not Allowed   Gfg LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/Consecutive-1's-not-allowed---GFG", "/blog/posts/Consecutive-1's-not-allowed---GFG", "/Consecutive-1's-not-allowed---GFG"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, Consecutive 1's not allowed - GFG solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Consecutive 1'S Not Allowed   Gfg/problem-solving.webp
    alt: Consecutive 1'S Not Allowed   Gfg
    hiddenInList: true
    hiddenInSingle: false
---


# Consecutive 1's not allowed
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a positive integer <strong>N</strong>, count all possible distinct binary strings of length <strong>N</strong> such that there are <strong>no consecutive 1’s</strong>. Output your answer <strong>modulo 10^9 + 7.</strong></span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3
<strong>Output:</strong> 5
<strong>Explanation:</strong> 5 strings are (000,
001, 010, 100, 101).
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 2
<strong>Output:</strong> 3
<strong>Explanation:</strong>&nbsp;3 strings are
(00,01,10).
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete the function <strong>countStrings()</strong>&nbsp;which takes single&nbsp;integer&nbsp;<strong>n</strong>,&nbsp;as input parameters&nbsp;and returns an integer denoting the answer.&nbsp;You don't to print answer or take inputs.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup></span></p>
</div>

---




```python
#User function Template for python3
class Solution:

	def countStrings(self,n):
    	# code here
    	if n == 1: return 2
        a = 1
        b = 2
        for i in range(2, n+1):
            p = a + b
            a = b
            b = p
        return p % (10**9 + 7)
    	
    	


#{ 
 # Driver Code Starts
#Initial Template for Python 3



# Driver code 
if __name__ == "__main__": 		
    tc=int(input())
    while tc > 0:
        n=int(input())
        ob = Solution()
        ans = ob.countStrings( n)
        print(ans)
        tc=tc-1
# } Driver Code Ends
```
