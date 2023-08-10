class Solution {
public:
long mod = 1e9 + 7, N;
    vector<vector<long>> lcp, m, msum;
    long sum(string &s, int i, int prevLen) {
        if (i >= N || prevLen > N - i - 1) return 0;
        if (msum[i][prevLen] != -1) return msum[i][prevLen];
        long ans = (dp(s, i + prevLen + 1, prevLen + 1) + sum(s, i, prevLen + 1)) % mod;
        return msum[i][prevLen] = ans;
    }
    long dp(string &s, int i, int prevLen = 0) {
        if (i >= N) return i == N;
        if (s[i] == '0') return 0;
        if (m[i][prevLen] != -1) return m[i][prevLen];
        long ans = 0;
        if (prevLen && i + prevLen <= N) {
            int len = lcp[i - prevLen][i];
            if (len >= prevLen || s[i - prevLen + len] < s[i + len]) ans = dp(s, i + prevLen, prevLen);
        }
        ans = (ans + sum(s, i, prevLen)) % mod;
        return m[i][prevLen] = ans;
    }
    int numberOfCombinations(string s) {
      if (s[0] == '0') return 0;
        N = s.size();
        lcp.assign(N + 1, vector<long>(N + 1, 0));
        m.assign(N + 1, vector<long>(N + 1, -1));
        msum.assign(N + 1, vector<long>(N + 1, -1));
        for (int i = N - 2; i >= 0; --i) {
            for (int j = N - 1; j > i; --j) {
                if (s[i] == s[j]) lcp[i][j] = 1 + lcp[i + 1][j + 1];
            }
        }
        return dp(s, 0);  
    }
};