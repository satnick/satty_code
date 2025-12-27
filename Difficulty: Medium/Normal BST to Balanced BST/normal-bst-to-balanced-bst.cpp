/*Structure of the Node of the BST is as
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {

  public:
  
   void populateArr(Node *root, vector<int> &v)
    {
        if(root == nullptr) return;

        populateArr(root->left, v);
        v.push_back(root->data);
        populateArr(root->right, v);

    }

    Node* helper(vector<int>& arr, int left, int right)
    {
        if(left>right)
            return nullptr;
            
       int mid = left+(right-left)/2;
        Node *root = new Node(arr[mid]);
        
        root->left = helper(arr, left, mid-1);
        root->right = helper(arr, mid+1, right);
        
        return root;       
    }
    
    Node* balanceBST(Node* root) {
        // Code here
        
         vector<int> v;

        populateArr(root, v);
        
        return helper(v, 0, v.size()-1);
        
        
    }
};