class Solution {
public:

    
    int coinChange(vector<int>& coins, int amount) {

        vector<int> memo(amount+1, -1);

        int minCount = helper(coins, amount, memo);

        return minCount == INT_MAX ? -1 : minCount;
        
    }

    int helper(vector<int> &coins, int amount, vector<int>& memo)
    {
        if(amount < 0) return INT_MAX;
        if(amount == 0) return 0;

        if(memo[amount] != -1)
            return memo[amount];

        int minCount = INT_MAX;

        for(int i=0; i<coins.size(); i++)
        {
            int count = helper(coins, amount - coins[i], memo);
            if(count!= INT_MAX)
                minCount = min(minCount, 1+ count);
               // memo[amount] = min( memo[amount], 1+ count);
        }

        return memo[amount] = minCount;
    }


    //recursive
    /*int helper(vector<int> &coins, int amount)
    {
        if(amount < 0) return INT_MAX;
        if(amount == 0) return 0;

        int minCount = INT_MAX;

        for(int i=0; i<coins.size(); i++)
        {
            int count = helper(coins, amount - coins[i]);
            if(count!= INT_MAX)
                minCount = min(minCount, 1+ count);
        }

        return minCount;
    }*/
};