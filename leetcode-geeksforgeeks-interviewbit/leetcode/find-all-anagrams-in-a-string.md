---
title: Find All Anagrams In A String
summary: Find All Anagrams In A String LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/find-all-anagrams-in-a-string", "/blog/posts/find-all-anagrams-in-a-string", "/find-all-anagrams-in-a-string"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, find-all-anagrams-in-a-string solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Find All Anagrams In A String/problem-solving.webp
    alt: Find All Anagrams In A String
    hiddenInList: true
    hiddenInSingle: false
---


<h2>438. Find All Anagrams in a String</h2><h3>Medium</h3><hr><div><p>Given a string <b>s</b> and a <b>non-empty</b> string <b>p</b>, find all the start indices of <b>p</b>'s anagrams in <b>s</b>.</p>

<p>Strings consists of lowercase English letters only and the length of both strings <b>s</b> and <b>p</b> will not be larger than 20,100.</p>

<p>The order of output does not matter.</p>

<p><b>Example 1:</b>
</p><pre><b>Input:</b>
s: "cbaebabacd" p: "abc"

<b>Output:</b>
[0, 6]

<b>Explanation:</b>
The substring with start index = 0 is "cba", which is an anagram of "abc".
The substring with start index = 6 is "bac", which is an anagram of "abc".
</pre>
<p></p>

<p><b>Example 2:</b>
</p><pre><b>Input:</b>
s: "abab" p: "ab"

<b>Output:</b>
[0, 1, 2]

<b>Explanation:</b>
The substring with start index = 0 is "ab", which is an anagram of "ab".
The substring with start index = 1 is "ba", which is an anagram of "ab".
The substring with start index = 2 is "ab", which is an anagram of "ab".
</pre>
<p></p></div>

---




```cpp
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(p.size()>s.size())
            return ans;
        vector<int> a(26,0);
        vector<int> b(26,0);
        for(int i=0;i<p.size();i++)
        {
            a[p[i]-'a']++;
            b[s[i]-'a']++;
        }
        for(int i=p.size();i<s.size();i++)
        {
            if(a==b)
                ans.push_back(i-p.size());
            b[s[i-p.size()]-'a']--;
            b[s[i]-'a']++;
            
        }
        if(a==b)
           ans.push_back(s.size()-p.size());
        return ans;
    }
};

```
