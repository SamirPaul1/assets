class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
    vector<vector<pair<int, int>>> adj(n);  // Adjacency list to store the graph

        // Add the red edges to the adjacency list
        for (auto& redEdge : redEdges) {
            adj[redEdge[0]].push_back({redEdge[1], 0});
        }

        // Add the blue edges to the adjacency list
        for (auto& blueEdge : blueEdges) {
            adj[blueEdge[0]].push_back({blueEdge[1], 1});
        }

        vector<int> answer(n, -1);  // Initialize the answer array with -1 for all nodes
        vector<vector<bool>> visit(n, vector<bool>(2));  // Keep track of which nodes have been visited with each color
        queue<vector<int>> q;  // Queue to store the nodes to be processed in BFS

        // Start with node 0, with number of steps as 0 and undefined color -1.
        q.push({0, 0, -1});
        visit[0][1] = visit[0][0] = true;  // Mark node 0 as visited with both colors
        answer[0] = 0;  // The starting node is 0 steps away from itself

        // Continue until the queue is empty
        while (!q.empty()) {
            auto element = q.front();
            int node = element[0], steps = element[1], prevColor = element[2];
            q.pop();

            // Check all neighbors of the current node
            for (auto& [neighbor, color] : adj[node]) {
                // If the neighbor has not been visited with this color and the color is different from the previous edge
                if (!visit[neighbor][color] && color != prevColor) {
                    visit[neighbor][color] = true;  // Mark the neighbor as visited with this color
                    q.push({neighbor, 1 + steps, color});  // Push the neighbor into the queue for processing
                    if (answer[neighbor] == -1) answer[neighbor] = 1 + steps;  // Update the answer array if it is not yet updated
                }
            }
        }
        return answer;
    }
};