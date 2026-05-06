#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, M, u, v;
    cin >> N >> M;

    vector <vector<int>> g(N+1);
    vector <int> in(N+1);
    for (int i=0; i<M; i++) {
        cin >> u >> v;

        in[v]++;
        g[u].push_back(v);
    }

    priority_queue <int, vector<int>, greater<int>> q;
    // queue <int> q;
    for (int i=1; i<=N; i++) {
        if (in[i] == 0) {
            q.push(i);
        }
    }

    vector <int> ans;
    for (int i=1; i<=N; i++) {
        if (q.empty()) {
            cout << "IMPOSSIBLE";
            return 0;
        }

        int f = q.top();
        // int f = q.front();
        q.pop();
        ans.push_back(f);

        for (auto u:g[f]) {
            in[u]--;
            if (in[u] == 0) {
                q.push(u);
            }
        }
    }

    for (auto x:ans) cout << x << ' ';
    return 0;
}