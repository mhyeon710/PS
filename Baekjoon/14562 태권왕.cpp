#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int S, E;
        cin >> S >> E;

        if (S == E) {
            cout << 0 << '\n';
            continue;
        }

        int cnt[1001][1001];
        memset(cnt, -1, sizeof(cnt));

        queue <pii> q;
        cnt[S][E] = 0;
        q.push({S, E});

        while (!q.empty()) {
            auto [s, e] = q.front();
            q.pop();

            int s1 = s+1, e1 = e;
            if (cnt[s1][e1] == -1 && s1 <= e1) {
                cnt[s1][e1] = cnt[s][e] + 1;
                q.push({s1, e1});
            }

            if (s1 == e1) {
                cout << cnt[s1][e1] << '\n';
                break;
            }

            int s2 = s*2, e2 = e+3;
            if (cnt[s2][e2] == -1 && s2 <= e2) {
                cnt[s2][e2] = cnt[s][e] + 1;
                q.push({s2, e2});
            }

            if (s2 == e2) {
                cout << cnt[s2][e2] << '\n';
                break;
            }
        }
    }
    return 0;
}