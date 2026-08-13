#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    string s; cin >> s;
    int N = s.size();

    vector <int> v(26, 0);
    for (int i=0; i<N; i++) {
        v[s[i] - 'a']++;

        if (v[s[i] - 'a'] >= N/2 + N%2 + 1) {
            cout << -1;
            return 0;
        }
    }

    string ans = "";
    for (int t=1; t<=N; t++) {
        for (int i=0; i<26; i++) {
            if (v[i]) {
                if (t <= N/2 + N%2) {
                    ans += (char)('a' + i);
                    // cout << i << ' ' << (char)('a' + i) << endl;;
                    v[i]--;
                    break;
                } else {
                    if (ans[N-t] == (char)('a' + i)) {
                        continue;
                    }
                    else {
                        ans += (char)('a' + i);
                        // cout << i << ' ' << (char)('a' + i) << endl;;
                        v[i]--;
                        break;
                    }
                }
            }
        }
    }

    bool check = true;
    for (int i=0; i<26; i++) {
        if (v[i]) check = false;
    }

    if (check) cout << ans;
    else cout << -1;
    return 0;
}