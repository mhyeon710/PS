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
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;

        int fx, fy, gx, gy;
        cin >> fx >> fy >> gx >> gy;

        if (fx == gx && fy == gy) {
            cout << "0\n";
            continue;
        }

        bool v[N][N];
        memset(v, 0, sizeof(v));

        queue <pair<pii, int>> q;
        q.push({{fx, fy}, 0});
        v[fx][fy] = 1;

        bool br = false;
        while (!q.empty()) {
            auto [nx, ny] = q.front().first; 
            int cnt = q.front().second;
            q.pop();

            for (int i=0; i<8; i++) {
                int x = nx + X[i];
                int y = ny + Y[i];
                if (x < 0 || x >= N || y < 0 || y >= N) continue;
                if (v[x][y]) continue;
                
                if (x == gx && y == gy) {
                    cout << cnt+1 << '\n';
                    br = true;
                    break;
                }

                q.push({{x, y}, cnt+1});
                v[x][y] = 1;
            }

            if (br) break;
        }
    }
    return 0;
}