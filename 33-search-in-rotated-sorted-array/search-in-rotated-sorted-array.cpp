class Solution {
public:
    int search(vector<int>& ar, int target) {

        int left = 0, right = ar.size()-1;

        while(left<=right)
        {
            int mid = left + (right-left)/2;

            if(ar[mid] == target)
            {
                return mid;
            }

            else if(ar[mid] < ar[left]) //scenario when mid element is smaller than left for ex: 6 7 8 1 2 3 4 5, mid element is at index 4
            {
                if(target > ar[mid] && target <= ar[right]) //i.e if right of mid is always sorted and left of mid is not so first find target in right of mid
                {
                    left = mid+1;
                }
                else
                {
                    right = mid-1;
                }
            }
            else if(ar[mid] > ar[right]) //scenario when mid element is bigger than right for ex: 6 7 8 9 10 3 4 5, mid element is at index 4
            {
                if(target >= ar[left] && target < ar[mid]) //i.e  //i.e if left of mid is always sorted and right of mid is not so first find in left of mid
                {
                    right = mid-1;
                }
                else
                {
                    left = mid+1;
                }
            }
            else
            {
                if(target > ar[mid])
                    left = mid+1;
                else
                    right = mid -1;
            }
        }

        return -1;
        
    }
};