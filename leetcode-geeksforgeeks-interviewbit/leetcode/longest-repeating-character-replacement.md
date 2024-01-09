---
title: Longest Repeating Character Replacement
summary: Longest Repeating Character Replacement LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "longest-repeating-character-replacement LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Longest Repeating Character Replacement - Solution Explained/problem-solving.webp
    alt: Longest Repeating Character Replacement
    hiddenInList: true
    hiddenInSingle: false
---


<h2>424. Longest Repeating Character Replacement</h2><h3>Medium</h3><hr><div><p>Given a string <code>s</code>&nbsp;that consists of only uppercase English letters, you can perform at most <code>k</code> operations on that string.</p>

<p>In one operation, you can choose <strong>any</strong> character of the string and change it to any other uppercase English character.</p>

<p>Find the length of the longest sub-string containing all repeating letters you can get after performing the above operations.</p>

<p><b>Note:</b><br>
Both the string's length and <i>k</i> will not exceed 10<sup>4</sup>.</p>

<p><b>Example 1:</b></p>

<pre><b>Input:</b>
s = "ABAB", k = 2

<b>Output:</b>
4

<b>Explanation:</b>
Replace the two 'A's with two 'B's or vice versa.
</pre>

<p>&nbsp;</p>

<p><b>Example 2:</b></p>

<pre><b>Input:</b>
s = "AABABBA", k = 1

<b>Output:</b>
4

<b>Explanation:</b>
Replace the one 'A' in the middle with 'B' and form "AABBBBA".
The substring "BBBB" has the longest repeating letters, which is 4.
</pre>

<p>&nbsp;</p>
</div>

---




```cpp
class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int c[26]={0};
        
        int l=0,r=0,maxl=0,maxc=0;
        
        for(r=0;r<n;r++){
            c[s[r]-'A']++;
            int cc=c[s[r]-'A'];
            maxc=max(cc,maxc);
            
            while(r-l-maxc+1>k){
                c[s[l]-'A']--;
                l++;
            }
            
            maxl=max(maxl, r-l+1);
        }
        
        return maxl;
    }
};

```
