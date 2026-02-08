class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {

        vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));
        int count = 0;

        for(int i=0; i<grid.size();i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j] == '1' && visited[i][j] == false)
                {
                    helper(grid, i, j, visited);
                    count++;
                }
            }
        } 

        return count;       
    }

    void helper(vector<vector<char>>& grid, int row, int col, vector<vector<bool>>& visited)
    {       

        int m = grid.size();
        int n = grid[0].size();

        if(row >=m || row <0 || col >= n || col < 0) 
            return;

        if (visited[row][col] == true)
            return;

        if(grid[row][col] == '0') 
            return;

        visited[row][col] = true;

       helper(grid, row+1, col, visited);
       helper(grid, row-1, col, visited);
       helper(grid, row, col+1, visited);
       helper(grid, row, col-1, visited);
    }


};