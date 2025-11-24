class Solution {
public:
    vector<int> evenOddBit(int n) {

        int nEven = 0;
        int nOdd = 0;

       // int count = 0;
        bool isEven= true;
        while(n)
        {
           
            if(isEven && (n&1))
            {
                nEven++;
               
            }
            else if( isEven==false && (n&1))
            {
                nOdd++;
            }
             isEven = !isEven;
           
            n = n>>1;
        }
        return {nEven, nOdd};
        
    }
};