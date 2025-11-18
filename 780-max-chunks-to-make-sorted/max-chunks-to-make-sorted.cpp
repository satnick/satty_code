class Solution {
public:
    int maxChunksToSorted(vector<int>& v) {
        
        int ind = 0;
        int size = v.size();
        int chunks = 0;
        int max = INT_MIN;
        while(ind < size)
        {
            
            max = v[ind] > max ? v[ind]: max;
            if(ind == max)
            {
                chunks++;
                if(ind<size-1)
                    max = v[ind+1];
            }
           
            ind++;

        }
        return chunks;


    }
};