class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int sum=0;
        int res = 0;
        for(int i=0; i<32; i++)
        {
            sum=0;
            int shiftVal = 1<<i;
            for(int i=0; i<nums.size(); i++)
            {
                
                if(nums[i] & shiftVal)
                {
                    sum++;
                }
            }
            if(sum%3 == 1)
            {
                res = res | 1<<i;
            }
          
        }

        return res;
        
    }
};