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
    int maxLen = 0;
    void solve(TreeNode* node, bool leftDir, int currPathSteps) {
        if(!node) {
            return;
        }
        maxLen = max(maxLen, currPathSteps);
        if(leftDir) {
            solve(node->left, false, currPathSteps + 1);
            solve(node->right, true, 1); 
        }else {
            solve(node->right, true, currPathSteps + 1);
            solve(node->left, false, 1); 
        }
        return;
    }
    int longestZigZag(TreeNode* root) {
      solve(root, true, 0);
        solve(root, false, 0);
        return maxLen;
    }
};