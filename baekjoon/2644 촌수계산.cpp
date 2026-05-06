#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;
    int a, b; cin >> a >> b;
    int M; cin >> M;

    vector <vector<int>> g(N+1);
    for (int i=0; i<M; i++) {
        int u, v;
        cin >> u >> v;

        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector <bool> visited(N+1, 0);
    queue <pii> q;
    q.push({a, 0});
    visited[a] = 1;

    while (!q.empty()) {
        auto [f, cnt] = q.front(); q.pop();

        for (auto u:g[f]) {
            if (u == b) {
                cout << cnt+1;
                return 0;
            }
            if (visited[u]) continue;

            q.push({u, cnt+1});
            visited[u] = 1;
        }
    }

    cout << -1;
    return 0;
}