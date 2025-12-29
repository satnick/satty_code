class Solution {
public:
    int trap(vector<int>& height) {

        vector<int>leftMax(height.size(), 0), rightMax(height.size(), 0);

        leftMax[0] = height[0];
        for(int i=1; i<height.size()-1; i++)
        {
            int maximum = max(leftMax[i-1], height[i]);
            leftMax[i] = maximum;
        }

        rightMax[height.size()-1] = height[height.size()-1];
        for(int i=height.size()-2; i>=0; i--)
        {
            int maximum = max( height[i], rightMax[i+1]);
            rightMax[i] = maximum;
        }

        int trappedQuantity = 0;
        for(int i=1; i<height.size()-1; i++)
        {
            int val = min(leftMax[i],rightMax[i])-height[i];
            trappedQuantity += val;
        }

        return trappedQuantity;


        
    }
};