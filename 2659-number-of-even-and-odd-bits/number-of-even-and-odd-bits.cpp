class Solution {
public:
    vector<int> evenOddBit(int n) {

        int nEven = 0;
        int nOdd = 0;

        int count = 0;
        while(n)
        {
           
            if(count%2 == 0 && (n&1))
            {
                nEven++;
            }
            else if(count%2 == 1 && (n&1))
            {
                nOdd++;
            }
            count++;
            n = n>>1;
        }
        return {nEven, nOdd};
        
    }
};