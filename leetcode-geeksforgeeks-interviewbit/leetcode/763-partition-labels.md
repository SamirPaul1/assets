---
title: 763 Partition Labels
summary: 763 Partition Labels LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/763-partition-labels", "/blog/posts/763-partition-labels", "/763-partition-labels"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 763-partition-labels solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:763 Partition Labels/problem-solving.webp
    alt: 763 Partition Labels
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/partition-labels/">763. Partition Labels</a></h2><h3>Medium</h3><hr><div><p>You are given a string <code>s</code>. We want to partition the string into as many parts as possible so that each letter appears in at most one part.</p>

<p>Note that the partition is done so that after concatenating all the parts in order, the resultant string should be <code>s</code>.</p>

<p>Return <em>a list of integers representing the size of these parts</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> s = "ababcbacadefegdehijhklij"
<strong>Output:</strong> [9,7,8]
<strong>Explanation:</strong>
The partition is "ababcbaca", "defegde", "hijhklij".
This is a partition so that each letter appears in at most one part.
A partition like "ababcbacadefegde", "hijhklij" is incorrect, because it splits s into less parts.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> s = "eccbbbbdec"
<strong>Output:</strong> [10]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 500</code></li>
	<li><code>s</code> consists of lowercase English letters.</li>
</ul>
</div>

---




```python
# https://leetcode.com/problems/partition-labels/

class Solution:
    def partitionLabels(self, s: str) -> List[int]:
        countDict = {}
        for i in s:
            if i not in countDict:
                countDict[i] = 1
            else:
                countDict[i] += 1
                
        res = []
        i = 0
        while i < len(s):
            targetSum = 0
            track = set()
            j = i
            while j < len(s):
                if s[j] not in track:
                    track.add(s[j])
                    targetSum += countDict[s[j]]
                if j-i+1 == targetSum:
                    res.append(j-i+1)
                    break
                j += 1
            i = j + 1
        
        return res
    
    
# Time: O(N)
# Space: O(N)

```
