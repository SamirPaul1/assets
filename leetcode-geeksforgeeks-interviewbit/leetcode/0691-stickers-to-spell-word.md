---
title: 0691 Stickers To Spell Word
summary: 0691 Stickers To Spell Word LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0691-stickers-to-spell-word", "/blog/posts/0691-stickers-to-spell-word", "/0691-stickers-to-spell-word"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0691-stickers-to-spell-word solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0691 Stickers To Spell Word/problem-solving.webp
    alt: 0691 Stickers To Spell Word
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/stickers-to-spell-word/">691. Stickers to Spell Word</a></h2><h3>Hard</h3><hr><div><p>We are given <code>n</code> different types of <code>stickers</code>. Each sticker has a lowercase English word on it.</p>

<p>You would like to spell out the given string <code>target</code> by cutting individual letters from your collection of stickers and rearranging them. You can use each sticker more than once if you want, and you have infinite quantities of each sticker.</p>

<p>Return <em>the minimum number of stickers that you need to spell out </em><code>target</code>. If the task is impossible, return <code>-1</code>.</p>

<p><strong>Note:</strong> In all test cases, all words were chosen randomly from the <code>1000</code> most common US English words, and <code>target</code> was chosen as a concatenation of two random words.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> stickers = ["with","example","science"], target = "thehat"
<strong>Output:</strong> 3
<strong>Explanation:</strong>
We can use 2 "with" stickers, and 1 "example" sticker.
After cutting and rearrange the letters of those stickers, we can form the target "thehat".
Also, this is the minimum number of stickers necessary to form the target string.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> stickers = ["notice","possible"], target = "basicbasic"
<strong>Output:</strong> -1
Explanation:
We cannot form the target "basicbasic" from cutting letters from the given stickers.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == stickers.length</code></li>
	<li><code>1 &lt;= n &lt;= 50</code></li>
	<li><code>1 &lt;= stickers[i].length &lt;= 10</code></li>
	<li><code>1 &lt;= target.length &lt;= 15</code></li>
	<li><code>stickers[i]</code> and <code>target</code> consist of lowercase English letters.</li>
</ul>
</div>

---




```python
# https://leetcode.com/problems/stickers-to-spell-word/
# https://youtu.be/hsomLb6mUdI

class Solution:
    def minStickers(self, stickers: List[str], target: str) -> int:
        targetSet = set(target)
        stickCount = []
        for s in stickers:
            stick = {}
            for i in s:
                if i in targetSet:
                    stick[i] = stick.get(i, 0) + 1
            stickCount.append(stick)
        
        dp = {}
        def dfs(t, stick):
            if t in dp:
                return dp[t]
            res = 1 if stick else 0
            remainT = ""
            for c in t:
                if c in stick and stick[c] > 0:
                    stick[c] -= 1
                else:
                    remainT += c
            
            if remainT:
                used = 2**31
                for stick in stickCount:
                    if remainT[0] not in stick:
                        continue
                    used = min(used, dfs(remainT, stick.copy()))
                dp[remainT] = used
                res += used
            return res
        
        res = dfs(target, {})
        return res if res != 2**31 else -1
            
        
        
# Time: O(2^n)
```
