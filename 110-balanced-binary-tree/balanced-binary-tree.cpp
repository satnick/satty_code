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
    bool isBalanced(TreeNode* root) {

        return height(root) == -1 ? false : true;
        
    }

    int height(TreeNode *root)
    {
        if(root == nullptr) return 0;

        if(root->left == nullptr && root->right == nullptr)
            return 1;

        int left = height(root->left);
        int right = height(root->right);

        if(left == -1 || right == -1 || abs(right-left) > 1) //left or right will be -1 when the left subtree or right subtree is not balanced
            return -1;

        return 1+max(left, right);
    }
};