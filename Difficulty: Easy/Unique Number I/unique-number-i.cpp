class Solution {
  public:
    int findUnique(vector<int> &ar) {
        // code here
        
        sort(ar.begin(), ar.end());
        
        int left = 0, right = ar.size()-1;
        
        while(left<right)
        {
            int mid = left + (right-left)/2;
            
            if(mid%2 == 0 && ar[mid] == ar[mid+1])
            {
                left = mid+2;
            }
            else if(mid%2!=0 && ar[mid] == ar[mid-1])
            {
                left = mid+1;
            }
            else
            {
                right = mid;
            }
            /*else if(mid%2 != 0 && ar[mid] != ar[mid-1])
            {
                right = mid;
            }
            else if(mid%2 == 0 && ar[mid] != ar[mid+1])
            {
                right = mid;
            }*/
            
        }
        return ar[left];
        
    }
};