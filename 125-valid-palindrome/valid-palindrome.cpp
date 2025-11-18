class Solution {
public:
    bool isPalindrome(string s) {

        int len = s.length();

        

        int st = 0, end = len-1;
        while(st < end)
        {
            while( st<end && (!(isalpha(s[st])) && !(isdigit(s[st])))) st++;
            while(end > 0 && ( !(isalpha(s[end])) && !(isdigit(s[end])))) end--;

            if(st<end && tolower(s[st]) != tolower(s[end]))
            {
                return false;
            }
            else if(st < end)
            {
                st++;
                end--;
            }
        }

        return true;
        
    }
};