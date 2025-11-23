class Solution {
  public:
  
  
    bool palindrome(string &s, int i, int j)
    {
        if(i>=j)
        return true;
        
        if(s[i] == s[j])
         return palindrome(s,i+1, j-1);
         
         return false;
    }
  
    bool isPalindrome(string& s) {
        // code here
        int n = s.length();
        
        if(s.length() == 1) return true;
        
          if(palindrome(s, 0, n-1) == false)
            {
                return false;
            }
        
        return true;
    }
};