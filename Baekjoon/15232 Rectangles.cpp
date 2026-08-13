#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int R, C;
    cin >> R >> C;

    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}