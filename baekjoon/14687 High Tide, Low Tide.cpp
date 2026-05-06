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

    sort(v.begin(), v.end());

    for (int i=N/2; i>=1; i--) {
        if (N%2) cout << v[i+1] << ' ';
        else cout << v[i] << ' ';

        cout << v[N+1-i] << ' ';
    }

    if (N%2) cout << v[1];
    return 0;
}