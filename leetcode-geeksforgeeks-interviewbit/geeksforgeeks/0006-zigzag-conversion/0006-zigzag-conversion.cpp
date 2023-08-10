class Solution {
public:
    string convert(string s, int numRows) {
      if(numRows == 1) return s;
      string result = "";
        int jumps = (numRows - 1) * 2;
        for(int i = 0; i < numRows; i++) {
            for(int j = i; j < s.size(); j+=jumps) {
                result+=s[j];
                if(i > 0 && i < numRows - 1 && (j + jumps - 2 * i) < s.size()) {
                    result+=s[j+jumps-2*i];
                }
            }
        }
        return result;
    }
};