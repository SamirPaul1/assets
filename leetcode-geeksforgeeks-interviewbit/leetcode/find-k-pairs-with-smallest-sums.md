---
title: Find K Pairs With Smallest Sums
summary: Find K Pairs With Smallest Sums LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/find-k-pairs-with-smallest-sums", "/blog/posts/find-k-pairs-with-smallest-sums", "/find-k-pairs-with-smallest-sums"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, find-k-pairs-with-smallest-sums solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Find K Pairs With Smallest Sums/problem-solving.webp
    alt: Find K Pairs With Smallest Sums
    hiddenInList: true
    hiddenInSingle: false
---


<h2>373. Find K Pairs with Smallest Sums</h2><h3>Medium</h3><hr><div><p>You are given two integer arrays <b>nums1</b> and <b>nums2</b> sorted in ascending order and an integer <b>k</b>.</p>

<p>Define a pair <b>(u,v)</b> which consists of one element from the first array and one element from the second array.</p>

<p>Find the k pairs <b>(u<sub>1</sub>,v<sub>1</sub>),(u<sub>2</sub>,v<sub>2</sub>) ...(u<sub>k</sub>,v<sub>k</sub>)</b> with the smallest sums.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input: </strong>nums1 = <span id="example-input-1-1">[1,7,11]</span>, nums2 = <span id="example-input-1-2">[2,4,6]</span>, k = <span id="example-input-1-3">3</span>
<strong>Output: </strong><span id="example-output-1">[[1,2],[1,4],[1,6]] 
<strong>Explanation: </strong></span>The first 3 pairs are returned from the sequence: 
&nbsp;            [1,2],[1,4],[1,6],[7,2],[7,4],[11,2],[7,6],[11,4],[11,6]</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input: </strong>nums1 = [1,1,2], nums2 = [1,2,3], k = 2
<strong>Output: </strong>[1,1],[1,1]<span>
<strong>Explanation: </strong></span>The first 2 pairs are returned from the sequence: 
&nbsp;            [1,1],[1,1],[1,2],[2,1],[1,2],[2,2],[1,3],[1,3],[2,3]</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input: </strong>nums1 = [1,2], nums2 = [3], k = 3
<strong>Output: </strong>[1,3],[2,3]<span>
<strong>Explanation: </strong></span>All possible pairs are returned from the sequence: [1,3],[2,3]
</pre>
</div>

---




```cpp
class Solution {
    struct comp{
        bool operator()(pair<int,int> p1, pair<int,int> p2){
            return p1.first+p1.second < p2.first+p2.second;
        }
      };
public:
   vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int,int>, vector<pair<int,int>>, comp> pq;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                pq.push({nums1[i], nums2[j]});
                if(pq.size()>k)
                    pq.pop();
            }
        }
        while(!pq.empty()){
            ans.push_back({pq.top().first, pq.top().second});
            pq.pop();
        }
        return ans;
    }
};
```
