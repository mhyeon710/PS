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
        int N, D, C;
        cin >> N >> D >> C;

        vector <vector<pii>> g(N+1);
        for (int i=0; i<D; i++) {
            int a, b, s;
            cin >> a >> b >> s;
            g[b].push_back({a, s});
        }

        vector <int> dist(N+1, 1e9);
        priority_queue<pii, vector<pii>, greater<pii>> pq;

        dist[C] = 0;
        pq.push({0, C});

        while (!pq.empty()) {
            auto [t, u] = pq.top(); pq.pop();

            if (t > dist[u]) continue;

            for (auto [v, w] : g[u]) {
                if (dist[v] > dist[u] + w) {
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                }
            }
        }

        int cnt = 0;
        int maxi = 0;
        for (int i=1; i<=N; i++) {
            if (dist[i] != 1e9) {
                cnt++;
                maxi = max(maxi, dist[i]);
            }
        }

        cout << cnt << ' ' << maxi << '\n';
    }
    return 0;
}