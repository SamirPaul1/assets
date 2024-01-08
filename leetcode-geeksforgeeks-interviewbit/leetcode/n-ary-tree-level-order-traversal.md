---
title: N Ary Tree Level Order Traversal
summary: N Ary Tree Level Order Traversal LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/n-ary-tree-level-order-traversal", "/blog/posts/n-ary-tree-level-order-traversal", "/n-ary-tree-level-order-traversal"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, n-ary-tree-level-order-traversal solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:N Ary Tree Level Order Traversal/problem-solving.webp
    alt: N Ary Tree Level Order Traversal
    hiddenInList: true
    hiddenInSingle: false
---


<h2>429. N-ary Tree Level Order Traversal</h2><h3>Medium</h3><hr><div><p>Given an n-ary tree, return the <em>level order</em> traversal of its nodes' values.</p>

<p><em>Nary-Tree input serialization is represented in their level order traversal, each group of children is separated by the null value (See examples).</em></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<p><img src="https://assets.leetcode.com/uploads/2018/10/12/narytreeexample.png" style="width: 100%; max-width: 300px;"></p>

<pre><strong>Input:</strong> root = [1,null,3,2,4,null,5,6]
<strong>Output:</strong> [[1],[3,2,4],[5,6]]
</pre>

<p><strong>Example 2:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2019/11/08/sample_4_964.png" style="width: 296px; height: 241px;"></p>

<pre><strong>Input:</strong> root = [1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]
<strong>Output:</strong> [[1],[2,3,4,5],[6,7,8,9,10],[11,12,13],[14]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The height of the n-ary tree is less than or equal to <code>1000</code></li>
	<li>The total number of nodes is between <code>[0, 10<sup>4</sup>]</code></li>
</ul>
</div>

---




```cpp
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int k=q.size();
            vector<int> v;
            while(k--){
                Node* curr=q.front();
                    q.pop();
                v.push_back(curr->val);
                int sz=curr->children.size();
                for(int i=0;i<sz;i++){
                    if(curr->children[i]!=NULL)
                        q.push(curr->children[i]);
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};
```
