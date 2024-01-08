---
title: Average Of Levels In Binary Tree
summary: Average Of Levels In Binary Tree LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/average-of-levels-in-binary-tree", "/blog/posts/average-of-levels-in-binary-tree", "/average-of-levels-in-binary-tree"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, average-of-levels-in-binary-tree solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Average Of Levels In Binary Tree/problem-solving.webp
    alt: Average Of Levels In Binary Tree
    hiddenInList: true
    hiddenInSingle: false
---


[Discussion Post (created on 5/1/2021 at 0:6)](https://leetcode.com/problems/average-of-levels-in-binary-tree/discuss/1049896/C%2B%2B-or-BFS-Simple-Solution)  
<h2>637. Average of Levels in Binary Tree</h2><h3>Easy</h3><hr><div>Given a non-empty binary tree, return the average value of the nodes on each level in the form of an array.

<p><b>Example 1:</b><br>
</p><pre><b>Input:</b>
    3
   / \
  9  20
    /  \
   15   7
<b>Output:</b> [3, 14.5, 11]
<b>Explanation:</b>
The average value of nodes on level 0 is 3,  on level 1 is 14.5, and on level 2 is 11. Hence return [3, 14.5, 11].
</pre>
<p></p>

<p><b>Note:</b><br>
</p><ol>
<li>The range of node's value is in the range of 32-bit signed integer.</li>
</ol>
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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int k=q.size();
            double s=0.0;
            for(int i=0;i<k;i++){
                TreeNode* curr=q.front();
                s+=curr->val;
                q.pop();
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
            ans.push_back(s/k);
        }
        return ans;
    }
};
```
