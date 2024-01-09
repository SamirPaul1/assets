---
title: Binary Tree Cameras
summary: Binary Tree Cameras LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "binary-tree-cameras LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Binary Tree Cameras - Solution Explained/problem-solving.webp
    alt: Binary Tree Cameras
    hiddenInList: true
    hiddenInSingle: false
---


<h2>968. Binary Tree Cameras</h2><h3>Hard</h3><hr><div><p>You are given the <code>root</code> of a binary tree. We install cameras on the tree nodes where each camera at a node can monitor its parent, itself, and its immediate children.</p>

<p>Return <em>the minimum number of cameras needed to monitor all nodes of the tree</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/29/bst_cameras_01.png" style="width: 138px; height: 163px;">
<pre><strong>Input:</strong> root = [0,0,null,0,0]
<strong>Output:</strong> 1
<strong>Explanation:</strong> One camera is enough to monitor all nodes if placed as shown.
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/29/bst_cameras_02.png" style="width: 139px; height: 312px;">
<pre><strong>Input:</strong> root = [0,0,null,0,null,0,null,null,0]
<strong>Output:</strong> 2
<strong>Explanation:</strong> At least two cameras are needed to monitor all nodes of the tree. The above image shows one of the valid configurations of camera placement.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[1, 1000]</code>.</li>
	<li><code>Node.val == 0</code></li>
</ul>
</div>

---




```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans;
    set<TreeNode*> cov;
    
    void dfs(TreeNode* root, TreeNode* p){
        if(root==NULL)
            return;
        dfs(root->left,root);
        dfs(root->right,root);
        if(p==NULL && cov.find(root)==cov.end() || cov.find(root->left)==cov.end() || cov.find(root->right)==cov.end()){
            ans++;
            cov.insert(root);
            cov.insert(p);
            cov.insert(root->left);
            cov.insert(root->right);
        }
    }
    
    int minCameraCover(TreeNode* root) {
        ans=0;
        cov.insert(NULL);
        dfs(root,NULL);
        return ans;
    }
};
```
