class Solution {

    map<char, vector<char>> mp;

public:
    vector<string> letterCombinations(string digits) {
        mp.insert(make_pair('2', vector<char>{'a', 'b', 'c'}));
        mp.insert(make_pair('3', vector<char>{'d', 'e', 'f'}));
        mp.insert(make_pair('4', vector<char>{'g', 'h', 'i'}));
        mp.insert(make_pair('5', vector<char>{'j', 'k', 'l'}));
        mp.insert(make_pair('6', vector<char>{'m', 'n', 'o'}));
        mp.insert(make_pair('7', vector<char>{'p', 'q', 'r', 's'}));
        mp.insert(make_pair('8', vector<char>{'t', 'u', 'v'}));
        mp.insert(make_pair('9', vector<char>{'w', 'x', 'y', 'z'}));


        string cur = "";
        vector<string> res;

        helper(digits, 0, cur, res);

        return res;
        
    }

    void helper(string digits, int index, string cur, vector<string> & res)
    {
        if(index == digits.size())
        {
            res.push_back(cur);
            return;
        }

        auto v = mp[digits[index]];
        for(auto ch : v)
        {
            cur.push_back(ch);
            helper(digits, index+1, cur, res);
            cur.pop_back();
        }

    }
};