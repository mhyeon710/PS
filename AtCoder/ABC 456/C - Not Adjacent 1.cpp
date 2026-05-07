#include <iostream>
#include <vector>
#define MOD     998244353
#define ll      long long
using namespace std;

int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(false);

    string s; cin >> s;

    vector <int> v;
    for (int i=0; i<s.size()-1; i++) {
        if (s[i] == s[i+1]) v.push_back(i);
    }
    v.push_back(s.size() - 1);

    ll ans = 0;
    ll si = 0;
    for (int i=0; i<v.size(); i++) {
        ll len = v[i] - si + 1;
        ans += len * (len+1) / 2;
        ans %= MOD;
        si = v[i] + 1;
    }

    cout << ans;
    return 0;
}
