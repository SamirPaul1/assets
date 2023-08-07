class Solution {
public:
    int minInsertions(string s) {
      int n = s.size();
        vector<vector<int>> f(n, vector<int>(n));
        for (int i=0; i<n; ++i) f[i][i] = 0;
        for (int l=2; l<=n; ++l)
            for (int i=0; i+l<=n; ++i) {
                int j = i + l - 1;
                if (s[i]==s[j])
                    f[i][j] = f[i+1][j-1];
                else 
                    f[i][j] = 1 + min(f[i+1][j], f[i][j-1]);
            }
        return f[0][n-1];   
    }
};