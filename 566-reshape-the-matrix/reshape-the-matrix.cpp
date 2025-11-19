class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {

        int matRows=mat.size();
        int matCols=mat[0].size();

        if(matRows*matCols!=r*c)
            return mat;

         if(matRows==r && matCols== c)
            return mat;
   
        vector<vector<int>> v(r, vector<int>(c, 0));
       /* int newrow =0,newcol = 0;

        for(int i=0; i<matRows; i++)
        {
            for(int j=0;j<matCols; j++)
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

        return v;*/

        int matPos = 0;
        int newMatPos = 0;

//though r*c is same as row*col, both have been written just to tell matPs belong to row,col and newMatPos belong to r,c
        while(matPos<matRows*matCols && newMatPos < r*c) 
        {
            v[newMatPos/c][newMatPos%c] = mat[matPos/matCols][matPos%matCols];
            matPos++;
            newMatPos++;;
        }

        return v;
        
    }
};