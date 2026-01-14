class Solution {
public:

    vector<string> helper(int n)
    {
        if(n==1)
        {
            return {"0", "1"};
        }

        vector<string> temp = helper(n-1);
        vector<string> cur;
        for(int i=0; i<temp.size(); i++ )
        {
            cur.push_back("0" + temp[i]);
        }

         for(int i=temp.size()-1; i>=0; i-- )
        {
            cur.push_back("1" + temp[i]);
        }

        return cur;

    }

    vector<int> grayCode(int n) {

        vector<string> vec = helper(n);
        vector<int> res;
        for(int i=0; i<vec.size(); i++)
        {
            res.push_back(stoi(vec[i], 0, 2));
        }

        return res;
        
    }
};