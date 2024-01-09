---
title: Daily Temperatures
summary: Daily Temperatures LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "daily-temperatures LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Daily Temperatures - Solution Explained/problem-solving.webp
    alt: Daily Temperatures
    hiddenInList: true
    hiddenInSingle: false
---


<h2>739. Daily Temperatures</h2><h3>Medium</h3><hr><div><p>
Given a list of daily temperatures <code>T</code>, return a list such that, for each day in the input, tells you how many days you would have to wait until a warmer temperature.  If there is no future day for which this is possible, put <code>0</code> instead.
</p><p>
For example, given the list of temperatures <code>T = [73, 74, 75, 71, 69, 72, 76, 73]</code>, your output should be <code>[1, 1, 4, 2, 1, 1, 0, 0]</code>.
</p>

<p><b>Note:</b>
The length of <code>temperatures</code> will be in the range <code>[1, 30000]</code>.
Each temperature will be an integer in the range <code>[30, 100]</code>.
</p></div>

---




```cpp
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int n=T.size();
        vector<int> ans(n);
        stack<int> s;
        for(int i=0;i<n;i++){
           while(!s.empty() && T[i]>T[s.top()]){
               ans[s.top()]=i-s.top();
               s.pop();
           }
            s.push(i);
        }
        return ans;
    }
};
```
