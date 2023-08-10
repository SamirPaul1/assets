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
     int maxAncestorDiffMM(TreeNode* node, int mx, int mn){
        return node ? max(maxAncestorDiffMM(node->left, max(node->val, mx), min(node->val, mn)),
                    maxAncestorDiffMM(node->right, max(node->val, mx), min(node->val, mn))): mx-mn;
    }
    int maxAncestorDiff(TreeNode* root) {
      return maxAncestorDiffMM(root, 0, INT_MAX);  
    }
};