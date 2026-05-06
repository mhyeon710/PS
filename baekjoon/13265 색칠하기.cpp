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

        vector <vector<int>> v(N+1);
        for (int i=0; i<M; i++) {
            int x, y;
            cin >> x >> y;

            v[x].push_back(y);
            v[y].push_back(x);
        }

        bool can = true;
        vector <int> color(N+1, 0);
        vector <bool> visited(N+1, 0);

        for (int i=1; i<=N; i++) {
            if (color[i]) continue;

            queue <pii> q;
            q.push({i, 1});
            visited[i] = 1;
            color[i] = 1;

            while (!q.empty()) {
                auto [f, c] = q.front();
                q.pop();

                for (auto u:v[f]) {
                    if (visited[u]) {
                        if (color[u] != c) continue;
                        else {
                            can = false;
                            break;
                        }
                    }
                    c == 1 ? color[u] = 2 : color[u] = 1;
                    visited[u] = 1;
                    q.push({u, color[u]});
                }

                if (!can) break;
            }
        }

        if (can) cout << "possible\n";
        else cout << "impossible\n";
    }
    return 0;
}