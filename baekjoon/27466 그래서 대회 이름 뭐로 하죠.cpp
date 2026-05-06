#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, M;
    cin >> N >> M;

    string s; cin >> s;

    bool can = false;
    string ans = "";

    int cnt = 0;
    for (int i=N-1; i>=0; i--) {
        if (cnt == 0) {
            if (s[i] == 'A' || s[i] == 'E'|| s[i] == 'I'|| s[i] == 'O'|| s[i] == 'U') {
                continue;
            } else {
                ans = s[i];
                cnt++;
                continue;
            }
        } else if (cnt == 1 || cnt == 2) {
            if (s[i] == 'A') {
                ans = 'A' + ans;
                cnt++;
                continue;
            }
        } else if (cnt == 3) {
            if (i+1 >= M-3) {
                ans = s.substr(0, M-3) + ans;
                can = true;
            } else {
            }
            break;
        }
    }

    if (can) cout << "YES\n" << ans;
    else cout << "NO";
    return 0;
}