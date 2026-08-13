#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int X[8] = {0, -1, -1, -1, 0, 1, 1, 1};
int Y[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int main() {
    fio();
    int N, M;
    cin >> N >> M;

    int arr[N][N];
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin >> arr[i][j];
        }
    }

    bool visited[N][N];
    vector <pii> cloud;
    cloud.push_back({N-1, 0});
    cloud.push_back({N-1, 1});
    cloud.push_back({N-2, 0});
    cloud.push_back({N-2, 1});

    for (int i=0; i<M; i++) {
        int d, s;
        cin >> d >> s;
        d--;

        memset(visited, 0, sizeof(visited));

        for (int j=0; j<cloud.size(); j++) {
            auto [x, y] = cloud[j];
            x += s * X[d];
            y += s * Y[d];

            while (x < 0) x+= N;
            while (x >= N) x -= N;
            while (y < 0) y += N;
            while (y >= N) y -= N;

            cloud[j] = {x, y};
            visited[x][y] = 1;
            arr[x][y]++;
        }

        for (auto [x, y]: cloud) {
            for (int j=1; j<8; j+=2) {
                int nx = x + X[j];
                int ny = y + Y[j];
                if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                if (arr[nx][ny]) arr[x][y]++;
            }
        }

        vector <pii> next;

        for (int a=0; a<N; a++) {
            for (int b=0; b<N; b++) {
                if (arr[a][b] >= 2 && !visited[a][b]) {
                    arr[a][b] -= 2;
                    next.push_back({a, b});
                }
            }
        }

        cloud = next;
    }

    int ans = 0;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            ans += arr[i][j];
        }
    }

    cout << ans;
    return 0;
}