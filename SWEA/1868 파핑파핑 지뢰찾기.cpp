#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

#define pii pair<int, int>

int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};

int main() {
    cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false);

    int T; cin >> T;
    for (int t=1; t<=T; t++) {
        int N; cin >> N;

        char arr[300][300];
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                cin >> arr[i][j];
            }
        }

        int cnt[300][300];
        memset(cnt, 0, sizeof(cnt));
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                if (arr[i][j] == '*') {
                    cnt[i][j] = -1;
                    continue;
                }

                int temp = 0;
                for (int t=0; t<8; t++) {
                    int nx = i + dx[t];
                    int ny = j + dy[t];
                    if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                    if (arr[nx][ny] == '.') continue;
                    temp++;
                }

                cnt[i][j] = temp;
            }
        }

        bool visited[300][300];
        memset(visited, 0, sizeof(visited));

        int ans = 0;
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                if (cnt[i][j] == -1) {
                    visited[i][j] = 1;
                    continue;
                }

                if (cnt[i][j] > 0) continue;
                if (visited[i][j]) continue;

                queue <pii> q;
                q.push({i, j});
                while (!q.empty()) {
                    auto [fx, fy] = q.front(); q.pop();
                    visited[fx][fy] = 1;

                    for (int t=0; t<8; t++) {
                        int nx = fx + dx[t];
                        int ny = fy + dy[t];
                        if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;

                        if (cnt[nx][ny] == 0 && visited[nx][ny] == 0) {
                            q.push({nx, ny});
                        }

                        visited[nx][ny] = 1;
                    }
                }
                ans++;
            }
        }

        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                if (visited[i][j] == 0) {
                    ans++;
                }
            }
        }
        cout << "#" << t << ' ' << ans << '\n';
    }

    return 0;
}