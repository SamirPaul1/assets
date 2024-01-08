---
title: 720 Longest Word In Dictionary
summary: 720 Longest Word In Dictionary LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/720-longest-word-in-dictionary", "/blog/posts/720-longest-word-in-dictionary", "/720-longest-word-in-dictionary"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 720-longest-word-in-dictionary solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:720 Longest Word In Dictionary/problem-solving.webp
    alt: 720 Longest Word In Dictionary
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/longest-word-in-dictionary/">720. Longest Word in Dictionary</a></h2><h3>Medium</h3><hr><div><p>Given an array of strings <code>words</code> representing an English Dictionary, return <em>the longest word in</em> <code>words</code> <em>that can be built one character at a time by other words in</em> <code>words</code>.</p>

<p>If there is more than one possible answer, return the longest word with the smallest lexicographical order. If there is no answer, return the empty string.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> words = ["w","wo","wor","worl","world"]
<strong>Output:</strong> "world"
<strong>Explanation:</strong> The word "world" can be built one character at a time by "w", "wo", "wor", and "worl".
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> words = ["a","banana","app","appl","ap","apply","apple"]
<strong>Output:</strong> "apple"
<strong>Explanation:</strong> Both "apply" and "apple" can be built from other words in the dictionary. However, "apple" is lexicographically smaller than "apply".
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= words.length &lt;= 1000</code></li>
	<li><code>1 &lt;= words[i].length &lt;= 30</code></li>
	<li><code>words[i]</code> consists of lowercase English letters.</li>
</ul>
</div>

---




```python
class Solution:
    def longestWord(self, words: List[str]) -> str:
        words.sort()                  # for smallest lexicographical order
        visited = {""}                # hashset to keep a track of visited words
        res = ''
        
        for word in words:
            if word[:-1] in visited:     # check previous word ie. word[:len(word)-1] visited or not
                visited.add(word)        # add this word to the set
                if len(word) > len(res): # current word have greater lenght and lexicographically smaller
                    res = word           # update res
        
        return res
    
    
    
# Time: O(n log(n))   # for sorting the words
# Space: O(n)         # for making the set visited
```
