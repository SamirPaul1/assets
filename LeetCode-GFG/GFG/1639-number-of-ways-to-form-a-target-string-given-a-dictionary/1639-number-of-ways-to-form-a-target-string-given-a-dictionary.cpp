class Solution {
public:
     const int M = 1000000007;
    int numWays(vector<string>& a, string t) {
     int n = a.size(), m = a[0].size(), l = t.size();
        vector<vector<int>> cnt(m+1, vector<int>(26));
        for (int i=0; i<n; ++i)
            for (int j=0; j<m; ++j)
                ++cnt[j+1][a[i][j]-'a'];
        
        vector<vector<long long>> f(m+1, vector<long long>(l+1)); // first m column get first n char
        f[0][0] = 1;
        for (int i=1; i<=m; ++i) {
            f[i][0] = 1;
            for (int j=1; j<=min(i, l); ++j) {
                f[i][j] = f[i-1][j];
                int c = cnt[i][t[j-1]-'a'];
                f[i][j] = (f[i][j] + f[i-1][j-1] * c) % M;
            }
        }
        return f[m][l];    
    }
};