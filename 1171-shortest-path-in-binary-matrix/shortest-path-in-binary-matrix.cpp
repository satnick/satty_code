class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {

           int rows = grid.size();
    int cols = grid[0].size();

    if (grid[0][0] == 1 || grid[rows - 1][cols - 1] == 1)
        return -1;

    queue<vector<int>>q;
    vector<int>cur = { 0,0,1 };
    q.push(cur);
    grid[0][0] = 1; //marking visited cell(0,0)

    vector<vector<int>> dirs = { {1,0}, {-1,0}, {0,1}, {0, -1}, {-1,-1}, { -1,1}, {1,-1}, {1,1} };
    int dist = 0;
    while (q.empty() == false)
    {
        vector<int> cur = q.front();
        int r = cur[0];
        int c = cur[1];
        dist = cur[2];

        q.pop();

        if (r == rows - 1 && c == cols - 1)
            return dist;

        for (auto d : dirs)
        {
            int nr = r + d[0];
            int nc = c + d[1];


            if (nr >= 0 && nr < rows && nc >= 0 && nc < cols && grid[nr][nc] == 0)
            {
                vector<int> v = { nr, nc, dist + 1 };
                q.push(v);
                grid[nr][nc] = 1;
            }
        }
    }

    return -1;
        
    }
};