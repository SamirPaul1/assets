class Solution {
public:
    Solution(vector<int>& nums) : nums(move(nums)) {
        
    }
    
    vector<int> reset() {
      return nums;  
    }
    
    vector<int> shuffle() {
     vector<int> A(nums);
    for (int i = A.size() - 1; i > 0; --i) {
      const int j = rand() % (i + 1);
      swap(A[i], A[j]);
    }
    return A;   
    }
    private:
  vector<int> nums;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */