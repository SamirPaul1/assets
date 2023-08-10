class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
       unordered_map<int,int>m;
        for(auto&task:tasks){
            m[task]++;
        }
        int ans=0;
        for(auto it=m.begin();it!=m.end();it++){
            if(it->second==1){
                ans=-1;
                break;
            }
            else{
                ans+=ceil((it->second)/3.0);
            }
        }
        return ans; 
    }
};