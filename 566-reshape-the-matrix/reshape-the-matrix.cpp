class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {

        int row=mat.size();
        int col=mat[0].size();

        if(row*col!=r*c)
            return mat;

   
        vector<vector<int>> v(r, vector<int>(c, 0));
        int newrow =0,newcol = 0;

        for(int i=0; i<row; i++)
        {
            for(int j=0;j<col; j++)
            {
                v[newrow][newcol] = mat[i][j];

                if(newcol == c-1)
                {
                    newcol=0;
                    newrow = newrow+1;
                }
                else
                {
                    newcol = newcol+1;
                }
            }
        }

        return v;
        
    }
};