#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int main() {
    fio();
    int T;
    cin >> T;

    for (int test_case=1; test_case<=T; test_case++) {
        int R, C;
        cin >> R >> C;

        ll arr[R][C];
        priority_queue <array<ll, 3>> pq;

        for (int i=0; i<R; i++) {
            for (int j=0; j<C; j++) {
                cin >> arr[i][j];
                pq.push({arr[i][j], i, j});
            }
        }
        
        ll ans = 0;
        while (!pq.empty()) {
            auto [now, x, y] = pq.top(); pq.pop();

            if (arr[x][y] != now) continue;

            for (int i=0; i<4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
                if (arr[nx][ny] < now - 1) {
                    ans += (now - 1 - arr[nx][ny]);
                    arr[nx][ny] = now - 1;
                    pq.push({arr[nx][ny], nx, ny});
                }
            }
        }

        cout << "Case #" << test_case << ": " << ans << '\n';
    }
    return 0;
}