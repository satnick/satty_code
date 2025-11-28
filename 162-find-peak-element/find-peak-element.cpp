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
            if(nums[mid+1] > nums[mid])// if mid+1 element is greater than mid element, then certainly there would be some element smaller element than mid+1, so check in right
            {
                left = mid+1;
            }
            else ////if mid element is greater than mid+1 element then either this mid element or any other element on left would be peak element so check in left part of mid
            {
                right = mid; 
            }
        }
        return right;
        
    }
};