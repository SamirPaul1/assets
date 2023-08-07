---
title: 781 rabbits in forest
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 781-rabbits-in-forest solution
description: 781 rabbits in forest LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---


<h2><a href="https://leetcode.com/problems/rabbits-in-forest/">781. Rabbits in Forest</a></h2><h3>Medium</h3><hr><div><p>There is a forest with an unknown number of rabbits. We asked n rabbits <strong>"How many rabbits have the same color as you?"</strong> and collected the answers in an integer array <code>answers</code> where <code>answers[i]</code> is the answer of the <code>i<sup>th</sup></code> rabbit.</p>

<p>Given the array <code>answers</code>, return <em>the minimum number of rabbits that could be in the forest</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> answers = [1,1,2]
<strong>Output:</strong> 5
<strong>Explanation:</strong>
The two rabbits that answered "1" could both be the same color, say red.
The rabbit that answered "2" can't be red or the answers would be inconsistent.
Say the rabbit that answered "2" was blue.
Then there should be 2 other blue rabbits in the forest that didn't answer into the array.
The smallest possible number of rabbits in the forest is therefore 5: 3 that answered plus 2 that didn't.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> answers = [10,10,10]
<strong>Output:</strong> 11
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= answers.length &lt;= 1000</code></li>
	<li><code>0 &lt;= answers[i] &lt; 1000</code></li>
</ul>
</div>

---




```python
# https://leetcode.com/problems/rabbits-in-forest/
# https://youtu.be/9mEUIdP4ytw
'''
If answers[i] == v then the current rabbit must be from a group of (v+1) rabits.
if there are more than (v+1) this coloured rabit then there is a another (v+1)
number of rabit of same group.

So find count of same coloured rabits.
calculate no. of groups and extra group possible.
'''
class Solution:
    def numRabbits(self, answers: List[int]) -> int:
        dic = {}
        for i in range(len(answers)):
            if (answers[i] + 1) not in dic:
                dic[answers[i]+1] = 1
            else:
                dic[answers[i]+1] += 1
        
        res = 0
        for key in dic:
            a = dic[key]
            a //= key
            res += key * a
            if dic[key] % key > 0:
                res += key
        
        return res
    
    
# Time: O(N)
# Space: O(N)
```
