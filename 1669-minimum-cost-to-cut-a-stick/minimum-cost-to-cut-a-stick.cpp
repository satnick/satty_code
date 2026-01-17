class Solution {

    map<pair<int, int> ,int> memo;
public:
    int minCost(int n, vector<int>& cuts) {

       return  helper(cuts, 0, n) ;        
    }

    int helper(vector<int> & cuts, int left, int right)
    {
        pair<int, int> key = {left, right};
        if(memo.find(key) != memo.end())
        {
            return memo[key];
        }

        int minCost = INT_MAX;
        for(int i=0; i<cuts.size(); i++)
        {
            int currentCost = 0;
            if(cuts[i] > left && cuts[i] < right)
            {
                currentCost = (right-left) + helper(cuts, left, cuts[i]) + helper(cuts, cuts[i], right);
                minCost = min(minCost, currentCost);
            }
        }

        memo[{left, right}] = (minCost==INT_MAX) ? 0 : minCost;

        return memo[{left, right}];
    }   


};