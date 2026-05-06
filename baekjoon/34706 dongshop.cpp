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
        int N; cin >> N;
        for (int i=1; i<=N; i++) cout << i << ' ' << N/2 + 1 << '\n';
    }
    
    return 0;
}