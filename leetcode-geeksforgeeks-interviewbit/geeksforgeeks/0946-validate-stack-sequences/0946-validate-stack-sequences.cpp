class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
     stack<int>s;
        for(int i = 0, j = 0; i < pushed.size(); ++i) {
            s.push(pushed[i]);
            while(!s.empty() && s.top() == popped[j]) {
                s.pop();
                j++;
            }
        }
        return s.empty();
    }
};