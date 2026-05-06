#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int N, M, a, b;
vector <int> v(500001);
vector <vector<int>> g(500001);

int main() {
    fio();

    cin >> N >> M;
    for (int i=1; i<=N; i++) cin >> v[i];

    for (int i=0; i<M; i++) {
        cin >> a >> b;

        g[a].push_back(b);
        g[b].push_back(a);
    }

    int ans = 0;
    for (int i=1; i<=N; i++) {
        if (v[i]) continue;
        
        bool cont = false;

        for (auto u: g[i]) {
            if (v[u] != 1) {
                cont = true;
                break;
            }
        }

        if (cont) continue;

        vector <bool> visited(N+1, 0);
        queue <pii> q;
        q.push({i, 0});
        visited[i] = 1;

        while (!q.empty()) {
            auto [idx, now] = q.front(); q.pop();
            if (now != v[idx]) {
                cont = false;
                break;
            }
            
            
            for (auto u: g[idx]) {
                if (visited[u]) continue;

                q.push({u, (now+1)%3});
                visited[u] = 1;
            }
        }

        if (cont) continue;

        ans = i;
        break;
    }

    cout << ans;
    return 0;
}