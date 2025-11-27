class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        
        //vector<int>nums(v.size()+2);;

        //nums[-1] = INT_MIN;
       // nums[nums.size()] = INT_MIN;
        int left = 0, right = nums.size()-1;

        int mid = 0;

        while(left<right)
        {           
            mid = left + (right-left)/2;
            if(nums[mid+1] > nums[mid])
            {
                left = mid+1;
            }
            else 
            {
                right = mid;
            }
        }
        return right;
        
    }
};