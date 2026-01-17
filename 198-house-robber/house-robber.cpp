class Solution {
public:
    /*int rob(vector<int>& nums) {

        return helper(nums, 0, 0);
        
    }*/

    //recursive
    /*int helper(vector<int>& nums, int index, int money)
    {
        if(index>=nums.size())
            return money;

        return max(helper(nums, index+1, money), helper(nums, index+2, money+nums[index]));

    }*/

    //bottom up
    int rob(vector<int>& nums) {

        int n = nums.size();

        if(n==1) return nums[0];

        vector<int> memo(n, 0);

        memo[0] = nums[0];
        memo[1] = max(nums[0], nums[1]);

        for(int i=2; i<n; i++)
        {
            memo[i] = max(memo[i-1], memo[i-2] + nums[i]);
        }

        return memo[n-1];

    }
};