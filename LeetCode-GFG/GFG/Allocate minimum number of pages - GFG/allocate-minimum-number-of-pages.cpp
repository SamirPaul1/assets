//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
         int mp =0 ,ans=-1;

        if(M>N) return -1;

        for(int i=0;i<N;i++) mp+=A[i];

        int  l =A[N-1], r = mp;

        while(l<=r)
        {
            int mid = l+(r-l)/2;
            int cnt =1 , sum =0 ;
            for(int i =0;i<N;i++)
            {
                sum+=A[i];

                if(sum>mid)

                {
                    cnt++;
                    sum=A[i];

                }
            }
            if(cnt>M) l=mid+1;

            else  r=mid-1;
        }
        return l;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends