class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
       int m = grid.size(), n = grid[0].size();
        
        vector<vector<bool>> visited(m, vector<bool>(n, 0));
        
        vector<vector<int>> dirs = {{0,1},{0,-1},{1,0},{-1,0}};
        
        stack<vector<int>> stk;
        
        for(int i = 0; i < m; i++){
            if(grid[i][0] == 1){
                visited[i][0] = true;
                stk.push({i, 0});
            }
            
            if(grid[i][n-1] == 1){
                visited[i][n-1] = true;
                stk.push({i, n-1});
            }
        }
        
        for(int j = 1; j < n-1; j++){
            if(grid[0][j] == 1){
                visited[0][j] = true;
                stk.push({0, j});
            }
            
            if(grid[m-1][j] == 1){
                visited[m-1][j] = true;
                stk.push({m-1, j});
            }
        }
        
        while(!stk.empty()){
            vector<int> cur = stk.top(); stk.pop();
            int curI = cur[0], curJ = cur[1];
            
            for(vector<int>& dir : dirs){
                int nextI = curI + dir[0];
                int nextJ = curJ + dir[1];
                if(nextI >= 0 && nextI < m && nextJ >= 0 && nextJ < n && !visited[nextI][nextJ] && grid[nextI][nextJ] == 1){
                    visited[nextI][nextJ] = true;
                    stk.push({nextI, nextJ});
                }
            }
        }
        
        int ans = 0;
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 1 && !visited[i][j]){
                    ans++;
                }
            }
        }
        
        return ans; 
    }
};