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

    bool helper(TreeNode *root, int sum, int targetSum)
    {
        if(root == nullptr)
            return false;
        if(root->left == nullptr && root->right == nullptr && targetSum == sum+root->val)
            return true;
        
        
        return helper(root->left, sum+(root->val), targetSum) || helper(root->right, sum+(root->val), targetSum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {

        return helper(root, 0, targetSum);
        
    }
};