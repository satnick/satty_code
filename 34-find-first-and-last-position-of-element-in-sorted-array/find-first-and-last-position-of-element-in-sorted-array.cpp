class Solution {
public:
    vector<int> searchRange(vector<int>& ar, int target) {
        int n = ar.size();
        int left = 0, right = n-1;

        if(ar.empty())
            return {-1,-1};


        vector<int> v;
         int mid = -1;
        while(left<=right) 
        {
            mid = left + (right-left)/2;
            if(ar[mid] == target)
            {
                break;
            }
            else if(ar[mid] > target)
            {
                right = mid-1;
            }
            else
            {
                left = mid+1;
            }            
        }
        if(left > right)return{-1,-1};

        int first, second;
        left = 0, right = mid;
        while(left <= right)
        {
            int mid1 = left + (right-left)/2;
            if(ar[mid1] == target){
                
                first = mid1;
                right = mid1-1;
                
                
            }
            else
            {
                left = mid1+1;
                
            }

        }

        //first = ar[left]==target ? left:-1;

        left = mid, right = n-1;
        while(left <= right)
        {
            int mid1 = left + (right-left)/2;
            if(ar[mid1] == target){                
                
                second = mid1;
                left = mid1+1;
                
                
            }
            else
            {
                right = mid1-1;
            }

        }
      //  second = ar[right] == target ? right:-1;

        return {first, second};
        
    }
};