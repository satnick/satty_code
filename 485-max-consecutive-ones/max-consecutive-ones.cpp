class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& ar) {

        int maxSoFar = 0;
          int oneSum = 0;
          for(int i=0; i<ar.size(); i++)
          {
               if(ar[i] == 0)
               {
                   
                    oneSum = 0;
               }
               else
               {
                   
                    oneSum++;
                      maxSoFar = oneSum>maxSoFar ? oneSum : maxSoFar;
               }
          }
          return maxSoFar;
        
    }
};