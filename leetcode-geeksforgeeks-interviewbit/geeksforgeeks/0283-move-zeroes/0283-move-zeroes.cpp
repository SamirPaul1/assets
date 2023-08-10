class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        //T.C. => O(N^2)
        //S.C. => O(1)
        // int n = nums.size();
        // for(int i = 0; i < n; i++) {
        //     if(nums[i] == 0){
        //          for(int j = n-1; j > i; j--){
        //             if(nums[j] != 0)
        //             swap(nums[i], nums[j]);
        //         }
        //     }
        // }


        //=======================================================================//

        //T.C. => O(N)
        //S.C. => O(1)
        int n = nums.size();
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] != 0) {
                swap(nums[i], nums[count]);
                count++;
            }
        }
    }
};