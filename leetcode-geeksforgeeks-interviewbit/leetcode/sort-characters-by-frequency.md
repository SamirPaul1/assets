---
title: Sort Characters By Frequency
summary: Sort Characters By Frequency LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "sort-characters-by-frequency LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Sort Characters By Frequency - Solution Explained/problem-solving.webp
    alt: Sort Characters By Frequency
    hiddenInList: true
    hiddenInSingle: false
---


<h2>451. Sort Characters By Frequency</h2><h3>Medium</h3><hr><div><p>Given a string, sort it in decreasing order based on the frequency of characters.</p>

<p><b>Example 1:</b>
</p><pre><b>Input:</b>
"tree"

<b>Output:</b>
"eert"

<b>Explanation:</b>
'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
</pre>
<p></p>

<p><b>Example 2:</b>
</p><pre><b>Input:</b>
"cccaaa"

<b>Output:</b>
"cccaaa"

<b>Explanation:</b>
Both 'c' and 'a' appear three times, so "aaaccc" is also a valid answer.
Note that "cacaca" is incorrect, as the same characters must be together.
</pre>
<p></p>

<p><b>Example 3:</b>
</p><pre><b>Input:</b>
"Aabb"

<b>Output:</b>
"bbAa"

<b>Explanation:</b>
"bbaA" is also a valid answer, but "Aabb" is incorrect.
Note that 'A' and 'a' are treated as two different characters.
</pre>
<p></p></div>

---




```cpp
class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>> pq;
        unordered_map<char,int> m;
        for(char ch:s){
            m[ch]++;
        }
        for(auto i:m){
            pq.push({i.second, i.first});
        }
        string ans="";
        while(!pq.empty()){
            int c=pq.top().first;
            char ch=pq.top().second;
            while(c--)
                ans+=ch;
            pq.pop();
            
        }
        return ans;
    }
};
```
