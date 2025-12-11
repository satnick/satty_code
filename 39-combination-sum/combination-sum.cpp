class Solution {
public:

    void helper(vector<int> &ar, int target, int ind, vector<int> res, vector<vector<int>> & finalRes)
    {
        if(target == 0)
        {
            finalRes.push_back(res);
        }

        if(target<0)
            return;

        for(int i= ind; i<ar.size(); i++)
        {
            res.push_back(ar[i]);
            helper(ar, target-ar[i], i, res, finalRes);
            res.erase(res.begin() + res.size()-1);
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> finalRes;
        vector<int> res;
        
        helper(candidates, target, 0,  res, finalRes);

        return finalRes;
    }
};