class Solution {
public:
    int search(vector<int>& nums, int target) {
    int size=nums.size();
    int i = 0;
    int j = size - 1;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
    return -1;
        
    }
};
