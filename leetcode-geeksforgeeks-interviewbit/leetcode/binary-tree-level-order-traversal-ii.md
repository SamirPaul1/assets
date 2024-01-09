---
title: Binary Tree Level Order Traversal Ii
summary: Binary Tree Level Order Traversal Ii LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "binary-tree-level-order-traversal-ii LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Binary Tree Level Order Traversal Ii - Solution Explained/problem-solving.webp
    alt: Binary Tree Level Order Traversal Ii
    hiddenInList: true
    hiddenInSingle: false
---


<h2>107. Binary Tree Level Order Traversal II</h2><h3>Easy</h3><hr><div><p>Given a binary tree, return the <i>bottom-up level order</i> traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).</p>

<p>
For example:<br>
Given binary tree <code>[3,9,20,null,null,15,7]</code>,<br>
</p><pre>    3
   / \
  9  20
    /  \
   15   7
</pre>
<p></p>
<p>
return its bottom-up level order traversal as:<br>
</p><pre>[
  [15,7],
  [9,20],
  [3]
]
</pre>
<p></p></div>

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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
      vector<vector<int>> ans;
        if (root == NULL)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int l = q.size();
            vector<int> curr;
            for (int i = 0; i < l; i++) {
                TreeNode *cur = q.front();
                q.pop();
                curr.push_back(cur->val);
                if (cur->left != NULL) q.push(cur->left);
                if (cur->right != NULL) q.push(cur->right);
            }
            ans.push_back(curr);
        }
        reverse(ans.begin(), ans.end());
        return ans;  
    }
};
```
