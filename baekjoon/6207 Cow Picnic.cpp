#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int K, N, M, x, u, v;
int main() {
    fio();
    cin >> K >> N >> M;

    vector <int> start(N+1, 0);
    for (int i=0; i<K; i++) {
        cin >> x;
        start[x]++;
    }

    vector <vector<int>> g(N+1);
    for (int i=0; i<M; i++) {
        cin >> u >> v;
        g[u].push_back(v);
    }

    vector <int> cnt(N+1, 0);
    for (int i=1; i<=N; i++) {
        if (!start[i]) continue;

        queue <int> q;
        vector <bool> visited(N+1, 0);

        q.push(i);
        visited[i] = 1;
        cnt[i] += start[i];
        while (!q.empty()) {
            int f = q.front(); q.pop();
            for (auto x:g[f]) {
                if (visited[x]) continue;
                q.push(x);
                visited[x] = 1;
                cnt[x] += start[i];
            }
        }
    }

    int ans = 0;
    for (int i=1; i<=N; i++) {
        if (cnt[i] == K) ans++;
    }

    cout << ans;
    return 0;
}