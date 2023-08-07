class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int len = nums.size();
        int ans1 = nums[0]; 
        int ans2 = nums[0];
        int curr = nums[0];
       
        for(int i=1;i<len;i++)
        {
            curr = max(nums[i],curr+nums[i]);
            ans1 = max(ans1,curr);
        }
        curr = -1*nums[0];
        ans2 = -1*nums[0];
        int sum = accumulate(nums.begin(),nums.end(),0);
        for(int i=1;i<len;i++)
        {
            int val = (-1*nums[i]);
            curr = max(val,curr+val);
            ans2 = max(ans2,curr);
        }
        if (sum+ans2==0)
            return ans1;
        return max(ans1,ans2+sum);
    }
};