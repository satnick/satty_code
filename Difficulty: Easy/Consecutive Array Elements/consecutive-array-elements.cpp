
class Solution {

  public:
    bool areConsecutives(vector<int>& ar) {
        // Your code goes here
        
        int minimum = INT_MAX;
        int maximum = INT_MIN;
        
        for(int i=0;i<ar.size(); i++)
        {
            minimum = min(minimum, ar[i]);
            maximum = max(maximum, ar[i]);
        }
        
        int n = ar.size();
        if(maximum-minimum + 1 == n)
            return true;
            
        return false;
    }
};
