class Solution {
public:
    int maxVowels(string s, int k) {
     unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int vowelCount = 0;
        for(int i = 0; i < k; ++i) {
            if(vowels.find(s[i]) != vowels.end())
                vowelCount++;
        }
        int l = 0, r = k - 1;
        int maxVowelCount = vowelCount;
        while(r < s.length() - 1) {
            if(vowels.find(s[l]) != vowels.end())
                vowelCount--;
            l++;
            r++;
            if(vowels.find(s[r]) != vowels.end())
                vowelCount++;
            maxVowelCount = max(maxVowelCount, vowelCount);
        }
        return maxVowelCount;
    }
};