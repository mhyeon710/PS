#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    vector <vector <int>> g(N+1);

    int ans = 0;
    for (int i=0; i<N-1; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int i=0; i<N; i++) {
        ans += (g[i+1].size() > 2 ? g[i+1].size()-2 : 0);
    }

    cout << ans;
    return 0;
}