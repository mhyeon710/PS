#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
#define MOD     1000000007
using namespace std;

int main() {
    fio();
    int N; cin >> N;
    int level = 0;

    vector <ll> v;
    for (int i=0; i<N; i++) {
        string s; cin >> s;
        if (s == "(") {
            v.push_back(-1);
            level++;
            if (level%2 == 0) v.push_back(0);
            else v.push_back(1);
        } else if (s == ")") {
            ll now = v[v.size()-1];
            v.pop_back();
            while (1) {
                if (v.empty() || v[v.size()-1] == -1) break;
                if (level%2 == 0) now = (now + v[v.size()-1]) % MOD;
                else now = (now * v[v.size()-1]) % MOD;
                v.pop_back();
            }
            if (v[v.size()-1] == -1) v.pop_back();
            v.push_back(now);
            level--;
        } else {
            v.push_back(stoll(s));
        }
    }

    ll ans = v[v.size()-1]; v.pop_back();
    while (!v.empty()) {
        ans = (ans + v[v.size()-1]) % MOD;
        v.pop_back();
    }

    cout << ans;
    return 0;
}