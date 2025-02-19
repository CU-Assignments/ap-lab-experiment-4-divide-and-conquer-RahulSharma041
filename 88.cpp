class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        
    int i = m-1;
    int j = n-1;
    int k = m + n - 1;
    while(i >= 0 && j >= 0)
    {
        if(a[i] > b[j])
        {
            a[k--] = a[i--];
        }
        else
        {
            a[k--] = b[j--];
        }
    }
    while( j >= 0)
    {
        a[k--] = b[j--];
    }

        
    }
};

Case 1 :- Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]

Case 2:- Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
