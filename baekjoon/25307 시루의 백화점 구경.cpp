#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int X[4] = {0, 1, 0, -1};
int Y[4] = {1, 0, -1, 0};
int arr[2000][2000], mdist[2000][2000];
bool visited[2000][2000];

int main() {
    fio();
    int N, M, K;
    cin >> N >> M >> K;

    pii start;
    queue <pii> mq;
    memset(mdist, -1, sizeof(mdist));
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> arr[i][j];

            if      (arr[i][j] == 4) start = {i, j};
            else if (arr[i][j] == 3) {
                mq.push({i, j});
                mdist[i][j] = 0;
            }
        }
    }

    while (!mq.empty()) {
        auto [x, y] = mq.front(); mq.pop();
        if (mdist[x][y] == K) continue;

        for (int i=0; i<4; i++) {
            int nx = x + X[i];
            int ny = y + Y[i];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (mdist[nx][ny] >= 0) continue;

            mdist[nx][ny] = mdist[x][y] + 1;
            mq.push({nx, ny});
        }
    }

    // for (int i=0; i<N; i++) {
    //     for (int j=0; j<M; j++) {
    //         if (mdist[i][j] >= 0) cout << '+';
    //         cout << mdist[i][j] << ' ';
    //     }
    //     cout << endl;
    // }

    queue <array<int, 3>> q;

    auto [ix, iy] = start;
    q.push({ix, iy, 0});
    visited[ix][iy] = 1;

    int ans = -1;
    bool br = false;
    while (!q.empty()) {
        auto [x, y, cnt] = q.front(); q.pop();
        for (int i=0; i<4; i++) {
            int nx = x + X[i];
            int ny = y + Y[i];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (arr[nx][ny] == 1) continue;
            if (visited[nx][ny]) continue;
            if (mdist[nx][ny] >= 0) continue;
            if (arr[nx][ny] == 2) {
                ans = cnt+1;
                br = true;
                break;
            }

            visited[nx][ny] = 1;
            q.push({nx, ny, cnt+1});
        }

        if (br) break;
    }

    cout << ans;
    return 0;
}