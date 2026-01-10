class Solution {
public:
    vector<vector<string>> partition(string s) {

        vector<vector<string>> res;
        vector<string> cur;

        helper(s, 0, cur, res);

        return res;
        
    }

    void helper(string s, int index, vector<string> &cur, vector<vector<string>> &res)
    {
        if(index == s.length())
        {
            res.push_back(cur);
            return;
        }

        for(int i=index; i<s.length(); i++)
        {
            if(isPalindrome(s, index, i))
            {
                cur.push_back(s.substr(index, i - index+1));
                helper(s, i+1, cur, res);
                cur.pop_back();
            }
        }
    }

    bool isPalindrome(string s, int start, int end)
    {
        while(start<end)
        {
            if(s[start] != s[end])
            {
                return false;
            }
            start++; 
            end--;
        }

        return true;
    }
};