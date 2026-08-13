#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    if (N == 1) {
        cout << -1;
    } else if (N%2 == 0) {
        for (int i=0; i<N/2; i++) cout << 1331;
    } else {
        for (int i=0; i<(N-3)/2; i++) cout << 1331;
        cout << 131923;
    }

    return 0;
} 