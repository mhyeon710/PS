#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    map <string, int> m[26];
    for (int i=0; i<N; i++) {
        string s;
        cin >> s;
        m[s[0] - 'A'][s]++;
    }

    ll ans = 0;
    for (int i=0; i<26; i++) {
        vector <pair<string, ll>> v;

        for (auto x:m[i]) {
            v.push_back({x.first, x.second});
        }

        for (int i=0; i<v.size(); i++) {
            for (int j=i+1; j<v.size(); j++) {
                ans += v[i].second * v[j].second * 2;
            }
        }
    }

    cout << ans;
    return 0;
}