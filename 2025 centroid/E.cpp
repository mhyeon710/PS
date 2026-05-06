#include <bits/stdc++.h>
#define pii pair<int, int>
#define ll long long
#define fio() cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int X[4] = {1, 0, -1, 0};
int Y[4] = {0, 1, 0, -1};
int main() {
    fio();
    int N; cin >> N;
    
    char arr[N][N];
    queue <pair<pii, pii>> q; // <<x, y>, <cnt, dir>>
    
    bool visited[N][N];
    memset(visited, 0, sizeof(visited));

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            char c; cin >> c;
            arr[i][j] = c;
            if (c == 'R') {
                q.push({{i, j}, {1, -1}});
                visited[i][j] = 1;
            }
        }
    }

    int ans = 100;
    while (!q.empty()) {
        auto f = q.front(); q.pop();
        int x = f.first.first, y = f.first.second, cnt = f.second.first, dir = f.second.second;
        cout << x << ' ' << y << ' ' << cnt << ' ' << dir << '\n';

        if (arr[x][y] == 'K') {
            ans = min(ans, cnt);
            continue;
        }
        
        for (int i=0; i<4; i++) {
            int temp = cnt;
            int nx = x + X[i];
            int ny = y + Y[i];
            if (nx < 0 || nx >= N || ny <0 || ny >= N) continue;
            if (visited[nx][ny] || arr[nx][ny] == 'B') continue;

            if (dir != -1 && i != dir) {
                temp++;
            }

            if (arr[nx][ny] == 'W') {
                temp++;
            }

            q.push({{nx, ny}, {temp, i}});
            visited[nx][ny] = 1;
        }
    }
    
    cout << ans;
    return 0;
}