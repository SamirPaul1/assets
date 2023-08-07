---
title: subtree of another tree
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, subtree-of-another-tree solution
description: subtree of another tree LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---


<h2>572. Subtree of Another Tree</h2><h3>Easy</h3><hr><div><p>Given two <strong>non-empty</strong> binary trees <b>s</b> and <b>t</b>, check whether tree <b>t</b> has exactly the same structure and node values with a subtree of <b>s</b>. A subtree of <b>s</b> is a tree consists of a node in <b>s</b> and all of this node's descendants. The tree <b>s</b> could also be considered as a subtree of itself.</p>

<p><b>Example 1:</b><br>
Given tree s:</p>

<pre>     3
    / \
   4   5
  / \
 1   2
</pre>
Given tree t:

<pre>   4 
  / \
 1   2
</pre>
Return <b>true</b>, because t has the same structure and node values with a subtree of s.

<p>&nbsp;</p>

<p><b>Example 2:</b><br>
Given tree s:</p>

<pre>     3
    / \
   4   5
  / \
 1   2
    /
   0
</pre>
Given tree t:

<pre>   4
  / \
 1   2
</pre>
Return <b>false</b>.

<p>&nbsp;</p>
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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        
        if(!s) return false;
        if (isSame(s,t)) return true;
        
        return isSubtree(s->left,t) || isSubtree(s->right,t);
        
    }
    bool isSame(TreeNode *s, TreeNode *t)
    {
        if (!s && !t) return true;
        if (!s || !t) return false;
        if (s->val != t->val) return false;
        
        return isSame(s->left, t->left) && isSame(s->right, t->right);
        
    }
};
```
