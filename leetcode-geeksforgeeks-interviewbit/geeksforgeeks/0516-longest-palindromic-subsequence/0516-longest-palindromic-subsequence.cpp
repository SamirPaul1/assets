class Solution {
public:
    int longestPalindromeSubseq(string s) {
       int n = s.size();
        vector<vector<int>> dp(n, vector(n, 0));
        
        for(int i = n-1; i >= 0; i--){
            for(int j = i; j < n; j++){
                if(i == j){
                    dp[i][j] = 1;
                }else if(i+1 == j){
                    dp[i][j] = (s[i] == s[j]) ? 2 : 1;
                }else if(i+1 < j){
                    dp[i][j] = max({dp[i+1][j-1] + ((s[i] == s[j]) ? 2 : 0),
                                   dp[i+1][j],
                                   dp[i][j-1]});
                }
                
            }
        }
        
        return dp[0][n-1]; 
    }
};