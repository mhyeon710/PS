#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    vector <ll> a(N+1), b(N+1), suma(N+1);
    for (int i=1; i<=N; i++) cin >> a[i];
    for (int i=1; i<=N; i++) cin >> b[i];
    for (int i=1; i<=N; i++) suma[i] = suma[i-1] + b[i] - a[i];

    ll ans = 0;
    map <ll, ll> m;
    
    for (int i=1; i<=N; i++) {
        if (!suma[i]) ans++;
        ans += m[suma[i]]++;
    }

    cout << ans;
    return 0;
}