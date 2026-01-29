class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {

        vector<int> res(temp.size(), 0);
        stack<int> st;
        
        st.push(0);

        int i=1;
        while(i < temp.size())
        {
            while(!st.empty() && temp[i] > temp[st.top()])
            {
                res[st.top()] = i-st.top();
                st.pop();
            }
            st.push(i);
            i++;
        }

        while(!st.empty())
        {
            res[st.top()] = 0;
            st.pop();
        }

        return res;

        
    }
};