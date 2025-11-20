class Solution {
public:

    int countFactors(int num)
    {
        int count = 0;
        int sum = 0;
        for(int i =2; i<=sqrt(num); i++)
        {
            if(num%i == 0)
            {
                
                if(num/i != i)
                {
                    count += 2;
                    sum = sum + i + num/i;
                }
                else 
                   {
                    sum = sum + i;
                     count+=1;
                   }
            }
        }
        if(count == 2)
            return sum+1+num;
       
       return 0;

       
        
    }

    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i< nums.size(); i++)
        {
            sum+= countFactors(nums[i]) ;
            
        }

        return sum;
        
    }
};