class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int, int> freqMap;

    for (int i = 0; i < n; i++) {
        freqMap[nums[i]]++;
        if (freqMap[nums[i]] > n / 2) {
            return nums[i];
        }
    }

    // No majority element found
    return -1;
    }
};