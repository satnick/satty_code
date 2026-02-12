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

    void findSum(TreeNode* root, int low, int high, int &sum)
    {
        if(root == nullptr)
            return;
        if(root->val >= low && root->val <= high)
        {
            sum += root->val;
            findSum(root->left, low, high, sum);
            findSum(root->right, low, high, sum);
        }
        else if(root->val > high)
        {
            findSum(root->left, low, high, sum);
        }
         else if(root->val < low)
        {
            findSum(root->right, low, high, sum);
        }
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        int sum = 0;
        findSum(root, low, high, sum);
        return sum;
    }
};