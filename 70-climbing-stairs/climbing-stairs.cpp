class Solution {
public:

    //bottom up 
     int climbStairs(int n) {

        if(n==1) return 1;

        vector<int>memo(n+1, 0);

        memo[1] = 1;
        memo[2] = 2;

        for(int i=3; i<=n; i++)
        {
            memo[i] = memo[i-1] + memo[i-2];
        }


        return memo[n];     
     }

    //top down
    /*int climbStairs(int n) {

        if(n==1 || n==2)
        {
            return n;
        }

        vector<int> memo(n+1,0);
        memo[1] = 1;
        memo[2] = 2;

        helper(n, memo);

        return memo[n];
        
    }

    int helper(int n, vector<int>&memo)
    {
        if(memo[n] != 0)
            return memo[n];

        memo[n] = helper(n-1, memo) + helper(n-2, memo);
        return memo[n];
    }*/

};