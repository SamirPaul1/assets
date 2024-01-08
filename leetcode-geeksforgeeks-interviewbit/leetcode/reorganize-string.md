---
title: Reorganize String
summary: Reorganize String LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/reorganize-string", "/blog/posts/reorganize-string", "/reorganize-string"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, reorganize-string solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Reorganize String/problem-solving.webp
    alt: Reorganize String
    hiddenInList: true
    hiddenInSingle: false
---


<h2>767. Reorganize String</h2><h3>Medium</h3><hr><div><p>Given a string <code>S</code>, check if the letters can be rearranged so that two characters that are adjacent to each other are not the same.</p>

<p>If possible, output any possible result.&nbsp; If not possible, return the empty string.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> S = "aab"
<strong>Output:</strong> "aba"
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> S = "aaab"
<strong>Output:</strong> ""
</pre>

<p><strong>Note:</strong></p>

<ul>
	<li><code>S</code> will consist of lowercase letters and have length in range <code>[1, 500]</code>.</li>
</ul>

<p>&nbsp;</p>
</div>

---




```cpp
class Solution {
public:
    string reorganizeString(string S) {
        if(S.size()<=1)
            return S;
        
        unordered_map<char,int> m;
        
        for(char i : S){
            m[i]++;
        }
        
        priority_queue<pair<int,char>> pq;
        
        for(auto it : m){
            pq.push({it.second,it.first});
        }
        
        string ans="";
        
        while(pq.size()>1){
            pair<int,char> p1=pq.top(),p2;
            ans+=p1.second;
            pq.pop();
            p1.first--;
            
                p2=pq.top();
                ans+=p2.second;
                pq.pop();
                p2.first--;
            
            if(ans.back()==ans[ans.size()-2]){
                return "";
            }
            if(p1.first>0)
                pq.push(p1);
            if(p2.first>0)
                pq.push(p2);
        }
        if(!pq.empty()) {
            pair<int,char> p1= pq.top();
            pq.pop();
            if(p1.first > 1) {
                return "";
            } else {
                ans+=p1.second;
            }
        }
        return ans;
    }
};

```
