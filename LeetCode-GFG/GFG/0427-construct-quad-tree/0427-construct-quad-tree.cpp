/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
public:
    
    int n = 0;
    Node *one, *zero;
    
    Node* dfs(vector<vector<int>>& grid, int l, int x, int y) {
        if (l==1) {
            return grid[x][y] ? one : zero;
        } else {
            int lt = l>>1;
            auto* now = new Node(true, false, dfs(grid, lt, x, y), dfs(grid, lt, x, y+lt), dfs(grid, lt, x+lt, y), dfs(grid, lt, x+lt, y+lt));
            if (now->topLeft==now->topRight && now->topLeft==now->bottomLeft && now->topLeft==now->bottomRight) 
                return now->topLeft;
            else 
                return now;
        }
    }
    
    Node* construct(vector<vector<int>>& grid) {
     one = new Node(true, true, NULL, NULL, NULL, NULL);
        zero = new Node(false, true, NULL, NULL, NULL, NULL);
        n = grid.size();
        return dfs(grid, n, 0, 0);   
    }
};