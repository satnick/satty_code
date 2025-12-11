class Solution {
public:

void createAllComb(int n, int openCount, int closeCount, string currentStr, vector<string> &res )
{
    if(closeCount == n)
        {res.push_back(currentStr);
        return;
        }

    if(openCount < n)
        createAllComb(n, openCount+1, closeCount, currentStr + '(', res);

    if(closeCount < openCount)
        createAllComb(n, openCount, closeCount+ 1, currentStr + ')', res);
}
    vector<string> generateParenthesis(int n) {

        vector<string > res;
        int openCount = 0;

        createAllComb(n, 0, 0,  "", res );

        return res;
        
    }
};