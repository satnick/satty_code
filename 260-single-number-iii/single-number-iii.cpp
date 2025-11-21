class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        int xorVal = 0;

        for(auto i:nums)
        {
            xorVal = xorVal ^ i;
        }

        vector<int> xorFilter(2,0) ;
        int setBitIndex=0;
        for(; setBitIndex<32; setBitIndex++)
        {
            if(xorVal & 1<<setBitIndex)
            {
                break;
            }
        }

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]&(1<<setBitIndex))
            {
                xorFilter[0] = xorFilter[0]^nums[i];
            }
            else
            {
                xorFilter[1] = xorFilter[1]^nums[i];
            }
        }


        

        return xorFilter;      
    }
};
