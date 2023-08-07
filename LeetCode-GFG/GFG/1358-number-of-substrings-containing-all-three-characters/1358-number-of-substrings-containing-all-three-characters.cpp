class Solution {
public:
    int numberOfSubstrings(string s) {
      int n = s.size();

        vector<int> freq(3, 0);
        int l = 0, r = -1, res = 0;
        while(l < n && r + 1 < n){
            freq[s[++ r] - 'a'] ++;
            while(l < n && freq[0] && freq[1] && freq[2]){
                res += n - r;
                freq[s[l ++] - 'a'] --;
            }
        }
        return res;
    }
};