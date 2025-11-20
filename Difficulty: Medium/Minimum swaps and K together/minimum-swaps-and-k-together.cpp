// Final function implementation
class Solution {
  public:
    int minSwap(vector<int>& ar, int k) {
        // code here
        int size = ar.size();

        int count=0;
        for(int i =0; i< size; i++)
        {
          if(ar[i] <= k)
               count++;
        }

        int windSize = count;

          int badNums = 0; //number count greater than k
        for(int i=0; i< windSize; i++)
        {
          if(ar[i] > k)
               badNums++; //number count greater than k in window
        }

        int i=0,j=windSize-1;
        int min = badNums; //as
        while(i<size && j<size-1)
        {
          if(ar[i] > k) //excluding the ith index from current window, as its excludd andif its badNum it should be reduced
               badNums--;
          
          i++;

          j++; //window is traversing to next element
          if(ar[j] >k)
               badNums++;

          if(min>badNums)
               min = badNums;
        }

        return min;
    }
};
