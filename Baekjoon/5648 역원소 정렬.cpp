#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    vector <ll> v;
    for (int i=0; i<N; i++) {
        string s; cin >> s;
        reverse(s.begin(), s.end());
        ll x = stoll(s);
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    for (auto x:v) cout << x << '\n';
    return 0;
}