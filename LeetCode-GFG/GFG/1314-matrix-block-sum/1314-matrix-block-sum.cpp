class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
    int r=mat.size(), c=mat[0].size();
        
        for(int i=0 ; i<r ; i++){
            for(int j=0 ; j<c ; j++){
                if(i > 0) mat[i][j]+=mat[i-1][j];
                if(j > 0) mat[i][j]+=mat[i][j-1];
                if(i > 0 && j > 0) mat[i][j]-=mat[i-1][j-1];
            }
        }
        
        vector<vector<int>> ans(r, vector<int>(c));
        
        for(int i=0 ; i<r ; i++){
            for(int j=0 ; j<c ; j++){
                int r0=max(0, i-k), c0=max(0, j-k), r1=min(r-1, i+k), c1=min(c-1, j+k);
                
                ans[i][j] = mat[r1][c1];
                if(r0 > 0) ans[i][j]-=mat[r0-1][c1];
                if(c0 > 0) ans[i][j]-=mat[r1][c0-1];
                if(r0 > 0 && c0 > 0) ans[i][j]+=mat[r0-1][c0-1];
            }
        }
        
        return ans;    
    }
};