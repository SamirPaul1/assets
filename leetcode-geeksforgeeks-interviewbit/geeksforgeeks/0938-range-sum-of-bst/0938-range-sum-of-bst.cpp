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
    int rangeSumBST(TreeNode* root, int low, int high) {
       int sum = 0;
        std::stack<TreeNode*> stack = std::stack<TreeNode*>();
        stack.push(root);
        
        while(!stack.empty()){
            TreeNode* node = stack.top();
            stack.pop(); //it returns NULL!
            
            if(node->val >= low && node->val <= high){
                sum+=node->val;
            }
            //trimming
            // if(node->left!=NULL && node->val >= low){
            if(node->left && node->val >= low){
                stack.push(node->left);
            }
            
            // if(node->right!=NULL && node->val <= high){
            if(node->right && node->val <= high){
                stack.push(node->right);
            }
        }
        return sum;  
    }
};