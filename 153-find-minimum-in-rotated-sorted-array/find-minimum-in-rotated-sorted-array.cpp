class Solution {
public:
    int findMin(vector<int>& nums) {

        int left = 0, right = nums.size()-1;

        while(left<right)
        {
            int mid = left + (right-left)/2;

            if(nums[mid]>nums[right]) //means small element will be on right side of mid so left = mid +1
            {
                left = mid+1;
            }
            else
            {
                right = mid; //if mid element is small means either its the smallest or elements on left will be smallest
            }

        }
       

        return nums[left];
        
    }
};