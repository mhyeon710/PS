#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int N, n, x;
int main() {
    fio();
    cin >> N;

    vector <vector <int>> g(N+1);
    for (int i=1; i<=N; i++) {
        cin >> n;
        for (int j=0; j<n; j++) {
            cin >> x;
            g[i].push_back(x);
        }
    }

    vector <int> team(N+1);
    for (int i=1; i<=N; i++) {
        if (team[i]) continue;
        
        queue <int> q;
        q.push(i);
        
        while (!q.empty()) {
            int f = q.front(); q.pop();

            for (auto u:g[f]) {
                if (team[u]) continue;

                team[f] == 1 ? team[u] = 2 : team[u] = 1;
                q.push(u);
            }
        }
    }

    vector <int> t1, t2;
    for (int i=1; i<=N; i++) {
        if (team[i] == 1) t1.push_back(i);
        else t2.push_back(i);
    }

    cout << t1.size() << '\n';
    for (auto x:t1) cout << x << ' '; cout << '\n';

    cout << t2.size() << '\n';
    for (auto x:t2) cout << x << ' ';
    return 0;
}