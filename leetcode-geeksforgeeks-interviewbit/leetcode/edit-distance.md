---
title: Edit Distance
summary: Edit Distance LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "edit-distance LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Edit Distance - Solution Explained/problem-solving.webp
    alt: Edit Distance
    hiddenInList: true
    hiddenInSingle: false
---


<h2>72. Edit Distance</h2><h3>Hard</h3><hr><div><p>Given two strings <code>word1</code> and <code>word2</code>, return <em>the minimum number of operations required to convert <code>word1</code> to <code>word2</code></em>.</p>

<p>You have the following three operations permitted on a word:</p>

<ul>
	<li>Insert a character</li>
	<li>Delete a character</li>
	<li>Replace a character</li>
</ul>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> word1 = "horse", word2 = "ros"
<strong>Output:</strong> 3
<strong>Explanation:</strong> 
horse -&gt; rorse (replace 'h' with 'r')
rorse -&gt; rose (remove 'r')
rose -&gt; ros (remove 'e')
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> word1 = "intention", word2 = "execution"
<strong>Output:</strong> 5
<strong>Explanation:</strong> 
intention -&gt; inention (remove 't')
inention -&gt; enention (replace 'i' with 'e')
enention -&gt; exention (replace 'n' with 'x')
exention -&gt; exection (replace 'n' with 'c')
exection -&gt; execution (insert 'u')
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= word1.length, word2.length &lt;= 500</code></li>
	<li><code>word1</code> and <code>word2</code> consist of lowercase English letters.</li>
</ul>
</div>

---




```cpp
class Solution {
public:
    int t[501][501];
    
    int solve(string word1, string word2, int i, int j){
        if(i==0 && j==0)
            return 0;
        if(i==0)
            return j;
        if(j==0)
            return i;
        if(t[i][j]!=-1)
            return t[i][j];
        if(word1[i-1]==word2[j-1])
            return t[i][j]=solve(word1,word2,i-1,j-1);
        int x=min(min(solve(word1,word2,i-1,j),solve(word1,word2,i,j-1)),solve(word1,word2,i-1,j-1))+1;
        return t[i][j]=x;
    }
    
    
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        memset(t,-1,sizeof(t));
        return solve(word1, word2, n, m);
    }
};
```
