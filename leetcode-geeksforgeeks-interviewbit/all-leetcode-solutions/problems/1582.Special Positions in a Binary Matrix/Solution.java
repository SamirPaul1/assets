class Solution {
    public int numSpecial(int[][] mat) {
        int m = mat.length, n = mat[0].length;
        int[] r = new int[m];
        int[] c = new int[n];
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                r[i] += mat[i][j];
                c[j] += mat[i][j];
            }
        }
        int ans = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (mat[i][j] == 1 && r[i] == 1 && c[j] == 1) {
                    ++ans;
                }
            }
        }
        return ans;
    }
}