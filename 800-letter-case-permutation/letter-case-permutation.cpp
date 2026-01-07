class Solution {
public:
    vector<string> letterCasePermutation(string s) {

        vector<string> res;

        for(int i=0; i<s.size(); i++)
        {
            if(isalpha(s[i]))
                s[i] = tolower(s[i]);
        }

        helper(s, 0, res);
        return res;
    }

    void helper(string &s,  int index, vector<string> &res)
    {
       
        if(index == s.size())
        {
            res.push_back(s);
            return;
        }

        //char cur = s[index];
        
        helper(s, index+1, res);

        if(isalpha(s[index]))
        {
            s[index] = toupper(s[index]);
            helper(s, index+1, res);
            s[index]= tolower(s[index]);
        }

    }
};