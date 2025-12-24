class Solution {
public:
    int findPairs(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        int left = 0;
        int right = left+1;

        int size = nums.size();
        int count=0;
        int first, second;
        while(right<size && left <size)
        {
            int dif = nums[right] - nums[left];
            if(dif > k)
            {
                left++;
                if(left==right)
                    right++;
            }
            else if(dif < k)
            {
                right++;
            }
            else if(left >= right)
                right++;
            else
            {
                //cout<<left <<" : " << right<<endl;
                first = left;
                second = right;
                count++;
                left++;
                right++;
                while(left<size && nums[left]==nums[left-1])
                {
                    left++;
                }
                /*if(left==right)
                    right++;*/

            }

        }

        return count;
        
    }
};