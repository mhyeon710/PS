#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int main() {
    fio();
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    int sx1 = x2 - x1;
    int sy1 = y2 - y1;
    int g1 = gcd(sx1, sy1);
    // cout << sx1 << ' ' << sy1 << ' ' << g1 << '\n';
    sx1 /= g1; sy1 /= g1;
    // cout << sx1 << ' ' << sy1 << '\n';

    int sx2 = x3 - x1;
    int sy2 = y3 - y1;
    int g2 = gcd(sx2, sy2);
    // cout << sx2 << ' ' << sy2 << ' ' << g2 << '\n';
    sx2 /= g2; sy2 /= g2;
    // cout << sx2 << ' ' << sy2 << '\n';

    int sx3 = x3 - x2;
    int sy3 = y3 - y2;
    int g3 = gcd(sx3, sy3);
    // cout << sx3 << ' ' << sy3 << ' ' << g3 << '\n';
    sx3 /= g3; sy3 /= g3;
    // cout << sx3 << ' ' << sy3 << '\n';

    if (sx1 == sx2 && sx1 == sx3 && sy1 == sy2 && sy1 == sy3) cout << "WHERE IS MY CHICKEN?";
    else cout << "WINNER WINNER CHICKEN DINNER!"; 

    return 0;
}