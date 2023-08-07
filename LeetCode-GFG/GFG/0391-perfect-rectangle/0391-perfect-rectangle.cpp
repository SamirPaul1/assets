class Solution {
public:
    bool isRectangleCover(vector<vector<int>>& rectangles) {
         unordered_map<string,int> mp;
        string corners[4];
        for(auto v: rectangles)
            for(int i = 0; i<4; ++i){
                corners[i] = to_string(v[i/2*2]) + "," + to_string(v[(i%2)*2+1]);
                if(mp[corners[i]] & int(pow(2,i))) return false;
                else mp[corners[i]] |= int(pow(2,i));
            }
        int corner = 0;
        for(auto i=mp.begin(); i!=mp.end(); ++i){
            int val = i->second;
            if(!(val & (val-1)) && (++corner >4)) return false;
            if((val & (val-1)) && !(val == 3 || val==12 || val==10 || val==5 || val==15)) return false;
        }
        return true;         
    }
};