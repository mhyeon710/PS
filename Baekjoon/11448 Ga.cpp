#include <iostream>
#include <utility>
#include <queue>
#define pii pair<int, int>
using namespace std;

int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(false);

    int T; cin >> T;
    while (T--) {
        int N; cin >> N;

        queue <pii> q;

        int arr[N][N];
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                char c; cin >> c;
                if (c == '-') arr[i][j] = 0;
                if (c == 'b') arr[i][j] = -1;
                if (c == 'w') {
                    arr[i][j] = 1;
                    q.push({i, j});
                }
            }
        }

        int cnt = 0;
        while (!q.empty()) {
            auto [nx, ny] = q.front(); q.pop();

            for (int i=0; i<8; i++) {
                int x = nx + dx[i];
                int y = ny + dy[i];
                if (x < 0 || x >= N || y < 0 || y >= N || arr[x][y] == -1) continue;
                if (arr[x][y] == 0) {
                    q.push({x, y});
                    arr[x][y] = 1;
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}