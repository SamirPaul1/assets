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
    int minDiffInBST(TreeNode* root) {
    int ans = INT_MAX;
    inorder(root, ans);
    return ans;
  }

 private:
  int pred = -1;

  void inorder(TreeNode* root, int& ans) {
    if (root == nullptr)
      return;

    inorder(root->left, ans);
    if (pred >= 0)
      ans = min(ans, root->val - pred);
    pred = root->val;
    inorder(root->right, ans);    
    }
};