class Solution {
  public:
    int noOfOpenDoors(int n) {
        // code here
        
        /*int numOfOpenDoors = 0;
        
        for(int num=1; num<=n; num++)
        {
            int count=0;
            for(int i=1; i*i<=num; i++)
            {
                if(num%i == 0)
                {
                    count++;
                }
                if(num/i != i)
                {
                    count++;
                }
            }
            if(count%2 != 0)
                numOfOpenDoors++;
            
            
        }
        
        return numOfOpenDoors;*/
        
        return sqrt(n);
        
        
            
        
    }
};