class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int sum = 0;
        int count = 0;
        
        sort(costs.begin(), costs.end());
        
        for(int i = 0; i < costs.size(); i++) {
            sum+=costs[i];
            count++;
            if(sum == coins) return count;
            if(sum > coins) return count - 1;
        }
        return count;
    }
};