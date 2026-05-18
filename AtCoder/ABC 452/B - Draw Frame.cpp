#include <iostream>
#include <vector>
#include <algorithm>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int H, W;
    cin >> H >> W;

    for (int i=1; i<=H; i++) {
        for (int j=1;j <=W; j++) {
            if (i == 1 || i == H || j == 1 || j == W) cout << '#';
            else cout << '.';
        }
        cout << '\n';
    }
    return 0;
}