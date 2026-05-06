#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int maxi, hn, visited[100001];
vector <vector<int>> g(100001);

void dfs(int v) {
    for (auto u:g[v]) {
        if (visited[u]) continue;
        visited[u] = visited[v] + 1;
        if (maxi < visited[u]) {
            maxi = visited[u];
            hn = u;
        }
        dfs(u);
    }
}

int main() {
    fio();
    int N; cin >> N;

    for (int i=0; i<N-1; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1);

    maxi = 0;
    memset(visited, 0, sizeof(visited));
    dfs(hn);

    cout << maxi/2 + maxi%2;
    return 0;
}