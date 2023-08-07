//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int numberOfSubsequences(string S, string W){
        // code here 
        int i=0;
       int cunt=0;
        
       while(i<S.size()){
            int k=0;
            for(int j=i;j<S.size();j++){
                if(W[k]==S[j]){
                   
                       if(k==0)
                       i=j+1;
                       
                        k++;
                       S[j]='-1';
                }
                if(k==W.size())
                    break;
         }
            
            if(k==W.size()) cunt++;
            else break;
      }
        
     return cunt;  
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S,W;
        cin >> S >> W;
        Solution ob;
        cout << ob.numberOfSubsequences(S,W) << endl;
    }
    return 0; 
} 


// } Driver Code Ends