#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        double sa, pa, rb, pb;
        cin >> sa >> pa >> rb >> pb;

        double pi = 4 * atan(1);
        if (sa * pb > rb * rb * pi * pa) cout << "Slice of pizza\n";
        else cout << "Whole pizza\n";
    }
    return 0;
}