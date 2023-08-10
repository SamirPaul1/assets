class Solution {
public:
    vector<int> maximumBobPoints(int numArrows, vector<int>& aliceArrows) {
       int ans = 0;
        vector<int> ret;
        for (int i=0; i<(1<<12); ++i) {
            int score=0, need=0;
            for (int j=0; j<=11; ++j)
                if ((i>>j) & 1) {
                    score += j;
                    need += aliceArrows[j] + 1;
                }
            if (score > ans && numArrows >= need) {
                ret.clear();
                for (int j=0; j<=11; ++j)
                    if ((i>>j) & 1) {
                        ret.push_back(aliceArrows[j]+1);
                    } else {
                        ret.push_back(0);
                    }
                ret.back() += numArrows - need;
                ans = score;
            }
        }
        return ret; 
    }
};