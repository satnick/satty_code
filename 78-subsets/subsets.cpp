class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> res;
        vector<int> cur;

        int index = 0;

        helper(nums, index, cur, res);

        return res;
        
    }

    void helper(vector<int> &nums, int index, vector<int> &curr, vector<vector<int>> &res)
    {
        if(index == nums.size())
        {
            res.push_back(curr);
            return;
        }

        curr.push_back(nums[index]);
        helper(nums, index+1, curr, res);

        curr.pop_back();
        helper(nums, index+1, curr, res);

    }
};