class Solution {
public:
      long long int power(long long int x, long long int y, long long int p){  
        long long int res = 1;
        x = x % p; 

        while(y > 0){
          
            if(y & 1){
                res = (res*x) % p;
            }

            y >>= 1;
            x = (x*x) % p;
        }
        
        return res;  
    };
    string longestPrefix(string s) {
          int N = s.size();
        if(N == 1) return "";
        long long int mod = pow(10, 9) + 7;
        
        long long int prefixHash = 0, suffixHash = 0;
        
        int res = -1;
        
        for(int i = 0; i < N-1; i++){
   
            prefixHash += (s[i]-'a') * power(26, i, mod);
            prefixHash %= mod;
            
            suffixHash = suffixHash * 26 + (s[N-1-i] - 'a');
            suffixHash %= mod;
            
            if(prefixHash == suffixHash){
                res = i;
            }
        }
        
        return (res == -1) ? "" : s.substr(0, res+1);
    }
};