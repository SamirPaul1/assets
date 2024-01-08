---
title: Construct String From Binary Tree
summary: Construct String From Binary Tree LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/construct-string-from-binary-tree", "/blog/posts/construct-string-from-binary-tree", "/construct-string-from-binary-tree"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, construct-string-from-binary-tree solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Construct String From Binary Tree/problem-solving.webp
    alt: Construct String From Binary Tree
    hiddenInList: true
    hiddenInSingle: false
---


<h2>606. Construct String from Binary Tree</h2><h3>Easy</h3><hr><div><p>Given the <code>root</code> of a binary tree, construct a string consists of parenthesis and integers from a binary tree with the preorder traversing way, and return it.</p>

<p>Omit all the empty parenthesis pairs that do not affect the one-to-one mapping relationship between the string and the original binary tree.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/03/cons1-tree.jpg" style="width: 292px; height: 301px;">
<pre><strong>Input:</strong> root = [1,2,3,4]
<strong>Output:</strong> "1(2(4))(3)"
<strong>Explanation:</strong> Originallay it needs to be "1(2(4)())(3()())", but you need to omit all the unnecessary empty parenthesis pairs. And it will be "1(2(4))(3)"
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/03/cons2-tree.jpg" style="width: 207px; height: 293px;">
<pre><strong>Input:</strong> root = [1,2,3,null,4]
<strong>Output:</strong> "1(2()(4))(3)"
Explanation: Almost the same as the first example, except we cannot omit the first parenthesis pair to break the one-to-one mapping relationship between the input and the output.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[1, 10<sup>4</sup>]</code>.</li>
	<li><code>-1000 &lt;= Node.val &lt;= 1000</code></li>
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
    string tree2str(TreeNode* root) {
        if(root==NULL)
            return "";
        string s=to_string(root->val);
        if(root->left){
            s+='(';
            s+=tree2str(root->left);
            s+=')';
        }
        else if(root->right){
            s+="()";
        }
        if(root->right){
            s+='(';
            s+=tree2str(root->right);
            s+=')';
        }
        return s;
    }
};
```
