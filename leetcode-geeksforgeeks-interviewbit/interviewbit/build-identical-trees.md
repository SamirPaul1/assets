---
title: Build Identical Trees
summary: Build Identical Trees - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Build Identical Trees solution]
aliases: ["/posts/build-identical-trees", "/blog/posts/build-identical-trees", "/build-identical-trees"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Build Identical Trees - Solution Explained/problem-solving.webp
    alt: Build Identical Trees
    hiddenInList: true
    hiddenInSingle: false
---

# Build Identical Trees

https://www.interviewbit.com/problems/build-identical-trees/

Given two binary trees T1 and T2, you have to find minimum number of insertions to be done in T1 to make it structurally identical to T2. Return -1 if not possible.

### Notes

Assume insertions are done in a normal fashion in the BSTs.
Assume while inserting, if the value of a node v is equal to value being inserted, we insert it in left subtree of node v.
You can insert any positive or negative integer.

### Example
```
Input 1: 

T1:       10
         / \
        9   20

T2:       5
         / \
        2   7
       /
      1

If you insert 8 into T1, it will be structurally identical to T2. Hence answer is 1.

Input 2: 

T1:       10
         / \
        9   20

T2:       5
           \
            7
```

You cannot make T1 and T2 structurally identical. Hence answer is -1.

## Solution
### Java
```java
public class Solution { 
    public int cntMatrixUtil(TreeNode A, TreeNode B, int min, int max) {
        int inserts = -1;

        if (A != null && B == null) {
            return inserts;
        }
        if (A != null && B != null) {
            inserts = 0;

        }
        if (A == null && B == null) {
            inserts = 0;
            return inserts;
        }
        if (A == null && B != null) {

            int mid = min + (max - min) / 2;

            A = new TreeNode(mid);
            inserts = 1;
        }
        int left = cntMatrixUtil(A.left, B.left, min, A.val);
        int right = cntMatrixUtil(A.right, B.right, A.val, max);

        if (left == -1 || right == -1) {
            return -1;
        }
        return inserts + cntMatrixUtil(A.left, B.left, min, A.val)
                + cntMatrixUtil(A.right, B.right, A.val, max);
    }

    public int cntMatrix(TreeNode A, TreeNode B) {
        return cntMatrixUtil(A, B, Integer.MIN_VALUE, Integer.MAX_VALUE);
    }
}

```
