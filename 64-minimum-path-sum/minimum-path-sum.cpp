class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        vector<vector<int>> sumVec = grid;

        for(int i=1; i<row; i++)
        {
            sumVec[i][0] = sumVec[i-1][0] + sumVec[i][0];
        }

         for(int j=1; j<col; j++)
        {
            sumVec[0][j] = sumVec[0][j-1] + sumVec[0][j];
        }

        for(int i=1; i< row; i++)
        {
            for(int j=1; j<col; j++)
            {
                int minVal = min(sumVec[i-1][j], sumVec[i][j-1]);
                sumVec[i][j] = sumVec[i][j] + minVal;
            }
        }

        return sumVec[row-1][col-1];
        
    }
};