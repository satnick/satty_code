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
                else  //this is the case if num/i==i, if num is 25, 25/5 is 5, so its only one divisor not two and so count is incremented by 1
                   {
                    sum = sum + i; 
                     count+=1;
                   }
            }
        }
        if(count == 2)  //as two other divisor will always be 1 and number itself, so total count is 4
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