class Solution {
public:
    int maxChunksToSorted(vector<int>& v) {

        vector<int> curToLeftMax;
        vector<int> rightMin;

        int max = INT_MIN;
        curToLeftMax.resize(v.size());
        for(int i=0; i<v.size(); i++)
        {
            if(v[i] > max)
            {
                curToLeftMax[i] = v[i];
                max = v[i];
            }
            else
                curToLeftMax[i] = max;

        }

        int min = INT_MAX;
        rightMin.resize(v.size() + 1);
        rightMin[v.size()] = INT_MAX;
        for(int i=v.size()-1; i>=0; i--)
        {
            if(v[i] < min)
            {
                rightMin[i] = v[i];
                min = v[i];
            }

            else
            {
                rightMin[i] = min;
            }
        }

        int chunks = 0;

        for(int i=0; i<v.size(); i++)
        {
            if(curToLeftMax[i] <= rightMin[i+1])
                chunks++;
        }

        return chunks;

        
    }
};
