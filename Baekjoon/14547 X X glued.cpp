#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    while (1) {
        string a, b, c;
        cin >> a;
        if (a == "#") break;

        bool check = false;
        bool AND = false;
        cin >> b >> c;
        if (b[0] == b[1]) {
            AND = true;
            check = true;
            cout << b[0] << ' ' << b[1] << " glued";
        }

        if (b[0] != b[1] && b[1] == b[2]) {
            if (AND) cout << " and ";
            AND = true;
            check = true;
            cout << b[1] << ' ' << b[2] << " glued";
        }

        if (b[0] != b[2] && b[1] != b[2] && b[2] == b[3]) {
            if (AND) cout << " and ";
            check = true;
            cout << b[2] << ' ' << b[3] << " glued";
        }

        if (check) cout << '\n';
    }
    return 0;
}