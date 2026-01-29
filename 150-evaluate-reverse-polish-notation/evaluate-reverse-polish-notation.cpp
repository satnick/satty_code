class Solution {
    stack<int> st;
public:
    int evalRPN(vector<string>& tokens) {

        if(tokens.size() == 1)
            return stoi(tokens[0]);
        
        int result;
        for(auto el : tokens)
        {
            if(el == "+" || el == "-" || el == "*" || el == "/")
            {
                int operand2 = st.top();
                st.pop();
                int operand1 = st.top();
                 st.pop();

                
                if(el == "+")
                {
                    result = operand1 + operand2;
                }
                else if(el == "-")
                {
                    result = operand1 - operand2;
                }
                else if(el == "*")
                {
                    result = operand1 * operand2;
                }
                else if(el == "/")
                {
                    result = operand1 / operand2;
                }

                st.push(result);
            }
            else
            {
                st.push(stoi(el));
            }

        }

        return result;

    }
};