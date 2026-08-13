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
        int N, M;
        cin >> N >> M;

        vector <vector<int>> g(N+1);
        for (int i=0; i<M; i++) {
            int u, v;
            cin >> u >> v;

            g[u].push_back(v);
            g[v].push_back(u);
        }

        bool can = true;
        vector <int> team(N+1, 0);
        for (int i=1; i<=N; i++) {
            if (!can) break;
            if (team[i]) continue;

            queue <int> q;
            team[i] = 1;
            q.push(i);

            while (!q.empty()) {
                int f = q.front(); q.pop();

                for (auto u:g[f]) {
                    if (team[u]) {
                        if (team[f] == team[u]) {
                            can = false;
                            break;
                        }
                        else continue;
                    }

                    team[f] == 1 ? team[u] = 2 : team[u] = 1;
                    q.push(u);
                }
            }
        }

        if (can) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}