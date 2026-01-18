class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        
        
        priority_queue<int, vector<int>,greater<int>> pq;
        
        for(auto el : arr)
        {
            pq.push(el);
        }
        
        int sum = pq.top();
        int cost = 0;
        
       
        
        while(pq.size()>1)
        {
            int firstMin = pq.top();
            pq.pop();
            int secondMin = pq.top();
            pq.pop();
            sum = firstMin + secondMin;
            pq.push(sum);
            cost+=sum;
            
        }
        
        return cost;
        
        
    }
};