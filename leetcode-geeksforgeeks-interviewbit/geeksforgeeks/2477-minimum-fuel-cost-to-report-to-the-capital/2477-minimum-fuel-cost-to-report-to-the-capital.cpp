class Solution {
public:
int dfs(int node, int prevnode, vector<vector<int>>& adj, int seats, long long& ans) {
        int passengers = 1;
        for (auto& city: adj[node]) {
            if (city == prevnode) continue;
            passengers += dfs(city, node, adj, seats, ans);
        }
        if (node != 0) ans += (passengers/seats) + (passengers % seats != 0);
        return passengers;
    }
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
    int n = roads.size()+1;
        vector<vector<int>> adj(n, vector<int>());
        for (auto& road: roads) {
            adj[road[0]].push_back(road[1]);
            adj[road[1]].push_back(road[0]);
        }
        long long ans = 0;
        dfs(0, -1, adj, seats, ans);
        return ans;    
    }
};