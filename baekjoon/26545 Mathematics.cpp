#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    int ans = 0;
    for (int i=0; i<N; i++) {
        int x; cin >> x;
        ans += x;
    }

    cout << ans;
    return 0;
}