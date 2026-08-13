#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, S;
    cin >> N >> S;

    vector <int> v(N);
    for (int i=0; i<N; i++) {
        cin >> v[i];
    }

    int ans = 0;
    for (int i=0; i<N; i++) {
        int j = lower_bound(v.begin(), v.end(), S - v[i]) - v.begin();
        if (i >= j) break;
        if (v[i] + v[j] == S) ans++;
    }

    cout << ans;
    return 0;
}