class Solution {
public:
    int countNegatives(vector<vector<int>>& v) {

        

        int rows = v.size();
          int cols = v[0].size();

          int i=0, j=cols-1;
          int count = 0;

          while(i<rows && j >=0)
          {
               if(v[i][j] < 0)
               {
                    count = count + rows - i;
                    j--;
               }
               else if(v[i][j] >= 0)
               {
                    i++;
               }
          }

          return count;
      
       
        
    }
};