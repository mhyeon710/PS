#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

vector <pii> g[5001], m[5001];
int main() {
    fio();
    int N, Q;
    cin >> N >> Q;
    
    for (int i=0; i<N-1; i++) {
        ll u, v, r;
        cin >> u >> v >> r;
        g[u].push_back({v, r});
        g[v].push_back({u, r});
    }

    for (int i=1; i<=N; i++) {
        vector <bool> visited(N+1, 0);
        visited[i] = 1;

        queue <pii> q;
        for (auto x:g[i]) {
            q.push(x);
            m[i].push_back(x);
            visited[x.first] = 1;
        }

        while (!q.empty()) {
            auto [u, r] = q.front(); q.pop();
            for (auto [nu, nr]:g[u]) {
                if (visited[nu]) continue;
                ll t = min(r, nr);
                q.push({nu, t});
                m[i].push_back({nu, t});
                visited[nu] = 1;
            }
        }
    }

    for (int i=0; i<Q; i++) {
        ll k, v;
        cin >> k >> v;
        
        int ans = 0;
        for (auto x: m[v]) {
            if (x.second >= k) ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}