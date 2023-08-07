class Solution {
public:
    bool detectCapitalUse(string word) {
       int n = word.size();
       int Upper = 0;
        
        for(int i = 0; i < n; i++) {
            if(word[i] >= 'A' && word[i] <= 'Z')
                ++Upper;
        }
        if(Upper == n or Upper == 0 or (word[0] >= 'A' and word[0] <= 'Z' and Upper == 1))
        return true;
        
        return false;
    }
};