class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        if(s.size() < p.size()) return {};
        
        
        vector<int> phash(26, 0);
        vector<int> shash(26, 0);
        
        vector<int>ans;
        
        for(int i = 0; i < p.size(); i++)
        {
           phash[p[i]-'a']++; 
           shash[s[i]-'a']++;     
        }
        
        if(phash == shash) ans.push_back(0);
        
    
        for(int i = p.size(); i < s.size(); i++){
           shash[s[i]-'a']++; 
           shash[s[i-p.size()]-'a']--;  
            
            if(phash == shash) ans.push_back(i+1-p.size());
        }
        
        return ans;
    }
};