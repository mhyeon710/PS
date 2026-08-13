#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    vector <int> v(N+1);
    for (int i=1; i<=N; i++) cin >> v[i];
    
    vector <bool> check(N, 0);
    for (int i=1; i<=N; i++) {
        int r = (i - v[i]) % N;
        if (r < 0) r+= N;
        check[r] = 1;
    }

    int ans = -1;
    for (int i=0; i<N; i++) {
        if (!check[i]) {
            ans = i;
            break;
        }
    }

    cout << ans;
    return 0;
}