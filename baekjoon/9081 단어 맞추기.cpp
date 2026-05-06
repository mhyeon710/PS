#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        string s; cin >> s;

        vector <char> v;
        for (auto c:s) {
            v.push_back(c);
        }

        if (next_permutation(v.begin(), v.end())) {
            for (auto c:v) cout << c;
            cout << '\n';
        } else cout << s << '\n';
    }
    return 0;
}