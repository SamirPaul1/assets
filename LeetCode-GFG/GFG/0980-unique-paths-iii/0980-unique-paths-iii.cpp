class Solution {
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        int sx = -1;
    int sy = -1;
    int n = 1;
    for (int i = 0; i < grid.size(); ++i)
      for (int j = 0; j < grid[0].size(); ++j)
        if (grid[i][j] == 0) ++n;
        else if (grid[i][j] == 1) { sx = j; sy = i; }    
    return dfs(grid, sx, sy, n);
  }
private:
  int dfs(vector<vector<int>>& grid, int x, int y, int n) {
    if (x < 0 || x == grid[0].size() || 
        y < 0 || y == grid.size() || 
        grid[y][x] == -1) return 0;
    if (grid[y][x] == 2) return n == 0;    
    grid[y][x] = -1;
    int paths = dfs(grid, x + 1, y, n - 1) + 
                dfs(grid, x - 1, y, n - 1) +
                dfs(grid, x, y + 1, n - 1) + 
                dfs(grid, x, y - 1, n - 1);
    grid[y][x] = 0;
    return paths; 
    }
};