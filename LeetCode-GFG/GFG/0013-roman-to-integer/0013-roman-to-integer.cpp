class Solution {
public:
    int romanToInt(string s) {
    unordered_map<char, int> myMap {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
    };
     int value = 0;
        for(int i = 0; i < s.size(); ++i) {
            if(myMap[s[i]] < myMap[s[i+1]])
                value -= myMap[s[i]];
            else 
                value += myMap[s[i]]; 
        }
        return value;
    }
};