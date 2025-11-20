class Solution {
public:
    vector<int> rearrangeArray(vector<int>& ar) {

        vector<int> pos, neg;

         for(auto val: ar)
         {
               if(val>=0)
                    pos.push_back(val);
               else
                    neg.push_back(val);
         }

          int i=0,j=0;
          int ind = 0;

         while(i<=pos.size() && j<neg.size())
         {
               if(ind%2==0)
               {
                    ar[ind] = pos[i];
                    i++;
               }
               else
               {
                    ar[ind] = neg[j];
                    j++;
               }
               ind++;
         }

         return ar;
        
    }
};