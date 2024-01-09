---
title: 0451 Sort Characters By Frequency
summary: 0451 Sort Characters By Frequency LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "0451-sort-characters-by-frequency LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:0451 Sort Characters By Frequency - Solution Explained/problem-solving.webp
    alt: 0451 Sort Characters By Frequency
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/sort-characters-by-frequency/">451. Sort Characters By Frequency</a></h2><h3>Medium</h3><hr><div><p>Given a string <code>s</code>, sort it in <strong>decreasing order</strong> based on the <strong>frequency</strong> of the characters. The <strong>frequency</strong> of a character is the number of times it appears in the string.</p>

<p>Return <em>the sorted string</em>. If there are multiple answers, return <em>any of them</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> s = "tree"
<strong>Output:</strong> "eert"
<strong>Explanation:</strong> 'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> s = "cccaaa"
<strong>Output:</strong> "aaaccc"
<strong>Explanation:</strong> Both 'c' and 'a' appear three times, so both "cccaaa" and "aaaccc" are valid answers.
Note that "cacaca" is incorrect, as the same characters must be together.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> s = "Aabb"
<strong>Output:</strong> "bbAa"
<strong>Explanation:</strong> "bbaA" is also a valid answer, but "Aabb" is incorrect.
Note that 'A' and 'a' are treated as two different characters.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 5 * 10<sup>5</sup></code></li>
	<li><code>s</code> consists of uppercase and lowercase English letters and digits.</li>
</ul>
</div>

---




```python
class Solution:
    def frequencySort(self, s: str) -> str:
        chr2count = {}
        for i in s:
            if i not in chr2count:
                chr2count[i] = 1
            else:
                chr2count[i] += 1
                
        count2chr = {}
        for i in chr2count:
            count = chr2count[i]
            if count not in count2chr:
                count2chr[count] = [i]
            else:
                count2chr[count].append(i)
        
        counts = sorted(list(count2chr.keys()), reverse = True)
        res = ""
        for c in counts:
            for i in count2chr[c]:
                res += i * c
        
        return res
```
