class Solution {
public:
    const int mod = 1e9 + 7;

    int threeSumMulti(vector<int>& arr, int target) {
        int cnt[101] = {0};
        for (int& v : arr) {
            ++cnt[v];
        }
        long ans = 0;
        for (int j = 0; j < arr.size(); ++j) {
            int b = arr[j];
            --cnt[b];
            for (int i = 0; i < j; ++i) {
                int a = arr[i];
                int c = target - a - b;
                if (c >= 0 && c <= 100) {
                    ans += cnt[c];
                    ans %= mod;
                }
            }
        }
        return ans;
    }
};