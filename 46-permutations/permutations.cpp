class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {

        vector<bool> visited(nums.size(), false);
        vector<vector<int>> res;
        vector<int> cur;

        findPermute(nums, visited, res, cur);

        return res;
        
    }

    void findPermute(vector<int>& nums, vector<bool> &visited, vector<vector<int>> &res,vector<int> &cur)
    {

        if(cur.size() == nums.size())
        {
            res.push_back(cur);
            return;
        }

        for(int i=0; i<nums.size(); i++)
        {
            if(visited[i] == false)
            {
                visited[i] = true;
                cur.push_back(nums[i]);
                findPermute(nums, visited, res, cur);
                cur.erase(cur.begin()+cur.size()-1);
                visited[i] = false;
            }
        }
    }
};