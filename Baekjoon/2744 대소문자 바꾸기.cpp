#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    string s; cin >> s;
    for (int i=0; i<s.size(); i++) {
        if ('A' <= s[i] && s[i] <= 'Z') s[i] -= ('A' - 'a');
        else s[i] += ('A' - 'a');
    }

    cout << s;
    return 0;
}