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

   
    queue<TreeNode*> q;

public:
    int findBottomLeftValue(TreeNode* root) {
        
        q.push(root);
        int prev = 0;

        while(q.size() > 0)
        {

            int levelCount = q.size();

            for(int i=0; i<levelCount; i++)
            {
                TreeNode *node = q.front();
                q.pop();

                if(i==0)
                {
                    prev = node->val;
                }

                if(node->left)
                    q.push(node->left);

                
                if(node->right)
                    q.push(node->right);
            }

        }

        return prev;

        
    }
};