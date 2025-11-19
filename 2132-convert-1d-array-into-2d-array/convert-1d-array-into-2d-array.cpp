class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {

        if(m*n != original.size())
        return {};

        vector<vector<int>> v(m, vector<int>(n,0));

        int r=0, c=0;
        for(int i=0; i<original.size(); i++)
        {
            v[r][c] = original[i];

            if(c==n-1)
            {
                r = r+1;
                c = 0;
            }
            else
            {
                c++;
            }
        }

        return v;
        
    }
};