//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long max_sum = 0;
        long curr_sum = 0;
        for(int i = 0; i < K; i++) {
            curr_sum += Arr[i];
        }
        max_sum = curr_sum;
        for(int i = K; i < N; i++) {
            curr_sum += Arr[i] - Arr[i - K];
            max_sum = max(max_sum, curr_sum);
        }
        return max_sum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends