class Solution {
public:
    bool hasAllCodes(string s, int K) {
    int len = s.size(), count = 1 << K;
        if (K > len) return false;
        int num = K > 1 ? stoi(s.substr(len - K + 1), 0, 2) << 1 : 0;
        vector<bool> seen(count, false);
        for (int i = len - K; ~i; i--) {
            num = (((s[i] - '0') << K) + num) >> 1;
            if (!seen[num]) seen[num] = true, count--;
            if (!count) return true;
            if (i < count) return false;
        }
        return false;   
    }
};