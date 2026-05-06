#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    string s; cin >> s;

    vector <bool> v(s.size(), 1);

    for (int i=1; i<s.size(); i++) {
        if (s[i] == s[i-1]) {
            v[i] = 0;
        }
    }

    for (int i=0; i<s.size(); i++) {
        if (v[i]) cout << s[i];
    }
    return 0;
}