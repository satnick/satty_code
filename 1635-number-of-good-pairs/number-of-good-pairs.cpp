class Solution {
public:
    int numIdenticalPairs(vector<int>& ar) {

        int goodPairs=0;

          for(int i=0; i<ar.size(); i++)
          {
               int num =ar[i];
               if(num==-1) continue;

               ar[i] = -1;
               int sameNum = 1;
               for(int j=i+1; j<ar.size(); j++)
               {
                    if(num == ar[j] && ar[j] != -1)
                    {
                         sameNum++;
                         ar[j] = -1;
                    }
               }

               goodPairs += sameNum*(sameNum-1)/2;
          }

          return goodPairs;
        
    }
};