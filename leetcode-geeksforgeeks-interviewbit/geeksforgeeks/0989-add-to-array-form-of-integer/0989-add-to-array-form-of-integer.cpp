class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
    if(k == 0) return num;
        string s = to_string(k);
        int carry = 0, i = num.size() - 1, j = s.size()-1;
        vector<int>ans;
        while(i >= 0 || j >= 0) {
            int sum = carry;
            if(j >= 0){
                sum+=s[j]-'0';
                j--;
            }
            if(i >= 0) {
                sum+=num[i];
                i--;
            }
            carry=sum/10;
            ans.push_back(sum%10);
        }
        if(carry!=0) {
            ans.push_back(carry);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};