class Solution {
public:
    void sortColors(vector<int>& nums) {

        int rCount = 0, wCount = 0, bCount = 0;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                rCount++;
            }
            else if(nums[i] == 1)
            {
                wCount++;
            }
            else
            {
                bCount++;
            }
        }
        int i=0;
        while(rCount>0)
        {
            nums[i++] = 0;
            rCount--;
        }
        while(wCount>0)
        {
            nums[i++] = 1;
            wCount--;
        }

        while(bCount>0)
        {
            nums[i++] = 2;
            bCount--;
        }
    }
};