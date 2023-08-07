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
    int ans;
    
    int maxPathDown(TreeNode* node){
        if(!node) return 0;
        //max sum of path rooted at node->left, going down
        int left = max(maxPathDown(node->left), 0);
        //max sum of path rooted at node->right, going down
        int right = max(maxPathDown(node->right), 0);
        ans = max(ans, left+right+node->val);
        //max sum of path that goes down
        return node->val + max(left, right);
    };
    int maxPathSum(TreeNode* root) {
         ans = INT_MIN;
        
        maxPathDown(root);
        
        return ans;
    }
};