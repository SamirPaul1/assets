class Solution {
public:
    int tribonacci(int n) {
     vector<int> arr(n+1);
        
        arr[0] = 0; 
        if(n >= 1)arr[1] = 1; 
        if(n >= 2)arr[2] = 1;
        
        for(int i = 3; i <= n; i++){
            arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
        }
        
        return arr[n];    
    }
};