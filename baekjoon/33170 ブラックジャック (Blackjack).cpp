#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int A, B, C;
    cin >> A >> B >> C;

    if (A + B + C <= 21) cout << 1;
    else cout << 0;
    return 0;
}