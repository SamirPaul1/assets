//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    private: 
    
            bool isValid(int x, int y, int n, int m){
                return x >= 0 && y >= 0 && x < n && y < m;
            }
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code here
	    int n = grid.size();
	    int m = grid[0].size();
	    vector<vector<int>> ans (n, vector<int> (m, -1));
	    queue<pair<int, int>> q;
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < m; j++){
	            if(grid[i][j] == 1){
	                ans[i][j] = 0;
	                q.push({i, j});
	            }
	        }
	    }
	    int dx[4] = {0, 0, 1, -1};
	    int dy[4] = {1, -1, 0, 0};
	    while(q.empty() == false){
	        int x = q.front().first;
	        int y = q.front().second;
	        q.pop();
	        for(int i = 0; i < 4; i++){
	            int newX = x + dx[i];
	            int newY = y + dy[i];
	            if(isValid(newX, newY, n,  m) && ans[newX][newY] == -1){
	                ans[newX][newY] = ans[x][y] + 1;
	                q.push({newX, newY});
	            }
	        }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends