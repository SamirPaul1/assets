class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        
        int total = 0;
        
        for(int i = 0; i < n; ++i){
            total += gas[i] - cost[i];
        }
        
        if(total < 0){
            return -1;
        }
        int start = 0, tank = 0;
        for(int i = 0; i < n; ++i){
            tank += gas[i] - cost[i];
            if(tank < 0){
                start = i+1;
                tank = 0;
            }
        }
        
        return start;
    }
};