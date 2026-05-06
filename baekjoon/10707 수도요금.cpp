#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int A, B, C, D, P;
    cin >> A >> B >> C >> D >> P;

    int X = A * P;
    int Y = P<=C ? B : B + (P-C) * D;
    cout << min(X, Y);
    return 0;
}