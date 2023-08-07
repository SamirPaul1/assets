#define ll long long
class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
       vector <pair<int, int> > v[205];
        for (auto i:roads){
            v[i[0]].push_back({i[1], i[2]});
            v[i[1]].push_back({i[0], i[2]});
        }
        ll dis[205], cnt[205] = {}, mod = 1000000007;
        memset(dis, -1, sizeof(dis));
        dis[0] = 0;
        cnt[0] = 1;
        priority_queue <pair<ll, int>, vector<pair<ll, int> >, greater<pair<ll, int> > > pq;
        pq.push({0, 0});
        while (!pq.empty()){
            ll x = pq.top().second, y = pq.top().first;
            pq.pop();
            if (y != dis[x]) continue;
            for (auto i:v[x]){
                if (dis[i.first] == -1 || dis[x]+i.second < dis[i.first]){
                    dis[i.first] = dis[x]+i.second;
                    cnt[i.first] = cnt[x];
                    pq.push({dis[i.first], i.first});
                }
                else if (dis[x]+i.second == dis[i.first]){
                    cnt[i.first] += cnt[x];
                    cnt[i.first] %= mod;
                }
            }
        }
        return cnt[n-1];  
    }
};