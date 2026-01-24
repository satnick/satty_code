class Solution {
public:
    int uniquePaths(int m, int n) {


        vector<vector<int>> memo(m, vector<int>(n, -1));
        return helper(m, n, 0, 0, memo);       

                
    }

    
    //Top down appraach
    int helper(int m, int n, int i, int j,  vector<vector<int>> &memo)
    {
        if(i==m || j==n)
            return 0;
        if(i==m-1 and j==n-1)
            return 1;

        if(memo[i][j] != -1)
            return memo[i][j];
        
        int count1 = helper(m, n, i+1, j, memo);
        int count2 = helper(m, n, i, j+1, memo);

        return  memo[i][j] = count1 + count2;
        
    }

    //  recursive approach

   /* int helper(int m, int n, int i, int j)
    {
        if(i==m || j==n)
            return 0;
        if(i==m-1 and j==n-1)
            return 1;
        
        int count1 = helper(m-1, n);
        int count2 = helper(m, n-1);

        return count1 + count2;
        
    }*/
};