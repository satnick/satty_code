class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        priority_queue<int> pq;

        for(auto el : stones)
        {
            pq.push(el);
        }

        while(pq.size() > 1)
        {
            int firstMax = pq.top();
            pq.pop();

            cout << firstMax << endl;

            int secondMax = pq.top();
            pq.pop();

            cout << firstMax << endl;

            pq.push(firstMax-secondMax);
        }

        return pq.top();
        
    }
};