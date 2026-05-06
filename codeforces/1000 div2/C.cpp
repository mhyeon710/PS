#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
 
        vector <set<int>> g(N+1);
        for (int i=0; i<N-1; i++) {
            int u, v;
            cin >> u >> v;
            u--; v--;
            g[u].insert(v);
            g[v].insert(u);
        }
 
        vector <pii> v;
        for (int i=0; i<N; i++) {
            v.push_back({g[i].size(), i});
        }
 
        sort(v.rbegin(), v.rend());
 
        int ans = 0;
        for (int i=0; i<N; i++) {
            int sum = v[i].first;
            if (sum != v.front().first) break;
            for (int r=i+1; r<N; r++) {
                int j = v[r].second;
                int cnt = sum + g[j].size() - 1;
 
                if (ans >= cnt) break;
                else {
                    if (g[j].find(v[i].second) != g[j].end()) cnt--;
                    ans = max(ans, cnt);
                }
            }
        }
 
        cout << ans << '\n';
    }
    return 0;
}