#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, M;
    cin >> N >> M;

    vector <vector<int>> g(N+1);
    vector <bool> visited(N+1, 0);
    for (int i=0; i<M; i++) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
    }


    queue <int> q;
    q.push(1);
    visited[1] = 1;

    while (!q.empty()) {
        int f = q.front(); q.pop();

        for (auto u:g[f]) {
            if (visited[u]) continue;
            q.push(u);
            visited[u] = 1;
        } 
    }

    int ans = 0;
    for (int i=1; i<=N; i++) {
        if (visited[i]) ans++;
    }

    cout << ans;
    return 0;
}