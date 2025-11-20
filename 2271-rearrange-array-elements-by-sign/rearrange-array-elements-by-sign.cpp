class Solution {
public:
    vector<int> rearrangeArray(vector<int>& ar) {


        vector<int> ans(ar.size());
        int size = ar.size();
        int pos=0, neg =1;
        for(int i=0; i<size; i++)
        {
            if(ar[i] >=0)
            {
                ans[pos] = ar[i];
                pos = pos+2;
            }
            else if(ar[i] < 0)
            {
                ans[neg] = ar[i];
                neg = neg+2;
            }
        }

       return ans;
    }
};