class Solution {
public:
    int numberOfMatches(int n) {

        /*int numMatches = 0;

            while(n)
            {
                  if(n%2 == 0)
                  {
                        numMatches += n/2;
                        n=n/2;
                  }
                  else
                  {
                        numMatches += n/2;
                        n=n/2 + 1;
                  }
                  if(n==1)break;
            }
            return numMatches;*/

            return n-1;
        
    }
};