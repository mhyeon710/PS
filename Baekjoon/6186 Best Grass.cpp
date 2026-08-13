#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int arr[100][100];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int main() {
    fio();
    int R, C;
    cin >> R >> C;

    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
            char c; cin >> c;
            if (c == '#') arr[i][j] = 1;
        }
    }

    int ans = 0;
    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
            if (arr[i][j] == 0) continue;

            ans++;
            queue <pii> q;
            q.push({i, j});

            while (!q.empty()) {
                auto[nx, ny] = q.front(); q.pop();
                for (int t=0; t<4; t++) {
                    int x = nx + dx[t];
                    int y = ny + dy[t];

                    if (x<0 || x>=R || y<0 || y>=C) continue;
                    if (arr[x][y] == 1) {
                        arr[x][y] = 0;
                        q.push({x, y});
                    }
                }
            }
        }
    }

    cout << ans;
    return 0;
}