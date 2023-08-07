class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
              vector<int> ans(temperatures.size());
        stack<int> stk;
        
        for(int i = temperatures.size()-1; i >= 0; i--){
            //pop all values < current value
            while(!stk.empty() && temperatures[stk.top()] <= temperatures[i]){
                stk.pop();
            }
            ans[i] = stk.empty()?0:stk.top()-i;
            stk.push(i);
        }
        return ans;
    }
};