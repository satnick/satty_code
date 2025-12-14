class Solution {
public:

    bool isValid(vector<vector<char>> board, int row, int col)
    {
        for(int i=row; i>=0; i--)
        {
            if(board[i][col] == 'Q')
                return false;
        }

        for(int i=row, j=col; i>=0 && j >=0; i--,j--)
        {
            if(board[i][j] == 'Q')
                return false;
        }

        for(int i=row, j=col; i>=0 && j <board[0].size(); i--,j++)
        {
            if(board[i][j] == 'Q')
                return false;
        }

        return true;
    }
    void helper(vector<vector<char>>& board, vector<vector<string>> &result, int n, int row)
    {
        if(row == n)
        {
            vector<string> curr;
            
            for(int i=0; i<n; i++)
            {
                string s = "";
                for(int j=0; j<n; j++)
                {
                    s += board[i][j];
                }
                curr.push_back(s);
            }
            result.push_back(curr);
            return;
        }

        for(int col=0; col<n; col++)
        {
           if(isValid(board, row, col))
           {
                board[row][col] = 'Q';
                helper(board, result, n, row+1);
                board[row][col] = '.';
           }
        }

    }
    vector<vector<string>> solveNQueens(int n) {

        vector<vector<char>> board(n, vector<char>(n,'.'));

        vector<vector<string>> result;

        helper(board, result, n, 0);

        return result;
        
    }
};