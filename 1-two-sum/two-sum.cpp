class Solution {
    vector<pair<int, int>> vp;
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int, int> mp;
        for(int i=0; i<nums.size(); i++)
        {
            //mp.insert(make_pair(nums[i], i));
            vp.push_back(make_pair(nums[i], i));
        }

        sort(nums.begin(), nums.end());

        int i=0, j=nums.size()-1;
        while(i<j)
        {
            int sum = nums[i] + nums[j];
            if(sum > target)
            {
                j--;
            }
            else if(sum < target)
             i++;

            else
                break;
        }

        int k=0;
        vector<int> v;
        for(; k<nums.size(); k++)
        {
            if(nums[i] == vp[k].first)
            {
                v.push_back(vp[k].second);
                break;
            }
        }

        k++;
        
         for(k=0; k<nums.size(); k++)
        {
            if(nums[j] == vp[k].first && vp[k].second != v[0])
            {
                v.push_back(vp[k].second);
                break;
            }
        }

       
        //v.push_back(mp[nums[i]]);
        //v.push_back(mp[nums[j]]);

        return v;
        
    }
};