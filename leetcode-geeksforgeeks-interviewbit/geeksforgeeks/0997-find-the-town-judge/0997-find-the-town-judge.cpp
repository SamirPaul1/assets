class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
     if(trust.size() == 0) return (n == 1) ? 1 : -1;
        //index 0 for padding
        vector<int> indegrees(n+1, 0);
        vector<int> outdegrees(n+1, 0);
        //assume judge candidate not work!
        // int judge = trust[0][1]; //candidate judge
        
        for(vector<int>& v : trust){
            //judge doesn't trust anyone
            // if(v[0] == judge) return -1;
            outdegrees[v[0]]++;
            indegrees[v[1]]++;
        }
        
        set<int> cands;
        
        for(int i = 1; i <= n; i++){
            //there is a person trusted by N-1 person and not judge
            if(indegrees[i] == n-1 && outdegrees[i] == 0){
                cands.insert(i);
                if(cands.size() > 1) return -1;
            }
        }
        
        return cands.empty() ? -1 : *cands.begin();    
    }
};