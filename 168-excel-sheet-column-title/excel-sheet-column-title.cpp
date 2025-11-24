class Solution {
public:
    string convertToTitle(int columnNumber) {


         string s = "";

        while(columnNumber)
        {
                columnNumber = columnNumber-1; //its reduced by 1 so that 

                int rem = columnNumber%26;
                char ch = 'A' + rem;
                s.push_back(ch);
                columnNumber = columnNumber/26; 
                
        }

        reverse(s.begin(), s.end());

        return s;
        
    }
};