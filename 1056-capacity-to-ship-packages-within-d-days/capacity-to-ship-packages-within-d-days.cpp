class Solution {
public:

    int findDays(int capacity, vector<int> weights)
    {
        int noDays = 1;
        int load = 0;
        for(auto wt : weights)
        {
            if(load + wt > capacity)
            {
                noDays++;
                load = wt;
            }
            else
            {
                load = load + wt;
            }
        }
        return noDays;
    }


    int shipWithinDays(vector<int>& weights, int days) {

        auto maxWtIt = max_element(weights.begin(), weights.end());
        int maxWt = *maxWtIt;
        int totalSum = accumulate(weights.begin(), weights.end(),0);

        int startCapacity = maxWt, endCapacity = totalSum;

        while(startCapacity < endCapacity)
        {
            int midCapacity = startCapacity+ (endCapacity-startCapacity)/2;

            int daysNeeded = findDays(midCapacity, weights);

            if(daysNeeded <= days)
            {
                endCapacity = midCapacity;
            }
            else
            {
                startCapacity = midCapacity+1;
            }

            
        }
        return startCapacity;
        
    }
};