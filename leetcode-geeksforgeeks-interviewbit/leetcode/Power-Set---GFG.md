---
title: Power Set   Gfg
summary: Power Set   Gfg LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "Power Set - GFG LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Power Set   Gfg - Solution Explained/problem-solving.webp
    alt: Power Set   Gfg
    hiddenInList: true
    hiddenInSingle: false
---


# Power Set
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a string S, Find&nbsp;all the possible subsequences&nbsp;of the String in lexicographically-sorted order.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input : </strong>str = "abc"
<strong>Output: </strong>a ab abc ac b bc c
<strong>Explanation : </strong>There are 7 subsequences that 
can be formed from abc.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>str = "aa"
<strong>Output: </strong>a a aa
<strong>Explanation : </strong>There are 3 subsequences that 
can be formed from aa.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything.&nbsp;</span><span style="font-size: 18px;">Your task is to complete the function&nbsp;<strong>AllPossibleStrings()&nbsp;</strong>which takes S as the input parameter and returns a list of all possible subsequences (non-empty) that can be formed from S in lexicographically-sorted order.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(n*2<sup>n</sup>) where n is the length of the String<br><strong>Expected Space Complexity:&nbsp;</strong>O(n * 2<sup>n</sup>)</span><br>&nbsp;</p>
<p><strong><span style="font-size: 18px;">Constraints:&nbsp;</span></strong><br><span style="font-size: 18px;">1 &lt;= Length of String &lt;= 16</span></p></div>

---




```python
#User function Template for python3

class Solution:
	def AllPossibleStrings(self, s):
		# Code here
		n = len(s)
		res = []
		for i in range(1, 2**n):
		    tmp = ""
		    for j in range(len(s)):
		        if i&(1<<j):
		            tmp += s[j]
		    res.append(tmp)
        return sorted(res)
		
		


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		s = input()
		ob = Solution();
		ans = ob.AllPossibleStrings(s)
		for i in ans:
			print(i, end = " ");
		print()
# } Driver Code Ends
```
