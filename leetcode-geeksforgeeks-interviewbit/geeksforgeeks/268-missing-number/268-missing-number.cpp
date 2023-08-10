class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sa = n*(n+1)/2;
        int ss = 0;
        for(int i = 0; i < n; i++)
        {
            ss+=nums[i];
        }
        return sa - ss;
    }
};