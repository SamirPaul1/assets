---
title: K Closest Points To Origin
summary: K Closest Points To Origin LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/k-closest-points-to-origin", "/blog/posts/k-closest-points-to-origin", "/k-closest-points-to-origin"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, k-closest-points-to-origin solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:K Closest Points To Origin/problem-solving.webp
    alt: K Closest Points To Origin
    hiddenInList: true
    hiddenInSingle: false
---


[Discussion Post (created on 13/0/2021 at 17:23)](https://leetcode.com/problems/k-closest-points-to-origin/discuss/1014741/Heap-Solution-%3A)-C%2B%2B)  
<h2>973. K Closest Points to Origin</h2><h3>Medium</h3><hr><div><p>We have a list of <code>points</code>&nbsp;on the plane.&nbsp; Find the <code>K</code> closest points to the origin <code>(0, 0)</code>.</p>

<p>(Here, the distance between two points on a plane is the Euclidean distance.)</p>

<p>You may return the answer in any order.&nbsp; The&nbsp;answer is guaranteed to be unique (except for the order that it is in.)</p>

<p>&nbsp;</p>

<div>
<p><strong>Example 1:</strong></p>

<pre><strong>Input: </strong>points = <span id="example-input-1-1">[[1,3],[-2,2]]</span>, K = <span id="example-input-1-2">1</span>
<strong>Output: </strong><span id="example-output-1">[[-2,2]]</span>
<strong>Explanation: </strong>
The distance between (1, 3) and the origin is sqrt(10).
The distance between (-2, 2) and the origin is sqrt(8).
Since sqrt(8) &lt; sqrt(10), (-2, 2) is closer to the origin.
We only want the closest K = 1 points from the origin, so the answer is just [[-2,2]].
</pre>

<div>
<p><strong>Example 2:</strong></p>

<pre><strong>Input: </strong>points = <span id="example-input-2-1">[[3,3],[5,-1],[-2,4]]</span>, K = <span id="example-input-2-2">2</span>
<strong>Output: </strong><span id="example-output-2">[[3,3],[-2,4]]</span>
(The answer [[-2,4],[3,3]] would also be accepted.)
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code>1 &lt;= K &lt;= points.length &lt;= 10000</code></li>
	<li><code>-10000 &lt; points[i][0] &lt; 10000</code></li>
	<li><code>-10000 &lt; points[i][1] &lt; 10000</code></li>
</ol>
</div>
</div></div>

---




```cpp
class Solution {
public:
    struct comp{
    bool operator()(vector<int> a, vector<int> b){
        return ((a[0] * a[0] + a[1] * a[1])>(b[0] * b[0] + b[1] * b[1])) ;
    }
    };
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        
        priority_queue<vector<int>,vector<vector<int>>, comp> pq;
        int n=points.size();
        
        for(int i=0;i<n;i++){
           pq.push(points[i]);
           
           
        }
         
        
        
        vector<vector<int>> t;
        
        for(int i=0;i<K;i++){
          t.push_back(pq.top());
          pq.pop();
            
        }
        return t;
    }
};

```
