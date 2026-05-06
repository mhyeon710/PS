#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int X[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int Y[8] = {2, 1, -1, -2, -2, -1, 1, 2};

int main() {
    fio();
    int k; cin >> k;

    set <pii> s;
    s.insert({1, 1});

    int now = 1, x = 1, y = 1;
    for (int i=0; i<k; i++) {
        
        int min = INT_MAX, tx, ty;
        for (int j=0; j<8; j++) {
            int nx = x + X[j];
            int ny = y + Y[j];

            if (nx < 1 || ny < 1) continue;
            if (s.find({nx, ny}) != s.end()) continue;

            int tnow = (nx + ny - 1) * (nx + ny - 2) / 2 + ny;

            if (tnow < min) {
                min = tnow;
                tx = nx;
                ty = ny;
            }
        }

        now = min;
        x = tx;
        y = ty;
        s.insert({x, y});
    }

    cout << now;
    return 0;
}