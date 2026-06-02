#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main() {
    fio();
    int H, W;
    cin >> H >> W;

    for (int i=1; i<=H; i++) {
        for (int j=1; j<=W; j++) {
            int cnt = 0;

            for (int t=0; t<4; t++) {
                int x = i + dx[t];
                int y = j + dy[t];

                if (x <= 0  || x > H || y <= 0 || y > W) continue;
                cnt++;
            }
            cout << cnt << ' ';
        }
        cout << '\n';
    }
    return 0;
}