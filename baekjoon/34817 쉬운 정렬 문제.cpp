#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, K, maxi, x;
    cin >> N >> K >> maxi;

    for (int i=1; i<N; i++) {
        cin >> x;
        if (maxi - x > K) {
            cout << "NO";
            return 0;
        }
        maxi = max(maxi, x);
    }

    cout << "YES";
    return 0;
}