---
title: custom sort string
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, custom-sort-string solution
description: custom sort string LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---


<h2>791. Custom Sort String</h2><h3>Medium</h3><hr><div><p><code>order</code> and <code>str</code> are strings composed of lowercase letters. In <code>order</code>, no letter occurs more than once.</p>

<p><code>order</code> was sorted in some custom order previously. We want to permute the characters of <code>str</code> so that they match the order that <code>order</code> was sorted. More specifically, if <code>x</code> occurs before <code>y</code> in <code>order</code>, then <code>x</code> should occur before <code>y</code> in the returned string.</p>

<p>Return any permutation of <code>str</code> (as a string) that satisfies this property.</p>

<pre><strong>Example:</strong>
<strong>Input:</strong> 
order = "cba"
str = "abcd"
<strong>Output:</strong> "cbad"
<strong>Explanation:</strong> 
"a", "b", "c" appear in order, so the order of "a", "b", "c" should be "c", "b", and "a". 
Since "d" does not appear in order, it can be at any position in the returned string. "dcba", "cdba", "cbda" are also valid outputs.
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ul>
	<li><code>order</code> has length at most <code>26</code>, and no character is repeated in <code>order</code>.</li>
	<li><code>str</code> has length at most <code>200</code>.</li>
	<li><code>order</code> and <code>str</code> consist of lowercase letters only.</li>
</ul>
</div>

---




```cpp
class Solution {
public:
    string customSortString(string order, string str) {
       priority_queue<pair<int, char>, vector<pair<int, char>>, greater<pair<int, char>> > pq;
        map<char, int> m;
        map<char, int> f;
        for(int i=0;i<str.size();i++){
            m[str[i]]=1;
            f[str[i]]++;
        }
        for(int i=0;i<order.size();i++){
            if(m[order[i]]==1){
                pq.push({i, order[i]});
                m[order[i]]=2;
            }
        }
        string ans;
        while(!pq.empty()){
            char c=pq.top().second;
            int sz=f[c];
            while(sz--)
                ans+=c;
            pq.pop();
        }
        for(auto it: f){
            if(m[it.first]==1){
                int sz=it.second;
                while(sz--)
                  ans+=it.first;
            }
        }
        return ans; 
    }
};
```
