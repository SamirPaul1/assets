class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
      long long cnt = 0, sum = 0, N = matrix.size(), mn = INT_MAX;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cnt += matrix[i][j] < 0;
                sum += abs(matrix[i][j]);
                mn = min(mn, (long long)abs(matrix[i][j]));
            }
        }
        return cnt % 2 ? sum - 2 * mn : sum;  
    }
};