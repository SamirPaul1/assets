class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
    //Using Brute Force => T.C. = O(n^2)
        /*
      int n = intervals.size();
        vector<int> result(n, -1); // Initialize the result array with -1
        for(int i = 0; i < n ; i++) {
            int minIndex = -1;
            int minStart = INT_MAX;
            
            for(int j = 0; j < n; j++) {
                if(j == i) continue; // Skip comparing the interval with itself
                if(intervals[j][0] >= intervals[i][1] && intervals[j][0] < minStart) {
                    minIndex = j;
                    minStart = intervals[j][0];
                }
            }
            result[i] = minIndex;
        }
        return result;
        }
        */
        
        int n = intervals.size();
        vector<int>result(n , -1); // Initialize the result array with -1
        
        map<int, int>intervalMap; // Map start points to interval indices
        
        for (int i = 0; i < n; i++) {
            intervalMap[intervals[i][0]] = i; // Store start point and its corresponding index
        }
        
        for(int i = 0; i < n; i++) {
            auto it = intervalMap.lower_bound(intervals[i][1]); // Find the smallest start point >= current end point
            
            if(it != intervalMap.end()) {
                result[i] = it->second; // Store the index of the right interval
            }
        }
        return result;
        
    }
};