/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    
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
  
    Node* sortedArrayToBST(vector<int>& arr) {
        // code here
        //Node *root = nullptr;
        return helper(arr, 0, arr.size()-1);
        
      //  return root;
    }
};