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

    void populateArr(TreeNode *root, vector<int> &v)
    {
        if(root == nullptr) return;

        populateArr(root->left, v);
        v.push_back(root->val);
        populateArr(root->right, v);

    }

    TreeNode* helper(vector<int>& arr, int left, int right)
    {
        if(left>right)
            return nullptr;
            
       int mid = left+(right-left)/2;
        TreeNode *root = new TreeNode(arr[mid]);
        
        root->left = helper(arr, left, mid-1);
        root->right = helper(arr, mid+1, right);
        
        return root;       
    }


    TreeNode* balanceBST(TreeNode* root) {

        vector<int> v;

        populateArr(root, v);
        
        return helper(v, 0, v.size()-1);
        
    }
};