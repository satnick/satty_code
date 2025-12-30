class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        // Your code here
        set<int> st;
        st.insert(0);
        int sum = 0;
        
        for(int i=0; i< arr.size(); i++)
        {
            sum += arr[i];
            
            if(st.find(sum) != st.end())
                return true;
                
            else
            {
                st.insert(sum);
            }
        }
        
        return false;
    }
};