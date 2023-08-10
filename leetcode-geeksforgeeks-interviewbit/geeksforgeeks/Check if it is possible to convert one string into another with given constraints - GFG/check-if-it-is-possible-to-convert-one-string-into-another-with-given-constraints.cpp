//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isItPossible(string S, string T, int M, int N) {
        // code here
        if(M!=N) return 0;
        string S1="",S2="";
        for(int i=0;i<S.size();i++){
            if(S[i]!='#'){
                S1+=S[i];
            }
        }
        
          for(int i=0;i<T.size();i++){
            if(T[i]!='#'){
                S2+=T[i];
            }
        }
        return (int)(S1==S2);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, T;
        cin >> S >> T;
        int M = S.length(), N = T.length();
        Solution ob;
        cout << ob.isItPossible(S, T, M, N);
        cout << "\n";
    }
}
// } Driver Code Ends