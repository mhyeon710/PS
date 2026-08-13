#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int R, C, M;
    cin >> R >> C >> M;

    int arr[R+1][C+1];
    memset(arr, 0, sizeof(arr));

    vector <array<int, 3>> shark(M+1);
    for (int i=1; i<=M; i++) {
        int x, y, s, d, z;
        cin >> x >> y >> s >> d >> z;

        arr[x][y] = i;
        shark[i] = {s, d, z}; // velocity, direction, size
    }

    int ans = 0;
    for (int j=1; j<=C; j++) {
        for (int i=1; i<=R; i++) {
            if (arr[i][j]) {
                int n = arr[i][j];
                ans += shark[n][2];

                arr[i][j] = 0;
                break;
            }
        }

        int temp[R+1][C+1];
        memset(temp, 0, sizeof(temp));

        for (int a=1; a<=R; a++) {
            for (int b=1; b<=C; b++) {
                if (!arr[a][b]) continue;

                int n = arr[a][b];
                auto [dist, dir, size] = shark[n];

                int x = a, y = b, step;
                while (dist) {
                    switch (dir) {
                        case 1:
                            step = min(dist, x-1);
                            x -= step;
                            dist -= step;
                            if (x == 1) dir = 2;
                            break;
                        case 2:
                            step = min(dist, R-x);
                            x += step;
                            dist -= step;
                            if (x == R) dir = 1;
                            break;
                        case 3:
                            step = min(dist, C-y);
                            y += step;
                            dist -= step;
                            if (y == C) dir = 4;
                            break;
                        case 4:
                            step = min(dist, y-1);
                            y -= step;
                            dist -= step;
                            if (y == 1) dir = 3;
                    }
                }

                shark[n][1] = dir;
                if (temp[x][y]) {
                    if (shark[temp[x][y]][2] < size) {
                        temp[x][y] = n;
                    }
                } else {
                    temp[x][y] = n;
                }
            }
        }

        memcpy(arr, temp, sizeof(temp));
    }

    cout << ans;
    return 0;
}