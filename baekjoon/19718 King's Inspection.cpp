#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();

    vector <ll> v(3);
    cin >> v[0] >> v[1] >> v[2];

    sort(v.begin(), v.end());

    int ans = v[2] - v[1];
    int diff = v[1] - v[0];

    cout << ans + diff * 2;
    return 0;
}