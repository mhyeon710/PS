#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, M, K;
    cin >> N >> M >> K;

    vector <vector<int>> g(N+2);
    for (int i=0; i<M; i++) {
        int u, v;
        cin >> u >> v; 
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector <bool> tra(N+2, 0);
    for (int i=0; i<K; i++) {
        int x;
        cin >> x;
        tra[x] = 1;
    }

    queue <int> q;
    q.push(1);
    
    vector <bool> check(N+2, 0);
    while (!q.empty()) {
        int now = q.front(); q.pop();
        if (check[now] || tra[now]) continue;

        check[now] = 1;
        for (auto x: g[now]) {
            q.push(x);
        }
    }

    int ans = 0;
    for (int i=2; i<=N+1; i++) {
        if (check[i]) {
            ans++;
        }
    }

    cout << ans;
    return 0;
}