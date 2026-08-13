#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    while (N--) {
        int nx = 0, ny = 0, d = 0, mx, my;
        while (1) {
            int dx, dy;
            cin >> dx >> dy;
            if (dx == 0 && dy == 0) break;

            nx += dx; ny += dy;

            int tmp = nx * nx + ny * ny;
            if (tmp > d) {
                mx = nx, my = ny;
                d = tmp;
            } else if (tmp == d) {
                if (nx > mx) {
                    mx = nx, my = ny;
                }
            }
        }
        cout << mx << ' ' << my << '\n';
    }
    return 0;
}