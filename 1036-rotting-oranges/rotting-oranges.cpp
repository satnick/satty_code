class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        queue<pair<int,int>> q;
        int rows = grid.size();
        int cols = grid[0].size();
        int fresh = 0;
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                if(grid[i][j] == 1)
                    fresh++;
                else if(grid[i][j] ==2)
                    q.push(make_pair(i, j));
            }
        }
        int minutes = 0;
        while(q.empty() == false && fresh > 0)
        {
            minutes++;

            //how many rotten orages are there
            int rottenSize = q.size();
            vector<vector<int>> dir = {{1,0}, {-1,0}, {0,1}, {0, -1}};

            for(int i=0; i<rottenSize; i++)
            {
                //start rotting all the adjacent fresh oranges
                pair<int, int> curInd = q.front();
                q.pop();
                int current_rotten_orange_row = curInd.first;
                int current_rotten_orange_col = curInd.second;

                for(auto el : dir)
                {
                    int neighbor_row = current_rotten_orange_row + el[0];
                    int neighbor_col = current_rotten_orange_col + el[1];

                    if(neighbor_row >=0 && neighbor_row < rows && neighbor_col >=0 && neighbor_col < cols 
                        && grid[neighbor_row][neighbor_col] == 1)
                        {
                            //rot the fresh orange
                            grid[neighbor_row][neighbor_col]  = 2;
                            fresh--;
                            q.push(make_pair(neighbor_row, neighbor_col));
                        }
                }

            }

            
        }

        return fresh!=0 ? -1 : minutes;
        
    }
};