---
title: 0318 Maximum Product Of Word Lengths
summary: 0318 Maximum Product Of Word Lengths LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "0318-maximum-product-of-word-lengths LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:0318 Maximum Product Of Word Lengths - Solution Explained/problem-solving.webp
    alt: 0318 Maximum Product Of Word Lengths
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/maximum-product-of-word-lengths/">318. Maximum Product of Word Lengths</a></h2><h3>Medium</h3><hr><div><p>Given a string array <code>words</code>, return <em>the maximum value of</em> <code>length(word[i]) * length(word[j])</code> <em>where the two words do not share common letters</em>. If no such two words exist, return <code>0</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> words = ["abcw","baz","foo","bar","xtfn","abcdef"]
<strong>Output:</strong> 16
<strong>Explanation:</strong> The two words can be "abcw", "xtfn".
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> words = ["a","ab","abc","d","cd","bcd","abcd"]
<strong>Output:</strong> 4
<strong>Explanation:</strong> The two words can be "ab", "cd".
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> words = ["a","aa","aaa","aaaa"]
<strong>Output:</strong> 0
<strong>Explanation:</strong> No such pair of words.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= words.length &lt;= 1000</code></li>
	<li><code>1 &lt;= words[i].length &lt;= 1000</code></li>
	<li><code>words[i]</code> consists only of lowercase English letters.</li>
</ul>
</div>

---




```python
'''
class Solution:
    def maxProduct(self, words):
        wordDict = {}
        for word in words:
            wordDict[word] = [False]*26
            for w in word:
                wordDict[word][ord(w) - ord('a')] = True
        
        res = 0
        for i, w1 in enumerate(words):
            for w2 in words[i+1:]:
                flag = True
                for j in range(26):
                    if wordDict[w1][j] and wordDict[w2][j]:
                        flag = False
                if flag:
                    res = max(res, len(w1) * len(w2))
        
        return res   
'''


# Solving the above using bitmanipulation.
# instead of using a bool array in dictionary use a binary number of 26bits
# where 1 represent that letter is present and 0 means not.
# if we & of 2 word != 0 means any common bit. 
    
class Solution:
    def maxProduct(self, words):
        wordDict = {}
        for word in words:
            wordDict[word] = 0
            for w in word:
                wordDict[word] |= 1 << (ord(w) - ord('a'))
        
        res = 0
        for i, w1 in enumerate(words):
            for w2 in words[i+1:]:
                if not wordDict[w1] & wordDict[w2]: # 0
                    res = max(res, len(w1) * len(w2))
        
        return res  
        
# Time Complexity : O(n*(N+n))
```
