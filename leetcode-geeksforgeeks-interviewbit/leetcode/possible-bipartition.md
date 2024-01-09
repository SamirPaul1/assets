---
title: Possible Bipartition
summary: Possible Bipartition LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "possible-bipartition LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Possible Bipartition - Solution Explained/problem-solving.webp
    alt: Possible Bipartition
    hiddenInList: true
    hiddenInSingle: false
---


[Discussion Post (created on 29/0/2021 at 18:55)](https://leetcode.com/problems/possible-bipartition/discuss/1040464/DFS-or-C%2B%2B-or-Coloring)  
<h2>886. Possible Bipartition</h2><h3>Medium</h3><hr><div><p>Given a set of <code>N</code>&nbsp;people (numbered <code>1, 2, ..., N</code>), we would like to split everyone into two groups of <strong>any</strong> size.</p>

<p>Each person may dislike some other people, and they should not go into the same group.&nbsp;</p>

<p>Formally, if <code>dislikes[i] = [a, b]</code>, it means it is not allowed to put the people numbered <code>a</code> and <code>b</code> into the same group.</p>

<p>Return <code>true</code>&nbsp;if and only if it is possible to split everyone into two groups in this way.</p>

<p>&nbsp;</p>

<div>
<div>
<ol>
</ol>
</div>
</div>

<div>
<p><strong>Example 1:</strong></p>

<pre><strong>Input: </strong>N = <span id="example-input-1-1">4</span>, dislikes = <span id="example-input-1-2">[[1,2],[1,3],[2,4]]</span>
<strong>Output: </strong><span id="example-output-1">true</span>
<strong>Explanation</strong>: group1 [1,4], group2 [2,3]
</pre>

<div>
<p><strong>Example 2:</strong></p>

<pre><strong>Input: </strong>N = <span id="example-input-2-1">3</span>, dislikes = <span id="example-input-2-2">[[1,2],[1,3],[2,3]]</span>
<strong>Output: </strong><span id="example-output-2">false</span>
</pre>

<div>
<p><strong>Example 3:</strong></p>

<pre><strong>Input: </strong>N = <span id="example-input-3-1">5</span>, dislikes = <span id="example-input-3-2">[[1,2],[2,3],[3,4],[4,5],[1,5]]</span>
<strong>Output: </strong><span id="example-output-3">false</span>
</pre>
</div>
</div>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= N &lt;= 2000</code></li>
	<li><code>0 &lt;= dislikes.length &lt;= 10000</code></li>
	<li><code>dislikes[i].length == 2</code></li>
	<li><code>1 &lt;= dislikes[i][j] &lt;= N</code></li>
	<li><code>dislikes[i][0] &lt; dislikes[i][1]</code></li>
	<li>There does not exist <code>i != j</code> for which <code>dislikes[i] == dislikes[j]</code>.</li>
</ul></div>

---




```cpp
class Solution {
public:
    
    bool dfs(int i, vector<int> &vis, vector<int> &color, int c, vector<vector<int>>& g){
        vis[i]=1;
        color[i]=c;
        for(int u : g[i]){
            if(color[i]==color[u])
                return false;
            if(!vis[u] && dfs(u, vis, color, c^1, g)==false)
                return false;
        }
        return true;
    }
    
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
       vector<int> vis(N+1, 0);
       vector<int> color(N+1, -1);
       int c=1;
       bool ans=true;
       vector<vector<int>> g(N+1);
       for(vector<int> v: dislikes){
           g[v[0]].push_back(v[1]);
           g[v[1]].push_back(v[0]);
       }
       for(int i=1;i<N+1;i++){
           if(vis[i]==0)
              ans= ans && dfs(i, vis, color, c, g);
       }
       return ans;
    }
};
```
