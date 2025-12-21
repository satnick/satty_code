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
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> finalRes;

        if(!root) return finalRes;

        queue<TreeNode*> q;

        q.push(root);

        while(!q.empty())
        {
           int n = q.size();

            int i=0;
            vector<int> curResult;
            while(i<n)
            {
                TreeNode *curNode = q.front();
                q.pop();
                curResult.push_back(curNode->val);

                if(curNode->left)
                {
                    q.push(curNode->left);
                }
                if(curNode->right)
                {
                    q.push(curNode->right);
                }
                i++;
            }
            finalRes.push_back(curResult);
           
        }

        return finalRes;


        
    }
};