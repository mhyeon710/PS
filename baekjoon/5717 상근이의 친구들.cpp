#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    while (1) {
        int a, b;
        cin >> a >> b;

        if (!a && !b) break;
        cout << a + b << '\n';
    }
    return 0;
}