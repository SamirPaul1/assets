//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int low = 0, mid = 0, high = n - 1;
        
        while(mid <= high) {
            switch(a[mid]) {
                // If element is 0
                case 0:
                swap(a[mid++], a[low++]);
                break;
                
                case 1:
                a[mid++];
                break;
                
                case 2:
                swap(a[mid], a[high--]);
                break;
            }
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends