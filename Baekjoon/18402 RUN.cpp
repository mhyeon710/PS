#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, E, T, M;
    cin >> N >> E >> T >> M;

    int dist[N+1][N+1];
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N; j++) {
            if (i == j) dist[i][j] = 0;
            else dist[i][j] = 1e7;
        }
    }

    for (int i=0; i<M; i++) {
        int u, v, t;
        cin >> u >> v >> t;
        dist[u][v] = t;
    }

    for (int k=1; k<=N; k++) {
        for (int i=1; i<=N; i++) {
            for (int j=1; j<=N; j++) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    int ans = 0;
    for (int i=1; i<=N; i++) {
        if (dist[i][E] <= T) ans++;
    }

    cout << ans;
    return 0;
}