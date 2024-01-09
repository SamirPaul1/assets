---
title: Minimum Add To Make Parentheses Valid
summary: Minimum Add To Make Parentheses Valid LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "minimum-add-to-make-parentheses-valid LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Minimum Add To Make Parentheses Valid - Solution Explained/problem-solving.webp
    alt: Minimum Add To Make Parentheses Valid
    hiddenInList: true
    hiddenInSingle: false
---


[Discussion Post (created on 3/1/2021 at 15:34)](https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/discuss/1047782/100-C%2B%2B)  
<h2>921. Minimum Add to Make Parentheses Valid</h2><h3>Medium</h3><hr><div><p>Given a string&nbsp;<code>S</code> of <code>'('</code> and <code>')'</code> parentheses, we add the minimum number of parentheses ( <code>'('</code> or <code>')'</code>, and in any positions ) so that the resulting parentheses string is valid.</p>

<p>Formally, a parentheses string is valid if and only if:</p>

<ul>
	<li>It is the empty string, or</li>
	<li>It can be written as <code>AB</code>&nbsp;(<code>A</code> concatenated with <code>B</code>), where <code>A</code> and <code>B</code> are valid strings, or</li>
	<li>It can be written as <code>(A)</code>, where <code>A</code> is a valid string.</li>
</ul>

<p>Given a parentheses string, return the minimum number of parentheses we must add to make the resulting string valid.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input: </strong><span id="example-input-1-1">"())"</span>
<strong>Output: </strong><span id="example-output-1">1</span>
</pre>

<div>
<p><strong>Example 2:</strong></p>

<pre><strong>Input: </strong><span id="example-input-2-1">"((("</span>
<strong>Output: </strong><span id="example-output-2">3</span>
</pre>

<div>
<p><strong>Example 3:</strong></p>

<pre><strong>Input: </strong><span id="example-input-3-1">"()"</span>
<strong>Output: </strong><span id="example-output-3">0</span>
</pre>

<div>
<p><strong>Example 4:</strong></p>

<pre><strong>Input: </strong><span id="example-input-4-1">"()))(("</span>
<strong>Output: </strong><span id="example-output-4">4</span></pre>

<p>&nbsp;</p>
</div>
</div>
</div>

<p><strong>Note:</strong></p>

<ol>
	<li><code>S.length &lt;= 1000</code></li>
	<li><code>S</code> only consists of <code>'('</code> and <code>')'</code> characters.</li>
</ol>

<div>
<div>
<div>
<div>&nbsp;</div>
</div>
</div>
</div></div>

---




```cpp
class Solution {
public:
    int minAddToMakeValid(string S) {
        int l=0,r=0;
        for(int i=0;i<S.size();i++){
            if(S[i]=='('){
                l++;
            }
            else{
                if(l>0)
                    l--;
                else r++;
            }
        }
        return l+r;
    }
};

```
