#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    
    vector <vector<int>> g(13);

    for (int i=0; i<12; i++) {
        int u, v;
        cin >> u >> v;

        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int i=1; i<=12; i++) {
        map<int, int> m;
        vector <bool> visited(13, 0);
        m.clear();

        queue <pii> q;
        q.push({i, 0});
        visited[i] = 1;

        while (!q.empty()) {
            auto [node, dist] = q.front(); q.pop();
            for (auto u: g[node]) {
                if (visited[u]) continue;
                
                m[dist+1]++;
                q.push({u, dist+1});
                visited[u] = 1;
            }
        }

        if (m[1] == 3 && m[2] == 3 && m[3] == 3 && m[4] == 1 && m[5] == 1) {
            cout << i;
            break;
        }
    }

    return 0;
}