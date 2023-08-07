class Solution {
    
private:
    int n, m;
    int dirs[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
    
public:
    int maxDistance(vector<vector<int>>& grid) {
     n = grid.size(), m = grid[0].size();
        vector<vector<int>> dis(n, vector<int>(m, -1));
        queue<int> q;
        for(int i = 0; i < n; i ++)
            for(int j = 0; j < m; j ++)
                if(grid[i][j])
                    q.push(i * m + j), dis[i][j] = 0;

        int res = 0;
        while(!q.empty()){
            int curx = q.front() / m, cury = q.front() % m;
            q.pop();
            res = max(res, dis[curx][cury]);

            for(int d = 0; d < 4; d ++){
                int nextx = curx + dirs[d][0], nexty = cury + dirs[d][1];
                if(in_area(nextx, nexty) && dis[nextx][nexty] == -1){
                    q.push(nextx * m + nexty);
                    dis[nextx][nexty] = dis[curx][cury] + 1;
                }
            }
        }
        return res ? res : -1;
    }

private:
    bool in_area(int x, int y){
        return x >= 0 && x < n && y >= 0 && y < m;   
    }
};