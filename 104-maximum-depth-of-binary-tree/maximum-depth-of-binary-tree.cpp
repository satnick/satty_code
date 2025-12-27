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

    /*int helper(TreeNode* root)
    {
        if(root == nullptr)
            return 0;

        int leftHeight = helper(root->left);
        int rightHeight = helper(root->right);

        if(leftHeight>= rightHeight)
        {
            return 1+leftHeight;;
        }

        return 1+rightHeight;
    }*/

    int maxDepth(TreeNode* root) {

        if(root == nullptr)
            return 0;

        int leftHeight = maxDepth(root->left);
        int rightHeight = maxDepth(root->right);

        if(leftHeight>= rightHeight)
        {
            return 1+leftHeight;;
        }

        return 1+rightHeight;
        
    }
};