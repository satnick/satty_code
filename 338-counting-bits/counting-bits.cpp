class Solution {
public:
    vector<int> countBits(int n) {

        vector<int> v;
        for(int i=0; i<=n; i++)
        {
            int count = countHelper(i);
            v.push_back(count);
        }

        return v;
        
    }

    int countHelper(int num)
    {
        int oneCount = 0;
        while(num)
        {
            if(num&1)
                oneCount++;
            
            num = num>>1;
        }
        return oneCount;
    }
};