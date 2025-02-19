class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       
    }
};

Case 1 :- nums = [2,0,2,1,1,0]

Output :- [0,0,1,1,2,2]

Case 2 :- nums = [2,0,1]
Output :- [0,1,2]
