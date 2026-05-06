#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    while (1) {
        string s;
        int a, b;
        cin >> s >> a >> b;

        if (s == "#" && !a && !b) break;

        if (a > 17 || b >= 80) cout << s << " Senior\n";
        else cout << s << " Junior\n";
    }
    return 0;
}