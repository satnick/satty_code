class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {

        vector<vector<int>> memo(text1.size(), vector<int>(text2.size(), -1));

        return helper(text1, text2, 0, 0, memo);

        //return helper(text1, text2, 0, 0); //recursive
        
    }


    //top down
    int helper(string &str1, string &str2, int ind1, int ind2, vector<vector<int>>& memo)
    {
       

        if(ind1 == str1.size()  || ind2 == str2.size() )
            return 0;

        if(memo[ind1][ind2] != -1)
            return memo[ind1][ind2];

        if(str1[ind1] == str2[ind2])
        {
            memo[ind1][ind2] = 1+helper(str1, str2, ind1+1, ind2+1, memo);
            return memo[ind1][ind2];
        }

        if(str1[ind1] != str2[ind2])
        {
            int len1 = helper(str1, str2, ind1 + 1, ind2, memo);
            int len2 = helper(str1, str2, ind1, ind2 + 1, memo);

            return  memo[ind1][ind2] = max(len1, len2);
        }

        return 0;
    }

    //recursive
    /*int helper(string str1, string str2, int ind1, int ind2)
    {
        if(ind1 == str1.size() || ind2 == str2.size())
            return 0;

        if(str1[ind1] == str2[ind2])
            return 1+helper(str1, str2, ind1+1, ind2+1);

        if(str1[ind1] != str2[ind2])
        {
            int len1 = helper(str1, str2, ind1 + 1, ind2);
            int len2 = helper(str1, str2, ind1, ind2 + 1);

            return max(len1, len2);
        }

        return 0;
    }*/
};