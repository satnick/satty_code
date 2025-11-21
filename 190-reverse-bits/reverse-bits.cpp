class Solution {
public:
    int reverseBits(int n) {

        int res = 0;
        for(int i=0; i<32; i++)
        {
            res = res << 1;
            int lsbBit = n&1;

            res = res | lsbBit;
            n = n>>1;
        }
       

        return res;
        
    }
};