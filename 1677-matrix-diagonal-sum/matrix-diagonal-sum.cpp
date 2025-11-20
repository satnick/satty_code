class Solution {
public:
    int diagonalSum(vector<vector<int>>& input) {
        
        int rows = input.size();
          int cols = input[0].size();

          int i=0,j=0;
          int sum = 0;

          while(i<rows && j<cols)
          {
               sum+=input[i++][j++];
          }

          i=0;
          j=cols-1;
          while(i<rows && j>=0)
          {
               if(i!=j)
                    sum += input[i][j];  

                i++;
                j--;            

          }

          return sum;
    }
};