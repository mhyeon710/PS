#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

bool ans;
int T, N, M, u, v;
vector <int> bug(2001);
vector <vector<int>> edge(2001);

void check(int now) {
    if (!ans) return;

    if (bug[now] == 0) bug[now] = 1;
    else {
        for (auto u:edge[now]) {
            if (bug[u] == bug[now]) {
                ans = false;
                break;
            } 
            if (bug[u]) continue;
            bug[u] = bug[now] == 1 ? 2 : 1;
            check(u);
        }
    }
}

int main() {
    fio();
    
    cin >> T;
    for (int t=1; t<=T; t++) {
        cin >> N >> M;

        for (int i=1; i<=N; i++) {
            bug[i] = 0;
            edge[i].clear();
        }

        for (int i=0; i<M; i++) {
            cin >> u >> v;
            edge[u].push_back(v);
            edge[v].push_back(u);
        }

        ans = true;
        for (int i=1; i<=N; i++) {
            if (bug[i]) continue;
            bug[i] = 1;
            check(i);
        }

        cout << "Scenario #" << t << ":\n";

        if (ans) cout << "No suspicious bugs found!\n\n";
        else cout << "Suspicious bugs found!\n\n";
    }
    return 0;
}