#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int X[4] = {0, 1, 0, -1};
int Y[4] = {1, 0, -1, 0};
int main() {
    fio();
    int N, M;
    cin >> N >> M;

    bool arr[N][M];
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            char c; cin >> c;
            if (c == '1') arr[i][j] = 1;
            else arr[i][j] = 0;
        }
    }

    bool visited[N][M];
    memset(visited, 0, sizeof(visited));

    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            if (arr[i][j] || visited[i][j]) continue;
            if (i == 0 || i == N-1 || j == 0 || j == M-1) continue;

            bool switched = false;
            
            queue <pii> q;
            q.push({i, j});

            vector <pii> v;

            while (!q.empty()) {
                auto [nx, ny] = q.front(); q.pop();
                if (visited[nx][ny] || arr[nx][ny]) continue;
                visited[nx][ny] = 1;
                v.push_back({nx, ny});

                for (int k=0; k<4; k++) {
                    int Nx = nx + X[k];
                    int Ny = ny + Y[k];

                    if (Nx == 0 || Nx == N-1 || Ny == 0 || Ny == M-1) {
                        switched = false;
                        break;
                    }

                    if (arr[Nx][Ny] || visited[Nx][Ny]) continue;
                    q.push({Nx, Ny});
                }

                if (!switched) break;
            }

            if (switched) {
                for (auto [nx, ny] : v) {
                    arr[nx][ny] = 1;
                }
            }
        }
            cout << endl;

    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}