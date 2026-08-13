#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    string s; cin >> s;
    for (int i=1; i<N; i++) {
        string t; cin >> t;

        for (int i=0; i<s.size(); i++) {
            if (s[i] != t[i]) s[i] = '?';
        }
    }

    cout << s;
    return 0;
}