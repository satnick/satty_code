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
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;

        bstToSortedArray(root, v);
        int left=0, right = v.size()-1;
        while(left<right)
        {   
            int sum = v[left] +v[right];
            if(sum<k)
                left++;
            else if(sum > k)
                right--;
            else
                return true;
           
        }
        return false;
        
    }

    void bstToSortedArray(TreeNode *root, vector<int> &v)
    {
        if(root == nullptr)
            return;
        
        bstToSortedArray(root->left, v);
        v.push_back(root->val);
        bstToSortedArray(root->right, v);
    }
};