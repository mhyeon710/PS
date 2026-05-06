#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int W, H;
    cin >> W >> H;

    if (W%2 == 0 || H%2 == 0) cout << W*H/2 << ".0";
    else cout << W*H/2 << ".5";
    return 0;
}