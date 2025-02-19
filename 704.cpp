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



Case 1 :- nums = [-1,0,3,5,9,12]
Target :- 9

Output :- 4

Case 2:- nums = [-1,0,3,5,9,12]
Target :- 2

Output :- -1

