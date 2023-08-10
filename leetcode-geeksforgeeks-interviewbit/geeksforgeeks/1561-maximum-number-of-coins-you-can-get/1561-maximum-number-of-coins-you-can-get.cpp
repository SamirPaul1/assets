class Solution {
public:
    int maxCoins(vector<int>& piles) {
    int n = piles.size();
        
        sort(piles.rbegin(), piles.rend());
        
        int ans = 0;
        
        for(int time = 0, pos = 1; time < n/3; ++time){
            ans += piles[pos];
            pos += 2;
        }
        
        return ans;    
    }
};