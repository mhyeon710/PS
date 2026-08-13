#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int X[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int Y[8] = {1, 2, 2, 1, -1, -2, -2, -1};

int main() {
    fio();
    int N, M;
    cin >> N >> M;

    char arr[N][M];

    int sx, sy, gx, gy;
    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'K') sx = i, sy = j;
            if (arr[i][j] == 'X') gx = i, gy = j;
        }
    }

    bool visited[N][M];
    memset (visited, 0, sizeof(visited));
    
    queue <pair<pii, int>> q;
    q.push({{sx, sy}, 0});
    visited[sx][sy] = 1;

    int ans = -1;
    while (!q.empty()) {
        auto [c, cnt] = q.front(); q.pop();
        auto [x, y] = c;

        for (int i=0; i<8; i++) {
            int nx = x + X[i];
            int ny = y + Y[i];
            if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            if (visited[nx][ny]) continue;
            if (arr[nx][ny] == '#') continue;

            if (arr[nx][ny] == 'X') {
                cout << cnt+1;
                return 0;
            }

            q.push({{nx, ny}, cnt+1});
            visited[nx][ny] = 1;
        }
    }

    cout << ans;
    return 0;
}