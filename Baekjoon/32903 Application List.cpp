#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    vector <bool> v(26);
    for (int i=0; i<N; i++) {
        string s; cin >> s;
        v[s[0] - 'a'] = 1;
    }

    for (int i=0; i<5; i++) {
        for (int j=0; j<6; j++) {
            int now = 6*i + j;
            if (now >= 26) break;
            if (v[now]) cout << (char) (now + 'a');
            else cout << '.';
        }
        cout << '\n';
    }

    return 0;
}