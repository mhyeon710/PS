#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, M, Q;
    cin >> N >> M >> Q;

    vector <int> arr(N+1);
    for (int i=1; i<=N; i++) {
        cin >> arr[i];
    }

    vector <vector <int>> g(N+1);
    for (int i=0; i<M; i++) {
        int u, v;
        cin >> u >> v;

        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector <int> v(N+1);
    vector <bool> visited(N+1);
    for (int i=1; i<=N; i++) {
        if (visited[i]) continue;

        queue <int> q;
        vector <int> temp;
        int one = 0, zero = 0;

        arr[i] == 1 ? one++ : zero++;
        q.push(i);
        visited[i] = 1;
        temp.push_back(i);

        while (!q.empty()) {
            int f = q.front(); q.pop();

            for (auto u:g[f]) {
                if (visited[u]) continue;

                arr[u] == 1 ? one++ : zero++;
                q.push(u);
                visited[u] = 1;
                temp.push_back(u);
            }
        }

        if (one > zero) {
            for (auto x:temp) {
                v[x] = 1;
            }
        }
    }

    for (int i=0; i<Q; i++) {
        int x; cin >> x;
        cout << v[x] << '\n';
    }

    return 0;
}