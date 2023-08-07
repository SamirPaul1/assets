class Solution {
public:
    bool buddyStrings(string s, string goal) {
     if(s.size() != goal.size()) return false;
        
        int n = s.size();
        
        int diff_count = 0;
        unordered_map<int, int> counter;
        vector<int> diffs;
        bool dup = false;
        
        for(int i = 0; i < n; ++i){
            if(s[i] != goal[i]) diffs.push_back(i);
            ++counter[s[i]];
            if(counter[s[i]] >= 2) dup = true;
        }
        
        if(diffs.empty() && dup) return true;
        
        if(diffs.size() != 2) return false;
        
        /*
        for diffs.size() == 2,
        still need to check if swap works:
        e.g. swap not works for the case:
        "abcaa"
        "abcbb"
        */
        swap(s[diffs[0]], s[diffs[1]]);
        
        return s == goal;    
    }
};