class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {

        vector<int> v;

            while(left<=right)
            {
                  int n=left;
                  while(n)
                  {
                        if(n%10==0 && n!=0)
                              break;

                        int rem = n%10; //remainder is the last digit of number
                        if(left%rem !=0)
                              break;
                        else
                        {
                              n=n/10;
                        }
                  }

                  if(n==0)
                        v.push_back(left);
                  
                  left++;
            }

            return v;
        
    }
};