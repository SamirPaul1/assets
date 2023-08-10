class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int element = 0;
        
        for(int num : nums){
            if(count == 0){
                element = num;
            }
            if(num == element) count++;
            else count -= 1;
        }
        return element;
    }
};