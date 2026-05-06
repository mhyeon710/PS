#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int X[4] = {1, 0, -1, 0};
int Y[4] = {0, 1, 0, -1};

int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N, M, ix, iy, fx, fy;
        cin >> M >> N >> iy >> ix >> fy >> fx;

        char arr[N+1][M+1];
        for (int i=N; i>=1; i--) {
            for (int j=1; j<=M; j++) {
                cin >> arr[i][j];
            }
        }

        if (ix == fx && iy == fy) {
            cout << "YES\n";
            continue;
        }

        char init = arr[ix][iy];
        bool visited[N+1][M+1];
        memset(visited, 0, sizeof(visited));

        queue <pii> q;
        q.push({ix, iy});
        visited[ix][iy] = 1;

        bool can = false;
        while(!q.empty()) {
            auto [x, y] = q.front(); q.pop();

            for (int i=0; i<4; i++) {
                int nx = x + X[i];
                int ny = y + Y[i];

                if (nx <= 0 || nx > N || ny <= 0 || ny > M) continue;
                if (visited[nx][ny] || arr[nx][ny] != init) continue;
                if (nx == fx && ny == fy) {
                    can = true;
                    break;
                }

                q.push({nx, ny});
                visited[nx][ny] = 1;
            }

            if (can) break;
        }

        if (can) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}