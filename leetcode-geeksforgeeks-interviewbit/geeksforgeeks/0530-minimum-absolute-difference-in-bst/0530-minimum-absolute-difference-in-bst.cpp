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
    private:
    void inOrderTraversal(TreeNode* node, int& minDiff, int& prevVal) {
        if (node == nullptr)
            return;

        inOrderTraversal(node->left, minDiff, prevVal);

        if (prevVal != -1)
            minDiff = std::min(minDiff, node->val - prevVal);

        prevVal = node->val;

        inOrderTraversal(node->right, minDiff, prevVal);
    }
    
public:
    int getMinimumDifference(TreeNode* root) {
      int minDiff = std::numeric_limits<int>::max();
        int prevVal = -1;

        inOrderTraversal(root, minDiff, prevVal);

        return minDiff;  
    }
};