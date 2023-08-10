class Solution {
public:
    
    static bool comparator(vector<int> &a, vector<int> &b) {
        if(a[0] == b[0]) {
            return a[1] > b[1];
        }
        return a[0] < b[0];
    }
    
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        if(intervals.size() == 0) return 0;
        int count = 1;
        sort(intervals.begin(), intervals.end(), comparator);
        
        int start = intervals[0][0];
        int end = intervals[0][1];
        
        for(int i = 1; i < intervals.size(); i++) {
            if(intervals[i][0] >= start and intervals[i][1] <= end) {
                continue;
            }
            else {
                start = min(start, intervals[i][0]);
                end = max(end, intervals[i][1]);
                count++;
            }
        }
        return count;
    }
};