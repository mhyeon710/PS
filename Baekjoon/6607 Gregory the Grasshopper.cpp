#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[8] = {2, 1, -1, -2, 2, 1, -1, -2};
int main() {
    fio();
    int R, C, SR, SC, ER, EC;
    while (cin >> R >> C >> SR >> SC >> ER >> EC) {
        int cnt[R+1][C+1];
        memset(cnt, -1, sizeof(cnt));

        queue <pii> q;
        q.push({SR, SC});
        cnt[SR][SC] = 0;

        if (SR == ER && SC == EC) {
            cout << 0 << '\n';
            continue;
        }

        int ans = -1;
        while (!q.empty()) {
            auto [r, c] = q.front(); q.pop();

            for (int i=0; i<8; i++) {
                int nr = r + dx[i];
                int nc = c + dy[i];

                if (nr <= 0 || nr > R || nc <= 0 || nc > C) continue;
                if (cnt[nr][nc] > -1) continue;

                cnt[nr][nc] = cnt[r][c] + 1;
                q.push({nr, nc});

                if (nr == ER && nc == EC) {
                    ans = cnt[ER][EC];
                    break;
                }
            }

            if (cnt[ER][EC] > -1) break;
        }
        
        ans == -1 ? (cout << "impossible\n") : (cout << ans << '\n');
    }
    return 0;
}