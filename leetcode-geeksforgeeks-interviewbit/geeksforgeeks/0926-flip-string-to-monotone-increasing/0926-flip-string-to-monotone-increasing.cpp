class Solution {
public:
    int minFlipsMonoIncr(string s) {
       
        if(s.size() == 0 || s.size() == 1)
            return 0;

        int n = s.size();
        vector<int> zeros(n + 1, 0), ones(n + 1, 0);

        for(int i = 1; i <= s.size(); i ++)
            ones[i] = ones[i - 1] + (s[i - 1] == '1');

        for(int i = n - 1; i >= 0; i --)
            zeros[i] = zeros[i + 1] + (s[i] == '0');

        int res = INT_MAX;
        for(int i = 0; i <= n; i ++)
            res = min(res, ones[i] + zeros[i]);
        return res; 
    }
};