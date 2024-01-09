---
title: Top K Frequent Elements
summary: Top K Frequent Elements LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "top-k-frequent-elements LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Top K Frequent Elements - Solution Explained/problem-solving.webp
    alt: Top K Frequent Elements
    hiddenInList: true
    hiddenInSingle: false
---


[Discussion Post (created on 30/2/2021 at 14:53)](https://leetcode.com/problems/top-k-frequent-elements/submissions/)  
<h2>347. Top K Frequent Elements</h2><h3>Medium</h3><hr><div><p>Given a non-empty array of integers, return the <b><i>k</i></b> most frequent elements.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input: </strong>nums = <span id="example-input-1-1">[1,1,1,2,2,3]</span>, k = <span id="example-input-1-2">2</span>
<strong>Output: </strong><span id="example-output-1">[1,2]</span>
</pre>

<div>
<p><strong>Example 2:</strong></p>

<pre><strong>Input: </strong>nums = <span id="example-input-2-1">[1]</span>, k = <span id="example-input-2-2">1</span>
<strong>Output: </strong><span id="example-output-2">[1]</span></pre>
</div>

<p><b>Note: </b></p>

<ul>
	<li>You may assume <i>k</i> is always valid, 1 ≤ <i>k</i> ≤ number of unique elements.</li>
	<li>Your algorithm's time complexity <b>must be</b> better than O(<i>n</i> log <i>n</i>), where <i>n</i> is the array's size.</li>
	<li>It's guaranteed that the answer is unique, in other words the set of the top k frequent elements is unique.</li>
	<li>You can return the answer in any order.</li>
</ul>
</div>

---




```cpp
class Solution {
public:
    
   vector<int> topKFrequent(vector<int>& nums, int k) {
       map<int,int>m;
       priority_queue<pair<int,int>> pq;
        
        for(int i: nums){
            m[i]++;
        }
        
        for(auto i : m){
            pq.push({-i.second, i.first});
            if(pq.size()>k)
                pq.pop();
        }
        vector<int> ans;
        while(k-- && !pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();   
        }
        return ans;
    }
};
```
