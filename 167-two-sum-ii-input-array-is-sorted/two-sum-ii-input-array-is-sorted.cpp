class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {

        int left=0, right=num.size()-1;

        //vector<int>v;

        while(left<right)
        {
            if(num[left] + num[right] > target)
                right--;

            else if(num[left] + num[right] < target)
                 left++;

            else
            {
               break;
            }
        }

        return {left+1, right+1};
        
    }
};