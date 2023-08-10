class Solution {
    private:
    void helper(int ind, int sum, int n, vector<vector<int>> &ans, vector<int> & ans2, int k) {
        if(sum == n && k == 0) {
            ans.push_back(ans2);
            return;
        }
        if(sum > n) {
            return;
        }
        for(int i = ind; i <= 9; i++) {
            if(i > n){
                break;
            }
            ans2.push_back(i);
            helper(i+1, sum+i, n, ans, ans2, k-1);
            ans2.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
     vector<int>ans2;
        vector<vector<int>>ans;
        helper(1, 0, n, ans, ans2, k);
        return ans;
    }
};