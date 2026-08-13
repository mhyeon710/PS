#include <bits/stdc++.h>
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
    for (int i=0; i<M; i++) {
        int u, v;
        cin >> u >> v;

        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector <vector<int>> ans(N);
    vector <bool> joined(N+1, 0);

    int now = 0;
    for (int i=1; i<=N; i++) {
        if (joined[i]) continue;
        ans[now].push_back(i);

        for (int j=i+1; j<=N; j++) {
            if (joined[j]) continue;

            bool team = true;
            for (auto dislike: g[j]) {
                for (auto member: ans[now]) {
                    if (dislike == member) {
                        team = false;
                        break;
                    }
                }
                if (!team) break;
            }

            if (team) {
                ans[now].push_back(j);
                joined[j] = true;
            }
        }
        now++;
    }

    cout << now << '\n';
    for (int i=0; i<now; i++) {
        for (auto x: ans[i]) cout << x << ' ';
        cout << '\n';
    }
    return 0;
}