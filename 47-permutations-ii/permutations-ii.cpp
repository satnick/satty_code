class Solution {
public:

    void helper(vector<int>&nums, vector<int>& cur, set<vector<int>> &res, vector<bool> &visited)
    {
        if(res.find(cur) != res.end())
        {
            return;

        }
        if(cur.size() == nums.size())
        {
            res.insert(cur);
            return;
        }

        for(int i=0; i<nums.size(); i++)
        {
            if(visited[i] == false)
            {
                visited[i] = true;
                cur.push_back(nums[i]);
                helper(nums, cur, res, visited);
                cur.pop_back();
                visited[i] = false;
            }
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {

        //vector<vector<int>> res;
        vector<int> cur;
        set<vector<int>> res;
        vector<bool> visited(nums.size(), false);

        helper(nums, cur, res, visited);

        vector v(res.begin(), res.end());

        return v;

        
    }
};