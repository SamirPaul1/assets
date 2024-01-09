---
title: Path Sum
summary: Path Sum - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: ["interviewbit", "interviewbit solution in Python3 C++ Java", "Path Sum Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Path Sum - Solution Explained/problem-solving.webp
    alt: Path Sum
    hiddenInList: true
    hiddenInSingle: false
---

# Path Sum

https://www.interviewbit.com/problems/path-sum



Can you traverse the tree while keeping the sum from root to current node?

How can you check if you have reached the leaf or not?


Recursion might make this problem much easier to solve. 
You just need to keep a track of the sum from the root to the current node. 
Then it becomes a question of just checking if the current node is a leaf node, and if so, do the sum match.



## Solution

```cpp

// editorial

int Solution::hasPathSum(TreeNode *root, int sum) {
    if (!root) return false;
    if (!root->left && !root->right)
        return sum == root->val;
    int remainingSum = sum - root->val;
    return hasPathSum(root->left, remainingSum) || hasPathSum(root->right, remainingSum);
}

//////////////////////////////////////////////////////////

int pathsum(TreeNode* root, int sum, const int& target) {
    if (!root)
        return false;
    sum += root->val;
    if (!root->left && !root->right)
        return sum == target;
    return pathsum(root->left, sum, target) || pathsum(root->right, sum, target);
}
int Solution::hasPathSum(TreeNode* root, int target) {
    if (!root)
        return 0;
    return pathsum(root, 0, target);
}


```