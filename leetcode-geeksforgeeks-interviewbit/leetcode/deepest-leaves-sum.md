---
title: Deepest Leaves Sum
summary: Deepest Leaves Sum LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/deepest-leaves-sum", "/blog/posts/deepest-leaves-sum", "/deepest-leaves-sum"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, deepest-leaves-sum solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Deepest Leaves Sum/problem-solving.webp
    alt: Deepest Leaves Sum
    hiddenInList: true
    hiddenInSingle: false
---


<h2>1302. Deepest Leaves Sum</h2><h3>Medium</h3><hr><div>Given the <code>root</code> of a binary tree, return <em>the sum of values of its deepest leaves</em>.
<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/07/31/1483_ex1.png" style="width: 273px; height: 265px;">
<pre><strong>Input:</strong> root = [1,2,3,4,5,null,6,7,null,null,null,null,8]
<strong>Output:</strong> 15
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> root = [6,7,8,2,7,1,3,9,null,1,4,null,null,null,5]
<strong>Output:</strong> 19
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[1, 10<sup>4</sup>]</code>.</li>
	<li><code>1 &lt;= Node.val &lt;= 100</code></li>
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
    int deepestLeavesSum(TreeNode* root) {
      int s=0;
        if(root==NULL)
            return 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int k=q.size();
            s=0;
            while(k--){
                TreeNode* curr=q.front();
                q.pop();
                s+=curr->val;
                if(curr->left)
                   q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
        }
        return s;
    }
};
```
