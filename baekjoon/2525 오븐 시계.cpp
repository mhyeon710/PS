#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int a, b; cin >> a >> b;
    int now = 60*a +b;
    int c; cin >> c;
    now += c;
    if (now >= 1440) now -= 1440;
    cout << now / 60 << ' ' << now % 60;
    return 0;
}