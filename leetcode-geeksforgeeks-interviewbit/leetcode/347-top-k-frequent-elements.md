---
title: 347 Top K Frequent Elements
summary: 347 Top K Frequent Elements LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "347-top-k-frequent-elements LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:347 Top K Frequent Elements - Solution Explained/problem-solving.webp
    alt: 347 Top K Frequent Elements
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/top-k-frequent-elements/">347. Top K Frequent Elements</a></h2><h3>Medium</h3><hr><div><p>Given an integer array <code>nums</code> and an integer <code>k</code>, return <em>the</em> <code>k</code> <em>most frequent elements</em>. You may return the answer in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [1,1,1,2,2,3], k = 2
<strong>Output:</strong> [1,2]
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [1], k = 1
<strong>Output:</strong> [1]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>k</code> is in the range <code>[1, the number of unique elements in the array]</code>.</li>
	<li>It is <strong>guaranteed</strong> that the answer is <strong>unique</strong>.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> Your algorithm's time complexity must be better than <code>O(n log n)</code>, where n is the array's size.</p>
</div>

---




```python
# https://youtu.be/YPTqKIgVk-k
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # Bucket Sort
        countDict = {}
        for i in  nums:
            if i not in countDict:
                countDict[i] = 1
            else:
                countDict[i] += 1
                
        n = max(list(countDict.values()))
        dic = {i:[] for i in range(1, n+1)}
        for i in countDict:
            dic[countDict[i]].append(i)
        
        res = []
        for i in range(n, 0, -1):
            if len(dic[i]) > 0:
                res += dic[i]
            if len(res) >= k: 
                break
        return res
    
# Time: O(N)
# Space: O(N)
```
