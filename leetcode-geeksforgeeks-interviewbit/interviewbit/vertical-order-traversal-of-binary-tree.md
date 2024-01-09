---
title: Vertical Order Traversal Of Binary Tree
summary: Vertical Order Traversal Of Binary Tree - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: ["interviewbit", "interviewbit solution in Python3 C++ Java", "Vertical Order Traversal Of Binary Tree Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Vertical Order Traversal Of Binary Tree - Solution Explained/problem-solving.webp
    alt: Vertical Order Traversal Of Binary Tree
    hiddenInList: true
    hiddenInSingle: false
---

# Vertical Order Traversal

https://www.interviewbit.com/problems/vertical-order-traversal


## Solution

```cpp
// editorial

vector<vector<int>> Solution::verticalOrderTraversal(TreeNode *root) {
    vector<vector<int>> result;
    if (!root)
        return result;
    map<int, vector<int>> m; // sorted by key order
    queue<pair<TreeNode *, int>> q;
    q.push(make_pair(root, 0));
    while (!q.empty()) {
        auto front = q.front();
        q.pop();
        TreeNode *node = front.first;
        int height = front.second;
        m[height].push_back(node->val);
        if (node->left)
            q.push(make_pair(node->left, height - 1));
        if (node->right)
            q.push(make_pair(node->right, height + 1));
    }
    for (auto &x : m)
        result.push_back(x.second);
    return result;
}

// mine

vector<vector<int>> Solution::verticalOrderTraversal(TreeNode *root) {
    vector<vector<int>> res;

    if (!root)
        return res;

    map<int, vector<int>> m;
    int hd = 0;

    queue<pair<TreeNode *, int>> que;
    que.push(make_pair(root, hd));

    while (!que.empty()) {
        // pop from queue front
        pair<TreeNode *, int> temp = que.front();
        que.pop();
        hd = temp.second;
        TreeNode *node = temp.first;

        // insert this node's data in vector of hash
        m[hd].push_back(node->val);

        if (node->left != NULL)
            que.push(make_pair(node->left, hd - 1));
        if (node->right != NULL)
            que.push(make_pair(node->right, hd + 1));
    }

    for (auto &x : m) {
        vector<int> v;
        for (int i = 0; i < x.second.size(); ++i)
            v.push_back(x.second[i]);
        res.push_back(v);
    }

    return res;
}
```