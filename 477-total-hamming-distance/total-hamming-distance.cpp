class Solution {
public:
    int totalHammingDistance(vector<int>& ar) {

        /*int sum = 0;
        int n = ar.size();

        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int xorNums = ar[i] ^ar[j];
                for(int i=0; i<32; i++)
                {
                    if(xorNums & (1<<i))
                    {
                        sum++;
                    }
                }
            }
        }
        return sum;*/

        int n = ar.size();
        vector<int> counterOne(32,0);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<32; j++)
            {
                if(ar[i] & (1<<j))
                {
                    counterOne[j]++;
                }
            }
        }

        int hamDist = 0;
        for(int i=0; i<32; i++)
        {
            hamDist += counterOne[i] * (n-counterOne[i]);
        }   

        return hamDist;
        
        
    }
};