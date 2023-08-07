class Solution {
public:
     vector<int> dfs(vector<vector<int>>& adjList, string& labels, vector<bool>& visited, int cur, vector<int>& ans){
        vector<int> counter(26, 0);
        counter[labels[cur]-'a'] = 1;
        
        for(int nei : adjList[cur]){
            if(!visited[nei]){
                visited[nei] = true;
                vector<int> subcounter = dfs(adjList, labels, visited, nei, ans);
                for(int i = 0; i < counter.size(); ++i){
                    counter[i] += subcounter[i];
                }
            }
        }
        //since we are using dfs, now counter's coverage is the subtree rooted at cur
        ans[cur] += counter[labels[cur]-'a'];
        
        return counter;
    };
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<vector<int>> adjList(n);
        vector<vector<int>> counter(n, vector<int>(26, -1));
        
        //bi-directional
        for(vector<int>& edge : edges){
            adjList[edge[0]].push_back(edge[1]);
            adjList[edge[1]].push_back(edge[0]);
        }
        
        vector<int> ans(n);
        vector<bool> visited(n, false);
        
        visited[0] = true;
        dfs(adjList, labels, visited, 0, ans);
        
        return ans;
    }
};