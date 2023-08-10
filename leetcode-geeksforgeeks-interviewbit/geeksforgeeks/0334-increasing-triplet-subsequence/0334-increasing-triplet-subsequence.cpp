class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
    int num1 = INT_MAX, num2 = INT_MAX;
        for (auto num : nums) {
            if (num <= num1) { // Equal sign is important
                num1 = num;
            } else if (num <= num2) { // Equal sign is important
                num2 = num;
            } else {
                return true;
            }
        }
        return false;    
    }
};